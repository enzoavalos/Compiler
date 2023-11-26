#ifndef SYNTACTIC_ACTIONS_H
#define SYNTACTIC_ACTIONS_H


#include "../SymbolTable/SymbolTable.h"
#include "../Lexer.h"
#include "../Token.h"
#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>
#include "../IntermediateCodeGenerator/IntermediateCodeGenerator.h"

using namespace std;

class SyntacticActions {
    public:
        static string lastType;
        static void check_division_by_zero(char* key);
        static bool addNegativeConstant(char* key);
        static bool checkLimits(string key);
        static bool checkReturnScope();
        static void setIdType(char*, char*);
        static void setIdUse(char*, string);
        static bool checkRedeclaration(string, bool);
        static bool checkDeclaredVar(char*, bool);
        static bool checkDeclaredMethod(char*, bool);
        static bool checkDeclaredClass(char*, bool);
        static bool checkDeclaredClassMember(char*, char*);
        static bool checkTypes(char* key1, char* key2);
        static bool checkParameters(string, string);
        static void addParamToMethod(char*, char*);
        static bool checkForArguments(string, string, string);
        static Token * findId(string key);
        static void addClassComposition(char*);
        static void addObject(char*);
        static string getObject();
        static void addClassToObjects(char*);
        static bool checkHasMember(string, string, char*, char*);
        static bool classImplementsInterfaceMethods(char*);
        static bool isTerceto(string key);
        static bool isId(string key);
        static bool isConstant(string key);
    private:
        static Token * getSymbolToken(string key);
        static bool checkTypes(Token*, Token*, string, string);
        static bool checkParameters(Token*, Token*, string, string);

        static stack<string> objects;
};

string SyntacticActions::lastType = "no-type";
stack<string> SyntacticActions::objects = stack<string>();

#endif //SYNTACTIC_ACTIONS_H