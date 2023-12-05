#include "Token.h"

Token::Token(int tokenType, string lexeme, int line)
{
    this->tokenType = tokenType;
    this->lexeme = lexeme;
    this->line = line;
    this->references = 1;
    this->type = "no-type";
    this->use = "unused";
    this->begin = -1;
    this->end = -1;
}

Token::~Token() {
    
}

Token* Token::copy(){
    Token* newToken = new Token(tokenType, lexeme, line);
    newToken->setType(this->type);
    newToken->setUse(this->use);
    newToken->setFather(this->father);
    newToken->setParameter(this->parameter);
    newToken->setReferences(this->references);
    newToken->setBegin(this->begin);
    newToken->setEnd(this->end);
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

void Token::setReferences(int refs){
    this->references = refs;
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

Token* Token::getParameter(){
    return this->parameter;
}

void Token::setParameter(Token* parameter){
    this->parameter = parameter;
}

Token* Token::getFather(){
    return this->father;
}

void Token::setFather(Token* father){
    this->father = father;
}

void Token::setBegin(int begin){
    this->begin = begin;
}

void Token::setEnd(int end){
    this->end = end;
}

int Token::getBegin(){
    return this->begin;
}

int Token::getEnd(){
    return this->end;
}