#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <vector>
#include "Token.h"

using namespace std;

class Lexer
{
    private:
        string source;
        int line;
        int start;
        int current;
        char currentChar;
        vector<Token*> tokens;

        char advance();
        void scanToken();
        void addToken(Type type);
        void addToken(Type type, string lexeme);
        bool match(char expected);
        bool isAtEnd();
        char checkNext();
        void isString();
    public:
        Lexer(string input);
        ~Lexer();
        void run();
};

#endif // LEXER_H
