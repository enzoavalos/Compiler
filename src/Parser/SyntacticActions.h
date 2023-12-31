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
        static string lastClassMember;
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
        static bool checkParameters(string, char*);
        static void addParamToMethod(char*, char*);
        static bool checkForArguments(string, string, string);
        static Token * findId(string key);
        static void addClassComposition(char*);
        static void removeClassComposition(char*);
        static void addObject(char*);
        static string getObject();
        static void addClassToObjects(char*);
        static bool classImplementsInterfaceMethods(char*);
        static bool isTerceto(string key);
        static bool isId(string key);
        static bool isConstant(string key);
        static bool isString(string key);
        static void emptyObjects(bool);
        static bool checkDistributedMethodImplementation(string);

        static char* checkHasMember(string, string, string);
        static bool checkMethodParameters(char*);
        static bool checkAttributeAssignment(string, char*);
        static bool checkAttributOverride(string);
    private:
        static Token * getSymbolToken(string key);
        static bool checkTypes(Token*, Token*, string, string);
        static bool checkParameters(Token*, Token*, string, string);
        static char* checkHasMember(Token*, string, bool);

        static stack<string> objects;
};

string SyntacticActions::lastClassMember = "";
string SyntacticActions::lastType = "no-type";
stack<string> SyntacticActions::objects = stack<string>();

#endif //SYNTACTIC_ACTIONS_H