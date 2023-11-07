#include "./SyntacticActions.h"
#include "../Logger.cpp"
#include "../Parser/gramatica.tab.hpp"

Token * SyntacticActions::getSymbolToken(char* key){
    string aux = key;
    return Lexer::symbolTable->getSymbol(aux);
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
        Lexer::symbolTable->addSymbol(token);
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
    Token * token = getSymbolToken(id);
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
    Token* token = getSymbolToken(key);
    token->setUse(use);
}