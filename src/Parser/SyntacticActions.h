#ifndef SYNTACTIC_ACTIONS_H
#define SYNTACTIC_ACTIONS_H

#include "../SymbolTable/SymbolTable.h"
#include "../Lexer.h"
#include "../Token.h"
#include <iostream>
#include "../IntermediateCodeGenerator/IntermediateCodeGenerator.h"

using namespace std;

class SyntacticActions {
    public:
        static string lastType;
        static void check_division_by_zero(char* key);
        static void addNegativeConstant(char* key);
        static bool checkLimits(string key);
        static bool checkReturnScope();
        static void setIdType(char*, char*);
        static void setIdUse(char*, string);
        static bool checkRedeclaration(char*, bool);
        static bool checkDeclaredVar(char*, bool);
        static bool checkDeclaredMethod(char*, bool);
        static bool checkDeclaredClass(char*, bool);
        static bool checkDeclaredClassMember(char*, char*);
        static bool checkTypes(char* key1, char* key2);
        static bool checkParameters(char*, char*);
        static void addParamToMethod(char*, char*);
        static Token * findId(string key);
    private:
        static Token * getSymbolToken(char* key);
        static Token * getSymbolToken(string key);
        static bool isTerceto(string key);
        static bool isId(string key);
        static bool isConstant(string key);
};

string SyntacticActions::lastType = "no-type";

#endif //SYNTACTIC_ACTIONS_H