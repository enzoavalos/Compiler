#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <vector>
#include <map>
#include "Token.h"
#include "SymbolTable/SymbolTable.h"

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
        //falta reconocer constantes
        void isConstantInt();
        void isConstantDouble();
    public:
        Lexer(string input);
        ~Lexer();
        void run();
};

#endif // LEXER_H
