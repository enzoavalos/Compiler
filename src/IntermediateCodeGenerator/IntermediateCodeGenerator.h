#ifndef INTERMEDIATE_CODE_GENERATOR_H
#define INTERMEDIATE_CODE_GENERATOR_H

#include <iostream>
#include <map>
#include <stack>
#include "Terceto.h"
#include "..\SymbolTable\SymbolTable.h"
#include "..\Lexer.h"
using namespace std;

class IntermediateCodeGenerator{
    public:
        static string scope;
        const static string initialScope;

        static void addScope(char*);
        static void onScopeFinished();
        static void setVarScope(char*);
    
    private:
        map<int, Terceto> tercetos;
        stack<int> pila;
};

string IntermediateCodeGenerator::scope = "main";
const string IntermediateCodeGenerator::initialScope = "main";

#endif