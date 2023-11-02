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


        static void addTerceto(Terceto);
        static void addTerceto(string, string, string);
        static void completeTerceto(int, string);
        static void removeTerceto(int);

        static void addStack(int);
        static void removeStack();
    
    private:
        static map<int, Terceto> tercetos;
        static stack<int> pila;

        static int tercetoCount;
};

string IntermediateCodeGenerator::scope = "main";
const string IntermediateCodeGenerator::initialScope = "main";

#endif