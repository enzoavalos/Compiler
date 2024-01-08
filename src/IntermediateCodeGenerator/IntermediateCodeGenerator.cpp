#include "IntermediateCodeGenerator.h"
#include "..\Logger.cpp"
#include "..\Parser\SyntacticActions.h"

void IntermediateCodeGenerator::addScope(string newScope){
    if (!IntermediateCodeGenerator::isInvalidScope)
        IntermediateCodeGenerator::lastValidTerceto = IntermediateCodeGenerator::lastTerceto;
    scope += ":" + newScope;
}

void IntermediateCodeGenerator::onScopeFinished(char* end = nullptr)
{
    finishReturnStatement(end);
    
    string lastScopeString = scope;
    size_t lastScope = scope.rfind(":");
    if (lastScope != string::npos)
        lastScopeString = scope.substr(lastScope + 1, scope.length());
        scope = scope.substr(0, lastScope);

    if (IntermediateCodeGenerator::isInvalidScope) {
        // Borro todas las variables del scope
        list<string>* lista = Lexer::symbolTable->getSymbolsByScope(lastScopeString);

        for(const string& str : *lista)
            Lexer::symbolTable->deleteSymbol(str);

        // Borro todos los tercetos invalidos
        deleteInvalidTercetos();

        IntermediateCodeGenerator::isInvalidScope = false;
    }
    SyntacticActions::emptyObjects(true);
}

void IntermediateCodeGenerator::deleteInvalidTercetos(){
    for (int i = lastValidTerceto + 1; i <= lastTerceto; i++)
        removeTerceto(i);
}

void IntermediateCodeGenerator::removeTerceto(int tercetoNumber)
{
    tercetos.erase(tercetoNumber);
}

void IntermediateCodeGenerator::deleteFunctionTercetos(string lexeme){
    Token* token = Lexer::symbolTable->getSymbol(lexeme);
    if(token != NULL && token->getBegin() != -1){
        for(int i=token->getBegin(); i <= token->getEnd(); i++)
            removeTerceto(i);
    }
}

void IntermediateCodeGenerator::setVarScope(char *key)
{
    string lexeme = key;
    Lexer::symbolTable->setScope(lexeme, scope);
}

void IntermediateCodeGenerator::setCustomScope(string lexeme, string newScope){
    // Determines whether lexeme is only and ID or an ID after name mangling
    if (lexeme.rfind(":") == string::npos)
        lexeme += ":" + scope;
        
    if (newScope.rfind(":") == string::npos)
        newScope = scope + ":" + newScope;
    Lexer::symbolTable->setScope(lexeme, newScope);
}

void IntermediateCodeGenerator::addTerceto(Terceto terceto)
{
    lastTerceto++;
    terceto.setLine(TransitionMatrix::getLine());
    tercetos[lastTerceto] = terceto;
}

void IntermediateCodeGenerator::addTerceto(string operatorTercerto, string operand1, string operand2){
    string type = "no-type";
    if(SyntacticActions::isTerceto(operand1))
        type = getTercetoType(operand1);
    else{
        Token * token = SyntacticActions::findId(operand1);
        if(token != NULL)
            type = token->getType();
    }
    
    if(!SyntacticActions::isTerceto(operand1) && !SyntacticActions::isConstant(operand1) && !SyntacticActions::isString(operand1)
        && operand1.rfind(":") == string::npos && operand1 != "") {
            operand1 = SyntacticActions::findId(operand1)->getKey();
        }
        
    if(!SyntacticActions::isTerceto(operand2) && !SyntacticActions::isConstant(operand2) && !SyntacticActions::isString(operand2)
    && operand2.rfind(":") == string::npos && operand2 != "") {
        operand2 = SyntacticActions::findId(operand2)->getKey();
    }
    
    Terceto terceto = Terceto(operatorTercerto, operand1, operand2, type);
    lastTerceto++;
    terceto.setLine(TransitionMatrix::getLine());
    tercetos[lastTerceto] = terceto;
}

void IntermediateCodeGenerator::addStack(int tercetoNumber)
{
    pila.push(tercetoNumber);
}

int IntermediateCodeGenerator::removeStack()
{
    if(pila.empty())
        return stackEmpty;
    int value = pila.top();
    pila.pop();
    return value;
}

void IntermediateCodeGenerator::printTercetos()
{
    cout << "\nTercetos" << endl;
    map<int, Terceto>::iterator it;
    for (it = tercetos.begin(); it != tercetos.end(); it++)
    {
        cout << "Linea " << it->second.getLine() << " => " << it->first << ": " << it->second.getOp() << " " << it->second.getOp1() <<
            " " << it->second.getOp2() << endl;
    }
}

char *IntermediateCodeGenerator::getLastTerceto()
{
    // Convert lastTerceto to pointer of char
    string lastTercetoString = to_string(lastTerceto);
    char *lastTercetoChar = new char[lastTercetoString.length() + 1];
    strcpy(lastTercetoChar, lastTercetoString.c_str());
    return lastTercetoChar;
}

void IntermediateCodeGenerator::ifElseExpression(char *cond, char *first, char *second)
{
    if(cond == NULL || first == NULL || second == NULL)
        return;
    int condInt = atoi(cond);
    int firstInt = atoi(first);
    int secondInt = atoi(second);

    addLabelTerceto();

    // Bifurcacion incondicional
    int tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(to_string(secondInt + 1));

    // Bifurcacion por falso
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp2(to_string(firstInt));
}

void IntermediateCodeGenerator::ifExpression(char *cond, char *first)
{
    if(cond == NULL || first == NULL)
        return;
    int firstInt = atoi(first);
    // Unconditional bifurcation not needed, thus its removed
    int aux = removeStack();
    removeTerceto(aux);

    int tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp2(to_string(firstInt));
}

void IntermediateCodeGenerator::endCondition()
{
    string lastTercetoString = to_string(lastTerceto);
    addTerceto("BF", lastTercetoString, "");
    addStack(lastTerceto);
}

void IntermediateCodeGenerator::forArguments(char *inic, char *end, char *inc)
{
    string inicString = inic;
    string endString = end;
    string incString = inc;

    // Tercetos de asignacion, suma y comparacion para el FOR
    addTerceto("=", "", inicString);
    addStack(lastTerceto);

    // Se agrega label para salto incondicional
    addLabelTerceto();
    addStack(lastTerceto);

    // Primero se chequea la condicion y despues se actualiza la variable
    // Dependiendo del signo de la variable de incremento es como se hace la comparacion
    if(incString.find('-') == string::npos)
        addTerceto("<", "", endString);
    else
        addTerceto(">", "", endString);
    addStack(lastTerceto);

    addTerceto("+", "", incString);
    addStack(lastTerceto);

    addTerceto("BF", to_string(lastTerceto -1), "");
    addStack(lastTerceto);
}

void IntermediateCodeGenerator::forBlock(char *id, char *block)
{
    int blockInt = atoi(block);
    int tercetoNumber = removeStack();

    // Seteo el terceto de BF con el numero del terceto posterior al bloque
    tercetos[tercetoNumber].setOp2(to_string(blockInt + 2));
    string idType = SyntacticActions::findId(id)->getType();
    string idString = SyntacticActions::findId(id)->getKey();
    // Asigno el identificador a los tercetos de asignacion, suma y comparacion
    // Suma
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(idString);
    tercetos[tercetoNumber].setType(idType);

    // Comparacion
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(idString);
    tercetos[tercetoNumber].setType(idType);

    // Bifuracion incondicional a label previo a la comparacion
    tercetoNumber = removeStack();
    addTerceto("BI", to_string(tercetoNumber), "");

    // Se agrega label para salto por falso
    addLabelTerceto();

    // Asignacion inicial
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(idString);
    tercetos[tercetoNumber].setType(idType);
}

void IntermediateCodeGenerator::returnStatement(){
    string ret = "RETURN:" + scope;
    addTerceto(ret, "", "");
    returnStack.push(lastTerceto);
}

void IntermediateCodeGenerator::finishReturnStatement(char *end){
    if(end != nullptr){
        bool done = false;
        while(!returnStack.empty() && !done){
            int tercetoNumber = returnStack.top();
            size_t found = tercetos[tercetoNumber].getOp().find(scope);
            if(found != string::npos){
                returnStack.pop();
                int functionEnd = atoi(end);
                tercetos[tercetoNumber].setOp1(to_string(functionEnd +1));
                tercetos[tercetoNumber].setOp("RETURN");
            } else
                done = true;
        }
    }
}

string IntermediateCodeGenerator::getTercetoType(string tercetoNumber) {
    int terceto = atoi(tercetoNumber.c_str());
    string op = tercetos[terceto].getOp();
    
    if(op == "BF" || op == "BI" || op == "RETURN")
        return "void";
    else
        return tercetos[terceto].getType();
}

void IntermediateCodeGenerator::addLabelTerceto(){
    string op = "Label" + to_string(lastTerceto+1);
    addTerceto(op,"","");
}

void IntermediateCodeGenerator::addLabelTerceto(string label, string op){
    addTerceto(label, op,"");

    if(label == "inic_func"){
        Token* token = Lexer::symbolTable->getSymbol(op + ":" + scope);
        if(token != NULL)
            token->setBegin(lastTerceto);
    } else if(label == "end_func"){
        Token* token = Lexer::symbolTable->getSymbol(op + ":" + scope);
        if(token != NULL)
            token->setEnd(lastTerceto);
    }
}

map<int, Terceto> * IntermediateCodeGenerator::getTercetos(){
    return &tercetos;
}

Terceto * IntermediateCodeGenerator::getTerceto(int tercetoNumber){
    return tercetos.find(tercetoNumber) != tercetos.end() ? &tercetos[tercetoNumber] : nullptr;
}