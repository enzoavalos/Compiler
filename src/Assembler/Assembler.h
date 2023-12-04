#include <iostream>
#include <fstream>
#include <sstream>
#include "..\SymbolTable\SymbolTable.h"
#include "..\IntermediateCodeGenerator\IntermediateCodeGenerator.h"
#include "..\Lexer.h"
#include "..\Parser\SyntacticActions.h"

#include <algorithm>
using namespace std;

class Assembler
{

private:
    vector<Register*> registersVector = vector<Register*>();


    ofstream fileStream;
    
    map<string, stringstream> functionDeclarations;
    stringstream dataStream;
    stringstream auxStream;

    vector<string> auxVars = vector<string>();

    stringstream * reference;

    map<string, bool> errorMap = {
        {"doubleOverflow", false},
        {"uintOverflow", false},
        {"uintNegative", false}
    };

    stack<string> lastOperation = stack<string>();
    stack<string> functionStack = stack<string>();

    list<string> functions;

    map<string, bool> registers = {
        {"eax", false},
        {"ebx", false},
        {"ecx", false},
        {"edx", false},
    };

    string getFreeRegister(int size);
    void freeRegister(string registerName);

    void declareVariables();

    void generateAssign(Terceto *terceto);
    void generateAssignDouble(Terceto *terceto);

    void generateOp(string operation, Terceto *terceto);
    void generateDoubleOp(string operation, Terceto *terceto);

    void generateComp(Terceto *terceto);
    void generateDoubleComp(Terceto *terceto);

    void checkDoubleOverflow(string auxVar);
    void checkNegativeUint(Terceto *terceto);

    string replaceScopeChar(string scope);
    string removeNumberSuffix(string name);

    bool isDouble(string key);
    bool isAuxVar(string key);
    bool isRegister(string key);

    int getOperationSize(string type);

public:
    Assembler(string filePath);
    ~Assembler();
    void generate();
    void start();
};