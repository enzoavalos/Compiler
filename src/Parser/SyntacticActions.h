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
    private:
        static Token * getSymbolToken(char* key);
};

string SyntacticActions::lastType = "no-type";

#endif //SYNTACTIC_ACTIONS_H