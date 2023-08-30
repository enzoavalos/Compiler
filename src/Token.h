#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>

using namespace std;

enum Type {
    TOKEN_ID = 1,
    TOKEN_STRING = 3,
    TOKEN_PLUS = 4,
    TOKEN_MINUS = 5,
    TOKEN_LESS = 6,
    TOKEN_LESS_EQUAL = 7,
    TOKEN_GREATER = 8,
    TOKEN_GREATER_EQUAL = 9,
    TOKEN_EQUAL = 10,
    TOKEN_NOT_EQUAL = 11,
    TOKEN_LEFT_PAREN = 18,
    TOKEN_RIGHT_PAREN = 19,
    TOKEN_LEFT_BRACE = 20,
    TOKEN_RIGHT_BRACE = 21,
    TOKEN_COMMA = 22,
    TOKEN_SEMICOLON,
    TOKEN_DOT = 23,
    TOKEN_ASSIGN = 24,
    TOKEN_SLASH = 25,
    TOKEN_DASH = 26,
    TOKEN_EOF = 27,
    TOKEN_MULTIPLY = 37,
    //operador +=
    TOKEN_PLUS_EQUAL = 38,
    //constantes
    TOKEN_SHORT = 34,
    TOKEN_UINT = 35,
    TOKEN_DOUBLE = 36,
    //palabras reservadas
    TOKEN_IF = 12,
    TOKEN_ELSE = 13,
    TOKEN_END_IF = 14,
    TOKEN_PRINT = 15,
    TOKEN_CLASS = 16,
    TOKEN_VOID = 17,
    TOKEN_FOR = 28,
    TOKEN_IN = 29,
    TOKEN_RANGE = 30,
    TOKEN_IMPL = 31,
    TOKEN_INTERFACE = 32,
    TOKEN_IMPLEMENT = 33,
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