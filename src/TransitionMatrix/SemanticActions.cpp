#include "SemanticActions.h"
#include "TransitionMatrix.h"
#include "../Logger.cpp"
#include "../Parser/gramatica.tab.hpp"

Token * SemanticActions::initialize_token(TransitionMatrix *t, char &c)
{
    t->setReadLast(false);
    t->resetLexeme();
    t->addChar(c);
    return NULL;
}

Token * SemanticActions::add_character(TransitionMatrix *t, char &c)
{
    t->setReadLast(false);
    t->addChar(c);
    return NULL;
}

Token * SemanticActions::end_string(TransitionMatrix *t, char &c)
{
    t->setReadLast(false);
    if(c != '#'){
        Logger::logError("cadena incompleta", t->getLine());
        return NULL;
    }
    string value = "\"" + t->getLexeme() + "\"";
    Token * token = new Token(STRING, value, t->getLine());
    return token;
}

Token *SemanticActions::end_comment(TransitionMatrix *t, char &c)
{
    t->setReadLast(false);
    return NULL;
}

Token *SemanticActions::end_id(TransitionMatrix *t, char &c)
{
    t->setReadLast(true);
    string value = t->getLexeme();
    return new Token(ID, value, t->getLine());
}

Token * SemanticActions::end_reserved(TransitionMatrix *t, char &c)
{
    t->setReadLast(true);
    string value = t->getLexeme();
    Token * token = t->getReservedWord(value);
    if(token == NULL){
        Logger::logError("palabra reservada invalida", t->getLine());
    }
    return token;
}

Token *SemanticActions::discard_character(TransitionMatrix *t, char &c)
{   
    t->setReadLast(false);
    t->resetLexeme();
    return NULL;
}

Token *SemanticActions::end_double(TransitionMatrix *t, char &c)
{
    t->setReadLast(true);
    string number = t->getLexeme();
    int index = number.find('D');
    if(index == string::npos)
        index = number.find('d');
    if(index != string::npos)
        number = number.replace(index, 1, "e");
    
    try {
        double value = stod(number);
        return new Token(CTE_DOUBLE, number, t->getLine());
    } catch(const std::invalid_argument& e){
        Logger::logError("argumento invalido para constante de tipo DOUBLE", t->getLine());
    } catch(const std::out_of_range& e){
        Logger::logError("constante de tipo DOUBLE fuera de rango", t->getLine());
    }
    return NULL;
}

Token *SemanticActions::end_uint(TransitionMatrix *t, char &c)
{
    t->setReadLast(false);
    t->addChar(c);
    string number = t->getLexeme();
    try{
        unsigned int value = stoul(number);
        return new Token(CTE_UINT, number, t->getLine());
    } catch(const std::invalid_argument& e){
        Logger::logError("argumento invalido para constante de tipo UINT", t->getLine());
    } catch(const std::out_of_range& e){
        Logger::logError("constante de tipo UINT fuera de rango", t->getLine());
    }
    return NULL;
}

Token *SemanticActions::end_short(TransitionMatrix *t, char &c)
{
    t->setReadLast(false);
    t->addChar(c);
    string number = t->getLexeme();

    try{
        int value = stoi(number);
        if (value < -128 || value > 127)
            throw std::out_of_range("");
        return new Token(CTE_SHORT, number, t->getLine());
    } catch(const std::invalid_argument& e){
        Logger::logError("argumento invalido para constante de tipo SHORT", t->getLine());
    } catch(const std::out_of_range& e){
        Logger::logError("constante de tipo SHORT fuera de rango", t->getLine());
    }
    return NULL;
}

Token * SemanticActions::end_op(TransitionMatrix *t, char &c) {
    t->setReadLast(true);
    string value = t->getLexeme();
    c = value[0];
    switch (c)
    {
    case '+':
        return new Token(TOKEN_PLUS, "", t->getLine());
    case '*':
        return new Token(TOKEN_MULTIPLY, "", t->getLine());
    case '-':
        return new Token(TOKEN_MINUS, "", t->getLine());
    case '=':
        return new Token(TOKEN_ASSIGN, "", t->getLine());
    case '<':
        return new Token(TOKEN_LESS, "", t->getLine());
    case '>':
        return new Token(TOKEN_GREATER, "", t->getLine());
    default:
        return NULL;
    }
}

Token * SemanticActions::end_complex_op(TransitionMatrix *t, char &c) {
    t->setReadLast(false);
    t->addChar(c);
    string value = t->getLexeme();

    if (value == "!!")
        return new Token(NOT_EQUAL, "", t->getLine());
    
    if (value == "+=")
        return new Token(PLUS_EQUAL, "", t->getLine());

    if (value == "<=")
        return new Token(LESS_EQUAL, "", t->getLine());
    
    if (value == ">=")
        return new Token(GREATER_EQUAL, "", t->getLine());

    if (value == "==")
        return new Token(EQUAL, "", t->getLine());

    return NULL;
}

Token * SemanticActions::end_symbol(TransitionMatrix *t, char &c) {
    string value = t->getLexeme();
    if(value == "."){
        t->setReadLast(true);
        c = value[0];
    }else
        t->setReadLast(false);

    switch (c)
    {
    case '(':
        return new Token(TOKEN_LEFT_PAREN, "", t->getLine());
    case ')':
        return new Token(TOKEN_RIGHT_PAREN, "", t->getLine());
    case '{':
        return new Token(TOKEN_LEFT_BRACE, "", t->getLine());
    case '}':
        return new Token(TOKEN_RIGHT_BRACE, "", t->getLine());
    case ',':
        return new Token(TOKEN_COMMA, "", t->getLine());
    case ';':
        return new Token(TOKEN_SEMICOLON, "", t->getLine());
    case '/':
        return new Token(TOKEN_SLASH, "", t->getLine());
    case '*':
        return new Token(TOKEN_MULTIPLY, "", t->getLine());
    case '.':
        return new Token(TOKEN_DOT, "", t->getLine());
    case ':':
        return new Token(TOKEN_COLON, "", t->getLine());
    case '-':
        return new Token(TOKEN_MINUS, "", t->getLine());
    default:
        return NULL;
    }
}