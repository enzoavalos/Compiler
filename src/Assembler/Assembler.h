#include <iostream>
#include <fstream>
#include <sstream>
#include "..\SymbolTable\SymbolTable.h"
#include "..\IntermediateCodeGenerator\IntermediateCodeGenerator.h"
#include "..\Lexer.h"
#include "..\Parser\SyntacticActions.h"

using namespace std;

class Assembler
{

private:
    ofstream fileStream;
    stringstream declarations;
    stringstream dataStream;

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
    void declareFunctions();

    void generateAssign(Terceto *terceto);
    void generateOp(string operation, Terceto *terceto);
    void generateAdd(Terceto *terceto);
    void generateSub(Terceto *terceto);
    void generateMul(Terceto *terceto);
    void generateDiv(Terceto *terceto);

public:
    Assembler(string filePath);
    ~Assembler();
    void generate();
    void start();
};