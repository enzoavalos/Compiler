#include "./SyntacticActions.h"
#include "../Logger.cpp"
#include "../Parser/gramatica.tab.hpp"

Token * SyntacticActions::getSymbolToken(string key){
    return Lexer::symbolTable->getSymbol(key);
}

void SyntacticActions::check_division_by_zero(char* key){
        Token * token = getSymbolToken(key);
        try
        {
            if(token->getTokenType() == ID)
                return;
            double value = std::stod(token->getLexeme());
            if(value == 0.0)
                throw std::invalid_argument("");
        }
        catch(const std::invalid_argument& e){
            Logger::logError("division por cero");
        }
}

void SyntacticActions::addNegativeConstant(char* key){
    int line = Lexer::symbolTable->getSymbol(key)->getLine();
    string lex = "-";
    lex.append(Lexer::symbolTable->getSymbol(key)->getLexeme());
    Lexer::symbolTable->deleteSymbol(key);
    if(checkLimits(lex)){
        int aux = CTE_SHORT;
        string type = "short";
        if(lastType == "uint") {
            aux = CTE_UINT;
            type = "uint";
        }
        else if(lastType == "double") {
            aux = CTE_DOUBLE;
            type = "double";
        }

        Token* token = new Token(aux, lex, line);
        token->setType(type);
        token->setUse("constante");
        Lexer::symbolTable->addSymbol(token, lex);
    }
}

bool SyntacticActions::checkLimits(string key){
    string type = "";

    try{
        if(lastType == "short") {
            type = "SHORT";
            key.resize(key.size() -2);
            int value = std::stoi(key);
            if (value < -128 || value > 127)
                throw std::out_of_range("");
        }
        else if(lastType == "uint") {
            type = "UINT";
            key.resize(key.size() -3);
            // Chequea si la constante es negativa, un entero sin signo jamas puede ser negativo
            if(key.rfind("-", 0) == 0)
                throw std::out_of_range("");
            unsigned int uivalue = stoul(key);
        }
        else if(lastType == "double") {
            type = "DOUBLE";
            int index = key.find('D');
            if(index == string::npos)
                index = key.find('d');
            if(index != string::npos)
                key = key.replace(index, 1, "e");
            double value = stod(key);
        }else
            return false;
    }catch(const std::exception& e){
        string msg = "constante de tipo " + type + " fuera de rango";
        Logger::logError(msg);
        return false;
    }

    return true;
}

bool SyntacticActions::checkReturnScope(){
    if(IntermediateCodeGenerator::scope == IntermediateCodeGenerator::initialScope){
        Logger::logError("Sentencia RETURN fuera del cuerpo de una funcion");
        return false;
    }
    return true;
}

void SyntacticActions::setIdType(char* id, char* type = nullptr){
    string lexeme = id;
    lexeme += ":" + IntermediateCodeGenerator::scope;
    Token * token = getSymbolToken(lexeme);

    if(token == NULL)
        return;
    
    if(type == nullptr){
        if(lastType == "short") {
            token->setType("short");
            return;
        }
        else if(lastType == "uint") {
            token->setType("uint");
            return;
        }
        else if(lastType == "double") {
            token->setType("double");
            return;
        }
    }

    token->setType(type);
}

void SyntacticActions::setIdUse(char* key, string use){
    string lexeme = key;
    lexeme += ":" + IntermediateCodeGenerator::scope;
    Token * token = getSymbolToken(lexeme);

    if(token != NULL)
        token->setUse(use);
}

bool SyntacticActions::checkRedeclaration(string lexeme, bool showMsg = true){
    string errorMsg = "Redeclaracion de identificador " + lexeme;
    Token * token = getSymbolToken(lexeme + ":" + IntermediateCodeGenerator::scope);

    if (token != NULL) {
        if(showMsg)
            Logger::logError(errorMsg);
        Lexer::symbolTable->deleteSymbol(lexeme);
        return true;
    }

    return false;
}

bool SyntacticActions::checkDeclaredVar(char* key, bool showMsg = true){
    string lexeme = key;
    string errorMsg = "Variable " + lexeme + " no declarada";

    if(!findId(lexeme)){
        if(showMsg)
            Logger::logError(errorMsg);
        return false;
    }

    return true;
}

bool SyntacticActions::isConstant(string lexeme){
    Token* token = getSymbolToken(lexeme);
    if(token == NULL)
        return false;
    int type = token->getTokenType();
    return type == CTE_DOUBLE || type == CTE_SHORT || type == CTE_UINT;
}

Token* SyntacticActions::findId(string id){
    if(isConstant(id))
        return getSymbolToken(id);

    string lexeme = id;
    string scope = IntermediateCodeGenerator::scope;
    Token* token = NULL;
    bool end = false;

    do{
        lexeme = id;
        lexeme += ":" + scope;
        token = getSymbolToken(lexeme);

        end = (scope == IntermediateCodeGenerator::initialScope);
        size_t lastScope = scope.rfind(":");
        if (lastScope != string::npos)
            scope = scope.substr(0, lastScope);
        
    } while(token == NULL && !end);
    
    return token;
}

bool SyntacticActions::checkDeclaredMethod(char* key, bool showMsg = true){
    string lexeme = key;
    string errorMsg = "Funcion " + lexeme + " no declarada";

    if(findId(lexeme) == NULL){
        if(showMsg)
            Logger::logError(errorMsg);
        return false;
    }

    return true;
}

bool SyntacticActions::checkDeclaredClass(char* key, bool showMsg = true){
    string lexeme = key;
    string errorMsg = "Tipo " + lexeme + " no declarado";
    // Clases e interfaces solo pueden ser declaradas en un ambito global
    lexeme += ":" + IntermediateCodeGenerator::initialScope;
    Token * token = getSymbolToken(lexeme);

    if(token == NULL || (token->getUse() != "nombre-clase" && token->getUse() != "nombre-interfaz")){
        if(showMsg)
            Logger::logError(errorMsg);
        return false;
    }

    Lexer::symbolTable->deleteSymbol(key);

    return true;
}

bool SyntacticActions::checkDeclaredClassMember(char* key, char* _class){
    string lexeme = key;
    string className = _class;
    string errorMsg = "Miembro " + lexeme + " de clase " + className +" no declarado";

    if(!findId(lexeme)){
        Logger::logError(errorMsg);
        return false;
    }

    return true;
}

bool SyntacticActions::checkTypes(char* key1, char* key2){
    if (key1 == NULL || key2 == NULL) {
        return false;
    }
    string lexeme1 = key1;
    string lexeme2 = key2;


    // Revisar en la tabla de simbolos, si es un ID se debe usar el ambito
    Token * token1 = isId(lexeme1) ? findId(lexeme1) : getSymbolToken(lexeme1);
    Token * token2 = isId(lexeme2) ? findId(lexeme2) : getSymbolToken(lexeme2);

    string type1="";
    string type2="";

    if(token1 == NULL) {
        if (isTerceto(lexeme1)) {
            type1 = IntermediateCodeGenerator::getTercetoType(lexeme1);
        } else {
            Logger::logError("Variable " + lexeme1 + " no declarada");
            return false;
        }
    } else {
        type1 = token1->getType();
    }

    if(token2 == NULL) {
        if (isTerceto(lexeme2)) {
            type2 = IntermediateCodeGenerator::getTercetoType(lexeme2);
        } else {
            Logger::logError("Variable " + lexeme2 + " no declarada");
            return false;
        }
    } else {
        type2 = token2->getType();
    }

    if(type1 != type2){
        string errorMsg = "Tipos incompatibles: " + token1->getType() + " y " + token2->getType();
        Logger::logError(errorMsg);
        return false;
    }

    return true;
}

bool SyntacticActions::isTerceto(string key){
    return key.find_first_not_of("0123456789") == string::npos;
}

bool SyntacticActions::isId(string key){
    return key.find_first_not_of("abcdefghijklmnopqrstuvwxyz_0123456789") == string::npos;
}

bool SyntacticActions::checkParameters(string function, string parameter="") {
    Token * token = findId(function);

    if(parameter == "" || parameter == "-"){
        if(token->getParameter() == NULL)
            return true;
        else{
            Logger::logError("La funcion " + function + " esperaba un parametro");
            return false;
        }
    }

    if(token->getParameter() == NULL){
        Logger::logError("La funcion " + function + " no recibe parametros");
        return false;
    }

    Token * parameterToken = isId(parameter) ? findId(parameter) : getSymbolToken(parameter);

    if(parameterToken == NULL) {
        if (isTerceto(parameter)) {
            string type = IntermediateCodeGenerator::getTercetoType(parameter);
            return type == token->getParameter()->getType();
        }
        Logger::logError("El parametro " + parameter + " no esta declarado");
        return false;
    }

    if(token->getParameter()->getType() != parameterToken->getType()){
        Logger::logError("El parametro " + parameter + " no coincide con el argumento de la funcion " + function);
        return false;
    }

    return true;
}

void SyntacticActions::addParamToMethod(char* function, char* paramater){
    if(paramater == NULL)
        return;
    
    string auxScope;
    size_t lastScope = IntermediateCodeGenerator::scope.rfind(":");
    if (lastScope != string::npos)
        auxScope = IntermediateCodeGenerator::scope.substr(0, lastScope);


    string functionLex = function;
    functionLex += ":" + auxScope;
    Token * token = getSymbolToken(functionLex);

    string paramaterLex = paramater;
    paramaterLex += ":" + IntermediateCodeGenerator::scope;
    Token * paramaterToken = getSymbolToken(paramaterLex);

    if(token == NULL)
        return;

    token->setParameter(paramaterToken);
}

bool SyntacticActions::checkForArguments(string arg1, string arg2, string arg3){
    Token* token1 = getSymbolToken(arg1);
    Token* token2 = getSymbolToken(arg2);
    Token* token3 = getSymbolToken(arg3);

    bool validArgs = (token1->getTokenType() == CTE_SHORT && token2->getTokenType() == CTE_SHORT && token3->getTokenType() == CTE_SHORT);
    if(!validArgs){
        Logger::logError("Argumentos invalidos, se esperan constantes de tipo SHORT");
        return false;
    }

    bool validRanges = (checkLimits(arg1) && checkLimits(arg2) || checkLimits(arg3));

    return validRanges;
}

void SyntacticActions::addClassComposition(char* key){
    string lexeme = key;

    Token* token = findId(lexeme);

    if (IntermediateCodeGenerator::isInvalidScope) {
        return;
    }

    if (token == NULL) {
        Logger::logError("Clase " + lexeme + " no declarada");
        return;
    }

    if (token->getUse() != "nombre-clase" && token->getUse() != "nombre-interfaz") {
        Logger::logError("El identificador " + lexeme + " no corresponde a una clase");
        return;
    }


    string className = IntermediateCodeGenerator::scope.find_last_of(":") != string::npos ?
        IntermediateCodeGenerator::scope.substr(IntermediateCodeGenerator::scope.find_last_of(":") + 1) : IntermediateCodeGenerator::scope;

    Token * classToken = findId(className);

    if (classToken == NULL) {
        Logger::logError("Clase " + className + " no declarada");
        return;
    }

    if (classToken->getUse() == "nombre-clase") {
        Logger::infoMsg("Clase " + className + " hereda de " + lexeme);
        classToken->setFather(token);
    }
}

void SyntacticActions::addObject(char* key){
    string lexeme = key;

    objects.push(lexeme);
}

string SyntacticActions::getObject(){
    string object = objects.top();
    objects.pop();
    return object;
}

void SyntacticActions::addClassToObjects(char* key){
    string lexeme = key;

    Token* token = findId(lexeme);

    if (token == NULL) {
        Logger::logError("Clase " + lexeme + " no declarada");
        return;
    }

    if (token->getUse() != "nombre-clase") {
        Logger::logError("El identificador " + lexeme + " no es una clase");
        return;
    }

    do {
        string object = getObject();
        Token* objectToken = findId(object);

        if (objectToken == NULL || objectToken->getUse() != "variable-objeto") {
            Logger::logError("Objeto " + object + " no declarado");
            continue;
        }

        objectToken->setType(token->getLexeme());
    } while (!objects.empty());
}

/*
Token* SyntacticActions::findMember(string object, string member){
    Token* token = findId(object);
    Token* classToken = findId(token->getType());

    do {
        // Revisar todas las variblas en el ambito de la clase
        list<string>* lista = Lexer::symbolTable->getSymbolsByScope(classToken->getLexeme());

        for(const string& str : *lista) {
            string memberAux = str.substr(0, str.find(":"));
            string auxscope = str.substr(str.find(":") + 1);

            if (memberAux == member && auxscope.find(classToken->getLexeme()) != string::npos) {
                cout << "Miembro " << member << " encontrado en la clase " << auxscope << endl;

                return getSymbolToken(str);
            }
        }
        classToken = classToken->getFather();
    } while (classToken != NULL);

    return NULL;
}*/

bool SyntacticActions::checkHasMember(string object, string member, char* parameter=NULL) {
    Token* objectToken = findId(object);

    if (objectToken == NULL || objectToken->getUse() != "variable-objeto") {
        Logger::logError("Objeto " + object + " no declarado");
        return false;
    }
    Token* classToken = findId(objectToken->getType());

    do {
        // Revisar todas las variblas en el ambito de la clase
        list<string>* lista = Lexer::symbolTable->getSymbolsByScope(classToken->getLexeme());

        for(const string& str : *lista) {
            string memberAux = str.substr(0, str.find(":"));
            string auxscope = str.substr(str.find(":") + 1);

            // TODO 4 Comparar lexema contra todo el ambito
            if (memberAux == member && auxscope.find(classToken->getLexeme()) != string::npos) {
                cout << "Miembro " << member << " encontrado en la clase " << auxscope << endl;

                // En caso de que corresponda a un metodo se deben chequear sus parametros
                Token* memberToken = getSymbolToken(str);
                if(memberToken->getUse() == "nombre-funcion"){
                    string lastScope = IntermediateCodeGenerator::scope;
                    IntermediateCodeGenerator::scope = auxscope;
                    bool valid = checkParameters(member, parameter);
                    IntermediateCodeGenerator::scope = lastScope;
                    return valid;
                }
                return true;
            }
        }
        classToken = classToken->getFather();
    } while (classToken != NULL);

    cout << "Atributo " << member << " no encontrado en la clase " << objectToken->getType() << endl;

    return false;
}

bool SyntacticActions::classImplementsInterfaceMethods(char* interface){
    string interfaceLex = interface;
    list<string>* lista = Lexer::symbolTable->getSymbolsByScope(interfaceLex);

    for(const string& str : *lista) {
        Token* memberToken = getSymbolToken(str);
        if(memberToken != NULL && memberToken->getUse() == "nombre-funcion"){
            if(!checkRedeclaration(memberToken->getLexeme(), false)){
                Logger::logError("La clase no implementa todos los metodos de la interfaz " + interfaceLex);
                return false;
            }else{
                Token* functionToken = findId(memberToken->getLexeme())->getParameter();
                string parameter = functionToken ? functionToken->getLexeme() : "";
                if(!checkParameters(memberToken->getLexeme(), parameter)){
                    return false;
                }
            }
        }
    }

    return true;
}