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
            if(token->getType() == ID)
                return;
            double value = std::stod(token->getLexeme());
            if(value == 0.0)
                throw std::invalid_argument("");
        }
        catch(const std::invalid_argument& e){
            Logger::logError("division por cero");
        }
}

void SyntacticActions::checkLimitsDouble(char* key){
    Token * token = getSymbolToken(key);
    try
    {
        double value = std::stod(token->getLexeme());
    }
    catch(const std::exception& e){
        Logger::logError("constante de tipo DOUBLE fuera de rango");
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
        Logger::logError("constante de tipo SHORT fuera de rango");
    }
}

void SyntacticActions::checkLimitsUint(char* key){
    Token * token = getSymbolToken(key);
    try
    {
        unsigned int value = std::stod(token->getLexeme());
    }
    catch(const std::exception& e){
        Logger::logError("constante de tipo UINT fuera de rango");
    }
}

void SyntacticActions::addNegativeConstant(char* key){
    int line = Lexer::symbolTable->getSymbol(key)->getLine();
    Lexer::symbolTable->deleteSymbol(key);
    string lex = "-";
    lex.append(key);
    Lexer::symbolTable->addSymbol(new Token(lastType, lex, line));
}