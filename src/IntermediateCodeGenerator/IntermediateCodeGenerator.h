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
        static int lastTerceto;
        const static string initialScope;

        static void addScope(char*);
        static void onScopeFinished();
        static void setVarScope(char*);


        static void addTerceto(Terceto);
        static void addTerceto(string, string, string);
        static void completeTerceto(int, string);
        static void removeTerceto(int);

        static void addStack(int);
        static int removeStack();

        static void assignTerceto(char*, char*, char*);
        static void modifyLastTercetoOperator(char*);

        static void ifElseExpression(char*, char*, char*);
        static void ifExpression(char*, char*);

        static void forArguments(char*, char*, char*);
        static void forBlock(char*, char*);

        static void endCondition();


        static void printTercetos();

        static char* getLastTerceto();
    
    private:
        static map<int, Terceto> tercetos;
        static stack<int> pila;

        static int tercetoCount;
};

string IntermediateCodeGenerator::scope = "main";
const string IntermediateCodeGenerator::initialScope = "main";
int IntermediateCodeGenerator::lastTerceto = -1;
map<int, Terceto> IntermediateCodeGenerator::tercetos = map<int, Terceto>();
stack<int> IntermediateCodeGenerator::pila = stack<int>();

#endif