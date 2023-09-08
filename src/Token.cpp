#include "Token.h"

Token::Token(Type type, string lexeme, int line)
{
    this->type = type;
    this->lexeme = lexeme;
    this->line = line;
}

Token::~Token() {
    
}

Type Token::getType()
{
    return this->type;
}

string Token::getLexeme()
{
    return this->lexeme;
}

int Token::getLine()
{
    return this->line;
}