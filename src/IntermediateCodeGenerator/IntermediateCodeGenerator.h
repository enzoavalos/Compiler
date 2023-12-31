#ifndef INTERMEDIATE_CODE_GENERATOR_H
#define INTERMEDIATE_CODE_GENERATOR_H

#include <iostream>
#include <map>
#include <stack>
#include "Terceto.h"
#include "..\SymbolTable\SymbolTable.h"
#include "..\Lexer.h"
#include <list>
using namespace std;

class IntermediateCodeGenerator{
    public:
        static string scope;
        static int lastTerceto;
        const static string initialScope;
        const static int stackEmpty;

        static int lastValidTerceto;
        static bool isInvalidScope;

        static void addScope(string);
        static void onScopeFinished(char*);
        static void setVarScope(char*);
        static void setCustomScope(string, string);

        static void addTerceto(Terceto);
        static void addTerceto(string, string, string);
        static void addLabelTerceto();
        static void addLabelTerceto(string, string);
        static void removeTerceto(int);
        static void deleteFunctionTercetos(string);

        static void addStack(int);
        static int removeStack();

        static void printTercetos();
        static char* getLastTerceto();

        // Sentencias de control
        static void endCondition();
        static void ifElseExpression(char*, char*, char*);
        static void ifExpression(char*, char*);

        static void forArguments(char*, char*, char*);
        static void forBlock(char*, char*);

        static void returnStatement();

        static string getTercetoType(string tercetoNumber);

        static map<int, Terceto> * getTercetos();
        static Terceto * getTerceto(int tercetoNumber);
    
    private:
        static map<int, Terceto> tercetos;
        // Pila usada para backpatching de tercetos de sentencias de control
        static stack<int> pila;
        // Pila usada para backpatching de tercetos de sentencias de retorno
        static stack<int> returnStack;

        static void finishReturnStatement(char*);
        static void deleteInvalidTercetos();
};

string IntermediateCodeGenerator::scope = "main";
const string IntermediateCodeGenerator::initialScope = "main";
const int IntermediateCodeGenerator::stackEmpty = -1;
int IntermediateCodeGenerator::lastTerceto = -1;
int IntermediateCodeGenerator::lastValidTerceto = 0;
bool IntermediateCodeGenerator::isInvalidScope = false;
map<int, Terceto> IntermediateCodeGenerator::tercetos = map<int, Terceto>();
stack<int> IntermediateCodeGenerator::pila = stack<int>();
stack<int> IntermediateCodeGenerator::returnStack = stack<int>();

#endif