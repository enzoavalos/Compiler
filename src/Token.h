#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>

using namespace std;

enum Type {
    TOKEN_ID = 1,
    TOKEN_STRING = 2,
    // Operadores
    TOKEN_LESS_EQUAL = 3,
    TOKEN_GREATER_EQUAL = 4,
    TOKEN_EQUAL = 5,
    TOKEN_NOT_EQUAL = 6,
    TOKEN_PLUS_EQUAL = 7,
    // Constantes
    TOKEN_SHORT = 8,
    TOKEN_UINT = 9,
    TOKEN_DOUBLE = 10,
    //palabras reservadas
    TOKEN_IF = 11,
    TOKEN_ELSE = 12,
    TOKEN_END_IF = 13,
    TOKEN_PRINT = 14,
    TOKEN_CLASS = 15,
    TOKEN_VOID = 16,
    TOKEN_FOR = 17,
    TOKEN_IN = 18,
    TOKEN_RANGE = 19,
    TOKEN_IMPL = 20,
    TOKEN_INTERFACE = 21,
    TOKEN_IMPLEMENT = 22,
    TOKEN_RETURN = 23,
    // EOF
    TOKEN_EOF = 24,
    // Return ASCII value
    TOKEN_PLUS = 43,
    TOKEN_MINUS = 45,
    TOKEN_LESS = 60,
    TOKEN_GREATER = 62,
    TOKEN_LEFT_PAREN = 40,
    TOKEN_RIGHT_PAREN = 41,
    TOKEN_LEFT_BRACE = 123,
    TOKEN_RIGHT_BRACE = 125,
    TOKEN_COMMA = 44,
    TOKEN_SEMICOLON = 59,
    TOKEN_DOT = 46,
    TOKEN_ASSIGN = 61,
    TOKEN_SLASH = 47,
    TOKEN_MULTIPLY = 42, 
    TOKEN_COLON = 58,
};

class Token
{
    private:
        int type;
        string lexeme;
        int line;
        int references;

    public:
        Token(int type, string lexeme, int line);
        ~Token();
        int getType();
        string getLexeme();
        int getLine();
        void increaseReferences();
        void decreaseReferences();
        int getReferences() const;
};

#endif // TOKEN_H