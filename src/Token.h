#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>

using namespace std;

enum Type {
    // EOF
    TOKEN_EOF = 0,
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
        int tokenType;
        string lexeme;
        int line;
        int references;
        
        string use;
        string type;

        Token * parameter = NULL;

        Token * father = NULL;

    public:
        Token(int tokenType, string lexeme, int line);
        ~Token();
        Token* copy();

        int getTokenType();
        string getLexeme();
        int getLine();
        void increaseReferences();
        void decreaseReferences();
        int getReferences() const;
        void setLexeme(string);
        
        void setType(string);
        void setUse(string);
        string getUse();
        string getType();

        void setParameter(Token*);
        Token* getParameter();

        void setFather(Token*);
        Token* getFather();
};

#endif // TOKEN_H