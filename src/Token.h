#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>

using namespace std;

enum Type {
    TOKEN_ID,
    TOKEN_INT,
    TOKEN_STRING,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_LESS,
    TOKEN_LESS_EQUAL,
    TOKEN_GREATER,
    TOKEN_GREATER_EQUAL,
    TOKEN_EQUAL,
    TOKEN_NOT_EQUAL,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_END_IF,
    TOKEN_PRINT,
    TOKEN_CLASS,
    TOKEN_VOID,
    TOKEN_LEFT_PAREN,
    TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE,
    TOKEN_RIGHT_BRACE,
    TOKEN_COMMA,
    TOKEN_SEMICOLON,
    TOKEN_DOT,
    TOKEN_ASSIGN,
    TOKEN_SLASH,
    TOKEN_DASH,
};

class Token
{
    private:
        Type type;
        string lexeme;
        int line;

    public:
        Token(Type type, string lexeme, int line);
        ~Token();
        Type getType();
        string getLexeme();
        int getLine();
};

#endif // TOKEN_H