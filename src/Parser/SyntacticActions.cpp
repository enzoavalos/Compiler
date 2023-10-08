#include "./SyntacticActions.h"
#include "../Logger.cpp"

Token * SyntacticActions::getSymbolToken(char* key){
    string aux = key;
    return Lexer::symbolTable->getSymbol(aux);
}

void SyntacticActions::check_division_by_zero(char* key){
        Token * token = getSymbolToken(key);
        try
        {
            double value = std::stod(token->getLexeme());
            if(value == 0.0)
                throw std::invalid_argument("");
        }
        catch(const std::exception& e){
            Logger::logError("division por cero", token->getLine());
        }
}

void SyntacticActions::checkLimitsDouble(char* key){
    Token * token = getSymbolToken(key);
    try
    {
        double value = std::stod(token->getLexeme());
    }
    catch(const std::exception& e){
        Logger::logError("constante de tipo DOUBLE fuera de rango", token->getLine());
    }
}

void SyntacticActions::checkLimitsShort(char* key){
    Token * token = getSymbolToken(key);
    try
    {
        int value = std::stod(token->getLexeme());
        if (value < -128 || value > 127)
            throw std::out_of_range("");
    }
    catch(const std::exception& e){
        Logger::logError("constante de tipo SHORT fuera de rango", token->getLine());
    }
}

void SyntacticActions::checkLimitsUint(char* key){
    Token * token = getSymbolToken(key);
    try
    {
        unsigned int value = std::stod(token->getLexeme());
    }
    catch(const std::exception& e){
        Logger::logError("constante de tipo UINT fuera de rango", token->getLine());
    }
}

void SyntacticActions::addNegativeConstant(char* key, char type){
    
}