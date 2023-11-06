#ifndef LEXER_H
#define LEXER_H

#include <iostream>
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
        TransitionMatrix transitionMatrix;
        
        char advance();
        void back();
        bool isAtEnd();
        void addSymbol(Token *);
    public:
        static SymbolTable * symbolTable;
        Lexer(string input);
        ~Lexer();
        Token* scanToken();
};

#endif // LEXER_H
