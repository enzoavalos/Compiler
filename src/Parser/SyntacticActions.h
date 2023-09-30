#ifndef SYNTACTIC_ACTIONS_H
#define SYNTACTIC_ACTIONS_H

#include "../SymbolTable/SymbolTable.h"
#include <iostream>

using namespace std;

class SyntacticActions {
    public:
        static void check_division_by_zero(char* key);
        static void check_limits(char* key);
};


#endif //SYNTACTIC_ACTIONS_H