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
    if(checkLimits(lex))
        Lexer::symbolTable->addSymbol(new Token(lastType, lex, line));
}

bool SyntacticActions::checkLimits(string key){
    string type = "";

    try{
        switch(SyntacticActions::lastType){
        case CTE_SHORT: {
            type = "SHORT";
            key.resize(key.size() -2);
            int value = std::stoi(key);
            if (value < -128 || value > 127)
                throw std::out_of_range("");
            break;
        }
        case CTE_UINT: {
            type = "UINT";
            key.resize(key.size() -3);
            // Chequea si la constante es negativa, un entero sin signo jamas puede ser negativo
            if(key.rfind("-", 0) == 0)
                throw std::out_of_range("");
            unsigned int uivalue = stoul(key);
            break;
        }
        case CTE_DOUBLE: {
            type = "DOUBLE";
            int index = key.find('D');
            if(index == string::npos)
                index = key.find('d');
            if(index != string::npos)
                key = key.replace(index, 1, "e");
            double value = stod(key);
            break;
        }
    }
    }catch(const std::exception& e){
        string msg = "constante de tipo " + type + " fuera de rango";
        Logger::logError(msg);
        return false;
    }

    return true;
}

void SyntacticActions::checkReturnScope(){
    if(IntermediateCodeGenerator::scope == IntermediateCodeGenerator::initialScope)
        Logger::logError("Sentencia RETURN fuera del cuerpo de una funcion");
}