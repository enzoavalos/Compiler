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
        int line;
        int start;
        int current;
        vector<Token*> tokens;
        SymbolTable * symbolTable;
        TransitionMatrix transitionMatrix;
        
        char advance();
        void back();
        Token* scanToken();
        bool isAtEnd();
        void addSymbol(Token *);
    public:
        Lexer(string input,SymbolTable *);
        ~Lexer();
        void run();
};

#endif // LEXER_H
