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
        map<string,Type> reserved_words;
        SymbolTable symbolTable;
        TransitionMatrix transitionMatrix;
        

        void initializeReservedWords();

        char advance();
        void scanToken();
        void addToken(Type type);
        void addToken(Type type, string lexeme);
        bool match(char expected);
        bool isAtEnd();
        char checkNext();
        void isString();
        void isComment();
        void isIdentifier();
        void isReservedWord();
        void addSymbol(Token *);
        void isConstantInt();
        void isConstantDouble();

        bool isSmallIntRange(string number);
        bool isUnsignedIntRange(string number);
        bool isDoubleInRange(string number);
    public:
        Lexer(string input,SymbolTable &);
        ~Lexer();
        void run();
};

#endif // LEXER_H
