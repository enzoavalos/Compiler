#include "Token.h"

Token::Token(int type, string lexeme, int line)
{
    this->type = type;
    this->lexeme = lexeme;
    this->line = line;
    this->references = 1;
}

Token::~Token() {
    
}

int Token::getType()
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

void Token::increaseReferences(){
    this->references++;
}

void Token::decreaseReferences(){
    this->references--;
}

int Token::getReferences() const{
    return this->references;
}