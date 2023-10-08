#ifndef SYNTACTIC_ACTIONS_H
#define SYNTACTIC_ACTIONS_H

#include "../SymbolTable/SymbolTable.h"
#include "../Lexer.h"
#include "../Token.h"
#include <iostream>

using namespace std;

class SyntacticActions {
    public:
        static void check_division_by_zero(char* key);
        static void checkLimitsDouble(char* key);
        static void checkLimitsShort(char* key);
        static void checkLimitsUint(char* key);
        static void addNegativeConstant(char* key, char type);
    private:
        static Token * getSymbolToken(char* key);
};


#endif //SYNTACTIC_ACTIONS_H