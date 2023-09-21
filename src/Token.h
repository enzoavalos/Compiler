#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>

using namespace std;

enum Type {
    TOKEN_ID = 1,
    TOKEN_STRING = 3,
    TOKEN_PLUS = 4,     //return ASCII
    TOKEN_MINUS = 5,    //return ASCII
    TOKEN_LESS = 6,     //return ASCII
    TOKEN_LESS_EQUAL = 7,
    TOKEN_GREATER = 8,  //return ASCII
    TOKEN_GREATER_EQUAL = 9,
    TOKEN_EQUAL = 10,
    TOKEN_NOT_EQUAL = 11,
    TOKEN_LEFT_PAREN = 18,  //return ASCII
    TOKEN_RIGHT_PAREN = 19,     //return ASCII
    TOKEN_LEFT_BRACE = 20, //return ASCII
    TOKEN_RIGHT_BRACE = 21, //return ASCII
    TOKEN_COMMA = 22, //return ASCII
    TOKEN_SEMICOLON, //return ASCII
    TOKEN_DOT = 23, //return ASCII
    TOKEN_ASSIGN = 24, //return ASCII
    TOKEN_SLASH = 25, //return ASCII
    TOKEN_DASH = 26, //return ASCII
    TOKEN_EOF = 27,
    TOKEN_MULTIPLY = 37, //return ASCII
    TOKEN_COLON = 38, //return ASCII
    //operador +=
    TOKEN_PLUS_EQUAL = 41,
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
    TOKEN_RETURN = 40,
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