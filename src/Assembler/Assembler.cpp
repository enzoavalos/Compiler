#include "Assembler.h"

Assembler::Assembler(string filePath)
{
    this->fileStream.open(filePath);
    this->functions = list<string>();
}

Assembler::~Assembler()
{
    this->fileStream.close();
}

string Assembler::getFreeRegister()
{
    map<string, bool>::iterator it = registers.begin();

    while (it != registers.end())
    {
        string registerName = it->first;
        bool isUsed = it->second;

        if (!isUsed)
        {
            registers[registerName] = true;
            return registerName;
        }

        it++;
    }

    return "";
}

void Assembler::freeRegister(string registerName)
{
    registers[registerName] = false;
}

void Assembler::declareVariables()
{
    map<string, Token *> symbols = Lexer::symbolTable->getSymbols();
    map<string, Token *>::iterator it = symbols.begin();

    while (it != symbols.end())
    {
        Token *token = it->second;
        string varName = it->first;
        string type = token->getType();
        string use = token->getUse();

        if (use == "variable" || use == "parametro")
        {
            if (type == "uint")
            {
                fileStream << varName << " dd ?" << endl;
            }
            else if (type == "short")
            {
                fileStream << varName << " dw ?" << endl;
            }
            else if (type == "double")
            {
                fileStream << varName << " dd ?" << endl;
            }
        }

        it++;
    }
}

void Assembler::generate()
{
    fileStream << ".386" << endl;
    fileStream << ".model flat, stdcall" << endl;
    fileStream << "option casemap :none" << endl;
    fileStream << "include \\masm32\\include\\windows.inc" << endl;
    fileStream << "include \\masm32\\include\\kernel32.inc" << endl;
    fileStream << "include \\masm32\\include\\user32.inc" << endl;
    fileStream << "include \\masm32\\include\\masm32.inc" << endl;
    fileStream << "includelib \\masm32\\lib\\kernel32.lib" << endl;
    fileStream << "includelib \\masm32\\lib\\user32.lib" << endl;

    fileStream << ".data" << endl;

    fileStream << "msg1 db \"Error: Division by zero\", 0" << endl;
    fileStream << "msg2 db \"Error: Index out of bounds\", 0" << endl;
    fileStream << "msg3 db \"Error: Invalid memory access\", 0" << endl;

    declareVariables();

    fileStream << ".code" << endl;

    start();
}

void Assembler::declareFunctions()
{
    list<string>::iterator it = functions.begin();

    while (it != functions.end())
    {
        string functionName = *it;

        fileStream << "ret" << endl;

        it++;
    }
}

// TODO: revisar estas generaciones, probablemente se puede optimizar y achicar un monton
void Assembler::generateAssign(Terceto *terceto)
{
    string op1 = terceto->getOp1();
    string op2 = terceto->getOp2();
    if ((SyntacticActions::isTerceto(op1) && !SyntacticActions::isTerceto(op2)))
    {
        int terceto = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto);
        fileStream << "mov " << tercetoOp1->getRegisterName() << ", " << op2 << endl;
        return;
    }
    else if (SyntacticActions::isTerceto(op2) && !SyntacticActions::isTerceto(op1))
    {
        int terceto = atoi(op2.c_str());
        fileStream << "mov " << op1 << ", " << IntermediateCodeGenerator::getTerceto(terceto)->getRegisterName() << endl;
        return;
    }
    if (SyntacticActions::isId(op1) && SyntacticActions::isId(op2))
    {
        string registerName = getFreeRegister();
        fileStream << "mov " << registerName << ", " << op2 << endl;
        fileStream << "mov " << op1 << ", " << registerName << endl;
        return;
    }
    if (SyntacticActions::isId(op1) && SyntacticActions::isConstant(op2))
    {
        string registerName = getFreeRegister();
        fileStream << "mov " << registerName << ", " << op2 << endl;
        return;
    }

    if (SyntacticActions::isTerceto(op1) && SyntacticActions::isTerceto(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        fileStream << "mov " << tercetoOp1->getRegisterName() << ", " << tercetoOp2->getRegisterName() << endl;
        this->freeRegister(tercetoOp2->getRegisterName());
        return;
    }
}

void Assembler::generateOp(string operation, Terceto *terceto)
{
    string op1 = terceto->getOp1();
    string op2 = terceto->getOp2();

    if (SyntacticActions::isId(op1) && (SyntacticActions::isId(op2) || SyntacticActions::isConstant(op2)))
    {
        string registerName = getFreeRegister();
        fileStream << "mov " << registerName << ", " << op1 << endl;
        fileStream << operation << " " << registerName << ", " << op2 << endl;
        terceto->setRegisterName(registerName);
        return;
    }
    if (SyntacticActions::isId(op2) && (SyntacticActions::isId(op1) || SyntacticActions::isConstant(op1)))
    {
        string registerName = getFreeRegister();
        fileStream << operation << " " << registerName << ", " << op1 << endl;
        terceto->setRegisterName(registerName);
        return;
    }
    if (SyntacticActions::isTerceto(op1) && !SyntacticActions::isTerceto(op2))
    {
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        fileStream << operation << " " << tercetoOp1->getRegisterName() << ", " << op2 << endl;
        terceto->setRegisterName(tercetoOp1->getRegisterName());
        return;
    }

    if (SyntacticActions::isTerceto(op2) && !SyntacticActions::isTerceto(op1))
    {
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        fileStream << operation << " " << tercetoOp2->getRegisterName() << ", " << op1 << endl;
        terceto->setRegisterName(tercetoOp2->getRegisterName());
        return;
    }

    if (SyntacticActions::isTerceto(op1) && SyntacticActions::isTerceto(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        fileStream << operation << tercetoOp1->getRegisterName() << ", " << tercetoOp2->getRegisterName() << endl;
        this->freeRegister(tercetoOp2->getRegisterName());
        terceto->setRegisterName(tercetoOp1->getRegisterName());
        return;
    }
}

void Assembler::start()
{

    map<int, Terceto> *tercetos = IntermediateCodeGenerator::getTercetos();
    map<int, Terceto>::iterator it = tercetos->begin();

    while (it != tercetos->end())
    {
        Terceto *terceto = &it->second;
        string op = terceto->getOp();
        string op1 = terceto->getOp1();
        string op2 = terceto->getOp2();

        if (op == "=")
        {
            generateAssign(terceto);
        }
        else if (op == "+")
        {
            generateOp("add", terceto);
        }
        else if (op == "-")
        {
            generateOp("sub", terceto);
        }
        else if (op == "*")
        {
            generateOp("mul", terceto);
        }
        else if (op == "/")
        {
            generateOp("div", terceto);
        }

        it++;
    }
}
