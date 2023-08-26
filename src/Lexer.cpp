#include "Lexer.h"

Lexer::Lexer(string input)
{
    this->source = input;
}

void Lexer::run()
{
    cout << "Lexing: " << this->source << endl;
}