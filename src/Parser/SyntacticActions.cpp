#include "./SyntacticActions.h"
#include "../Logger.cpp"
#include "../Parser/gramatica.tab.hpp"
#include <list>

Token * SyntacticActions::getSymbolToken(char* key){
    string aux = key;
    return Lexer::symbolTable->getSymbol(aux);
}

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

bool SyntacticActions::checkRedeclaration(char*key, bool showMsg = true){
    string lexeme = key;
    string errorMsg = "Redeclaracion de identificador " + lexeme;
    Token * token = getSymbolToken(lexeme + ":" + IntermediateCodeGenerator::scope);

    if (token != NULL) {
        if(showMsg)
            Logger::logError(errorMsg);
        Lexer::symbolTable->deleteSymbol(key);
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

bool SyntacticActions::checkParameters(char* function, char* parameter) {
    string functionLex = function;
    Token * token = findId(functionLex);

    if(parameter == NULL){
        if(token->getParameter() == NULL)
            return true;
        else{
            Logger::logError("La funcion " + functionLex + " esperaba un parametro");
            return false;
        }
    }

    if(token->getParameter() == NULL){
        Logger::logError("La funcion " + functionLex + " no recibe parametros");
        return false;
    }

    string parameterLex = parameter;
    Token * parameterToken = isId(parameter) ? findId(parameterLex) : getSymbolToken(parameter);

    if(parameterToken == NULL) {
        if (isTerceto(parameterLex)) {
            string type = IntermediateCodeGenerator::getTercetoType(parameterLex);
            return type == token->getParameter()->getType();
        }
        Logger::logError("El parametro " + parameterLex + " no esta declarado");
        return false;
    }

    if(token->getParameter()->getType() != parameterToken->getType()){
        Logger::logError("El parametro " + parameterLex + " no coincide con el argumento de la funcion " + functionLex);
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