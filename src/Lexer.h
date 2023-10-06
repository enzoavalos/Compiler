#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <vector>
#include <map>
#include "SymbolTable/SymbolTable.h"
#include "TransitionMatrix/TransitionMatrix.h"

using namespace std;

class Lexer
{
    private:
        string source;
        int start;
        int current;
        SymbolTable * symbolTable;
        TransitionMatrix transitionMatrix;
        
        char advance();
        void back();
        bool isAtEnd();
        void addSymbol(Token *);
    public:
        Lexer(string input,SymbolTable *);
        ~Lexer();
        Token* scanToken();
};

#endif // LEXER_H
