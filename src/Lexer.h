#ifndef LEXER_H
#define LEXER_H

#include <iostream>

using namespace std;

class Lexer
{
    private:
        string source;
    public:
        Lexer(string input);
        ~Lexer();
        void run();
};

#endif // LEXER_H
