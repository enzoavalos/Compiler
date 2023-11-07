#include "IntermediateCodeGenerator.h"
#include "..\Logger.cpp"

void IntermediateCodeGenerator::addScope(char *newScope)
{
    string aux = newScope;
    scope += ":" + aux;
}

void IntermediateCodeGenerator::onScopeFinished(char* end = nullptr)
{
    finishReturnStatement(end);
    
    size_t lastScope = scope.rfind(":");
    if (lastScope != string::npos)
        scope = scope.substr(0, lastScope);
}

void IntermediateCodeGenerator::setVarScope(char *key)
{
    string lexeme = key;
    Lexer::symbolTable->setScope(lexeme, scope);
}

void IntermediateCodeGenerator::addTerceto(Terceto terceto)
{
    lastTerceto++;
    terceto.setLine(TransitionMatrix::getLine());
    tercetos[lastTerceto] = terceto;
}

void IntermediateCodeGenerator::addTerceto(string operatorTercerto, string operand1, string operand2)
{
    Terceto terceto = Terceto(operatorTercerto, operand1, operand2);
    lastTerceto++;
    terceto.setLine(TransitionMatrix::getLine());
    tercetos[lastTerceto] = terceto;
}

void IntermediateCodeGenerator::completeTerceto(int tercetoNumber, string op)
{
    tercetos[tercetoNumber].setOp(op);
}

void IntermediateCodeGenerator::removeTerceto(int tercetoNumber)
{
    tercetos.erase(tercetoNumber);
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

void IntermediateCodeGenerator::assignTerceto(char *operatorTerceto, char *operand1, char *operand2)
{
    string operatorString = operatorTerceto;
    string operand1String = operand1;
    string operand2String = operand2;
    addTerceto(operatorString, operand1String, operand2String);
}

void IntermediateCodeGenerator::modifyLastTercetoOperator(char *op)
{
    string lexeme = op;
    tercetos[lastTerceto - 1].setOp2(lexeme);
}

void IntermediateCodeGenerator::printTercetos()
{
    cout << endl;
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
    int condInt = atoi(cond);
    int firstInt = atoi(first);
    int secondInt = atoi(second);

    int tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(to_string(secondInt + 1));

    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp2(to_string(firstInt + 1));
}

void IntermediateCodeGenerator::ifExpression(char *cond, char *first)
{
    int firstInt = atoi(first);
    // Unconditional bifurcation not needed, thus its removed
    int aux = removeStack();
    removeTerceto(aux);

    int tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp2(to_string(firstInt + 1));
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

    // Primero se chequea la condicion y despues se actualiza la variable
    addTerceto("<", "", endString);
    addStack(lastTerceto);

    addTerceto("+", "", incString);
    addStack(lastTerceto);

    addTerceto("BF", to_string(lastTerceto -1), "-");
    addStack(lastTerceto);
}

void IntermediateCodeGenerator::forBlock(char *id, char *block)
{
    int tercetoNumber = pila.top();
    int blockInt = atoi(block);
    pila.pop();

    // Seteo el terceto de BF con el numero del terceto posterior al bloque
    tercetos[tercetoNumber].setOp2(to_string(blockInt + 2));

    string idString = id;
    // Asigno el identificador a los tercetos de asignacion, suma y comparacion
    // Comparacion
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(idString);

    // Suma, aca tambien creamos el branch incondicional que siempre va al incremento despues de cada bucle
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(idString);
    addTerceto("BI", to_string(tercetoNumber), "-");

    // Asignacion inicial
    tercetoNumber = removeStack();
    tercetos[tercetoNumber].setOp1(idString);
}

void IntermediateCodeGenerator::returnStatement(){
    string ret = "RETURN:" + scope;
    addTerceto(ret, "", "-");
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
            }else
                done = true;
        }
    }
}