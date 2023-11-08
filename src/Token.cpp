#include "Token.h"

Token::Token(int tokenType, string lexeme, int line)
{
    this->tokenType = tokenType;
    this->lexeme = lexeme;
    this->line = line;
    this->references = 1;
    this->type = "no-type";
    this->use = "unused";
}

Token::~Token() {
    
}

Token* Token::copy(){
    Token* newToken = new Token(tokenType, lexeme, line);
    return newToken;
}

int Token::getTokenType()
{
    return this->tokenType;
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

void Token::setLexeme(string newLexeme){
    this->lexeme = newLexeme;
}

void Token::setType(string type){
    this->type = type;
}

string Token::getType(){
    return this->type;
}

void Token::setUse(string use){
    this->use = use;
}

string Token::getUse(){
    return this->use;
}