#include "Lexer.h"

Lexer::Lexer(string input,SymbolTable &table)
{
    this->source = input;
    this->start = 0;
    this->current = 0;
    this->symbolTable = table;
    this->transitionMatrix = TransitionMatrix();
}

Lexer::~Lexer(){
}

void Lexer::run()
{
    while (!this->isAtEnd()) {
        this->start = this->current;
        this->scanToken();
    }
    for (int i = 0; i < this->tokens.size(); i++) {
        cout << this->tokens[i]->getType() << " " << this->tokens[i]->getLexeme() << 
        " en linea " << this->tokens[i]->getLine() << endl;
    }
    cout << "\n";
    this->symbolTable.printTable();
}

bool Lexer::isAtEnd() {
    return this->current >= this->source.length();
}

char Lexer::advance() {
    this->current++;
    return this->source[this->current - 1];
}

void Lexer::back() {
    this->current--;
}

void Lexer::addSymbol(Token* token){
    this->symbolTable.addSymbol(token);
}

Token* Lexer::scanToken() {
    char c = advance();
    bool reset = false;
    Token * token = this->transitionMatrix.getTransition(c, reset);
    if (token != NULL) {
        this->addSymbol(token);
        return token;
    }
    if (reset) {
        this->back();
        reset = false;
    }
    return NULL;
}