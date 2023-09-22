#include "Lexer.h"

Lexer::Lexer(string input,SymbolTable * table)
{
    this->source = input;
    this->start = 0;
    this->current = 0;
    this->symbolTable = table;
}

Lexer::~Lexer(){
}

void Lexer::run()
{
    while (!this->isAtEnd())
    {
        this->scanToken();
    }
    
    for (int i = 0; i < this->tokens.size(); i++) {
        cout << "Linea " << this->tokens[i]->getLine() << ": token " << this->tokens[i]->getType() << " "
            << this->tokens[i]->getLexeme() << endl;
    }
    cout << "\n\n";
    this->symbolTable->printTable();
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
    //Solo se agrega a la tabla de simbolos aquellos tokens que tengan lexema
    if(!token->getLexeme().empty())
        this->symbolTable->addSymbol(token);
}

Token* Lexer::scanToken() {
    Token * token = NULL;
    // Mientras no se haya encontrado un token y no se haya llegado al final del archivo, seguir buscando
    while (token == NULL && !this->isAtEnd()) {
        char c = advance();
        bool reset = false;
        token = this->transitionMatrix.getTransition(c, reset);
        if (token != NULL) {
            this->addSymbol(token);
            this->tokens.push_back(token);
            return token;
        }
        if (reset) {
            this->back();
            reset = false;
        }
    }

    return token;
}