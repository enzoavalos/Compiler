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
    ofstream fileStream;
    
    map<string, stringstream> functionDeclarations;
    stringstream dataStream;

    stringstream * reference;

    stack<string> lastOperation = stack<string>();
    stack<string> functionStack = stack<string>();

    list<string> functions;

    map<string, bool> registers = {
        {"eax", false},
        {"ebx", false},
        {"ecx", false},
        {"edx", false},
    };

    string getFreeRegister();
    void freeRegister(string registerName);

    void declareVariables();

    void generateAssign(Terceto *terceto);
    void generateOp(string operation, Terceto *terceto);
    void generateComp(Terceto *terceto);

    string replaceScopeChar(string scope);

public:
    Assembler(string filePath);
    ~Assembler();
    void generate();
    void start();
};