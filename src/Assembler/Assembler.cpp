#include "Assembler.h"
#include "../Parser/gramatica.tab.hpp"
#include <cstdint>

Assembler::Assembler(string filePath)
{
    this->fileStream.open(filePath);
    this->functions = list<string>();

    Register *eax = new Register("eax", 32);
    Register *ax = new Register("ax", 16);
    Register *ah = new Register("ah", 8);
    Register *al = new Register("al", 8);

    ax->addRegister(ah);
    ax->addRegister(al);
    eax->addRegister(ax);

    Register *ebx = new Register("ebx", 32);
    Register *bx = new Register("bx", 16);
    Register *bh = new Register("bh", 8);
    Register *bl = new Register("bl", 8);

    bx->addRegister(bh);
    bx->addRegister(bl);
    ebx->addRegister(bx);

    Register *ecx = new Register("ecx", 32);
    Register *cx = new Register("cx", 16);
    Register *ch = new Register("ch", 8);
    Register *cl = new Register("cl", 8);

    cx->addRegister(ch);
    cx->addRegister(cl);
    ecx->addRegister(cx);

    Register *edx = new Register("edx", 32);
    Register *dx = new Register("dx", 16);
    Register *dh = new Register("dh", 8);
    Register *dl = new Register("dl", 8);

    dx->addRegister(dh);
    dx->addRegister(dl);
    edx->addRegister(dx);

    registersVector.push_back(eax);
    registersVector.push_back(ebx);
    registersVector.push_back(ecx);
    registersVector.push_back(edx);
}

Assembler::~Assembler()
{
    this->fileStream.close();
}

string Assembler::getFreeRegister(int size)
{
    vector<Register *>::iterator it = registersVector.begin();

    while (it != registersVector.end())
    {
        Register *reg = *it;
        if (reg->getSize() == size && reg->isFree())
        {
            reg->getRegister();
            return reg->getName();
        }

        if (reg->getSize() > size)
        {
            vector<Register *> subRegisters = reg->getRegisters();
            vector<Register *>::iterator it2 = subRegisters.begin();

            while (it2 != subRegisters.end())
            {
                Register *subReg = *it2;
                if (subReg->getSize() == size && subReg->isFree())
                {
                    subReg->getRegister();
                    return subReg->getName();
                }

                if (subReg->getSize() > size)
                {
                    vector<Register *> subSubRegisters = subReg->getRegisters();
                    vector<Register *>::iterator it3 = subSubRegisters.begin();

                    while (it3 != subSubRegisters.end())
                    {
                        Register *subSubReg = *it3;
                        if (subSubReg->getSize() == size && subSubReg->isFree())
                        {
                            subSubReg->getRegister();
                            return subSubReg->getName();
                        }
                        it3++;
                    }
                }
                it2++;
            }
        }

        it++;
    }
    return "";
}

void Assembler::freeRegister(string registerName)
{
    // registers[registerName] = false;

    vector<Register *>::iterator it = registersVector.begin();

    while (it != registersVector.end())
    {
        Register *reg = *it;
        if (reg->getName() == registerName)
        {
            reg->freeRegister();
            return;
        }

        vector<Register *> subRegisters = reg->getRegisters();
        vector<Register *>::iterator it2 = subRegisters.begin();

        while (it2 != subRegisters.end())
        {
            Register *subReg = *it2;
            if (subReg->getName() == registerName)
            {
                subReg->freeRegister();
                return;
            }

            vector<Register *> subSubRegisters = subReg->getRegisters();
            vector<Register *>::iterator it3 = subSubRegisters.begin();

            while (it3 != subSubRegisters.end())
            {
                Register *subSubReg = *it3;
                if (subSubReg->getName() == registerName)
                {
                    subSubReg->freeRegister();
                    return;
                }
                it3++;
            }
            it2++;
        }
        it++;
    }
}

void Assembler::declareVariables()
{
    map<string, Token *> symbols = Lexer::symbolTable->getSymbols();
    map<string, Token *>::iterator it = symbols.begin();

    while (it != symbols.end())
    {
        Token *token = it->second;
        string varName = this->replaceScopeChar(it->first);
        string type = token->getType();
        string use = token->getUse();

        if (use == "variable" || use == "parametro")
        {
            if (type == "uint")
            {
                fileStream << varName << " dw ?" << endl;
            }
            else if (type == "short")
            {
                fileStream << varName << " db ?" << endl;
            }
            else if (type == "double")
            {
                fileStream << varName << " dq ?" << endl;
            }
        }

        it++;
    }

    fileStream << auxStream.str();
}

void Assembler::generate()
{
    start();

    // Cambiar la primer linea, esto es el tamaño del archivo
    fileStream << ".386" << endl;
    fileStream << ".model flat, stdcall" << endl;
    fileStream << "option casemap :none" << endl;
    fileStream << "include \\masm32\\include\\windows.inc" << endl;
    fileStream << "include \\masm32\\include\\kernel32.inc" << endl;
    fileStream << "include \\masm32\\include\\user32.inc" << endl;
    fileStream << "include \\masm32\\include\\masm32.inc" << endl;
    fileStream << "includelib \\masm32\\lib\\kernel32.lib" << endl;
    fileStream << "includelib \\masm32\\lib\\user32.lib" << endl;

    fileStream << "\n.data" << endl;

    fileStream << "msg1 db \"Error: Double overflow\", 0" << endl;
    fileStream << "msg2 db \"Error: Int overflow\", 0" << endl;
    fileStream << "msg3 db \"Error: Resultado de entero sin signo negativo\", 0" << endl;

    declareVariables();

    fileStream << "\n.code" << endl;

    fileStream << "doubleOverflow:" << endl;
    fileStream << "invoke MessageBox, NULL, addr msg1, addr msg1, MB_OK" << endl;
    fileStream << "invoke ExitProcess, NULL" << endl;

    fileStream << "intOverflow:" << endl;
    fileStream << "invoke MessageBox, NULL, addr msg2, addr msg2, MB_OK" << endl;
    fileStream << "invoke ExitProcess, NULL" << endl;

    fileStream << "uintNegative:" << endl;
    fileStream << "invoke MessageBox, NULL, addr msg3, addr msg3, MB_OK" << endl;
    fileStream << "invoke ExitProcess, NULL" << endl;

    // Declarar funciones
    for (auto it = functionDeclarations.begin(); it != functionDeclarations.end(); it++)
    {
        fileStream << "\n"
                   << it->second.str();
    }

    fileStream << "\nstart:" << endl;
    fileStream << dataStream.str();
    fileStream << "end start" << endl;
}

void Assembler::generateAssign(Terceto *terceto)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());
    // Caso 1, variable/constante y registro
    if (SyntacticActions::isId(op1) && this->isRegister(op2))
    {
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << "mov " << op1 << ", " << tercetoOp2->getRegisterName() << endl;
        this->freeRegister(tercetoOp2->getRegisterName());
        return;
    }
    // Caso 2, variable/constante y variable/constante
    if ((SyntacticActions::isId(op1) || SyntacticActions::isConstant(op1)) && (SyntacticActions::isId(op2) || SyntacticActions::isConstant(op2)))
    {
        string operator1 = SyntacticActions::isConstant(op1) ? this->removeNumberSuffix(op1) : op1;
        string operator2 = SyntacticActions::isConstant(op2) ? this->removeNumberSuffix(op2) : op2;
        string registerName = getFreeRegister(this->getOperationSize(terceto->getType()));
        (*reference) << "mov " << registerName << ", " << operator2 << endl;
        (*reference) << "mov " << operator1 << ", " << registerName << endl;
        this->freeRegister(registerName);
        return;
    }
}

void Assembler::generateAssignDouble(Terceto *terceto)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());

    if (this->isRegister(op1) && this->isRegister(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);

        (*reference) << "fld " << tercetoOp2->getRegisterName() << endl;
        (*reference) << "fstp " << tercetoOp1->getRegisterName() << endl;
        return;
    }

    if (this->isRegister(op2))
    {
        string operator2 = op2;
        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);
        auxStream << aux << " dq " << operator2 << endl;
        (*reference) << "fld " << aux << endl;
        (*reference) << "fstp " << op1 << endl;
        return;
    }

    if (SyntacticActions::isConstant(op2))
    {
        string operator2 = op2;
        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);
        auxStream << aux << " dq " << convertDoubleToHex(op2) << endl;
        (*reference) << "fld " << aux << endl;
    }
    else
    {
        (*reference) << "fld " << op2 << endl;
    }

    (*reference) << "fstp " << op1 << endl;
}

void Assembler::generateOp(string operation, Terceto *terceto, bool assign)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());
    // Caso 3, 2 tercetos
    if (this->isRegister(op1) && this->isRegister(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << operation << tercetoOp1->getRegisterName() << ", " << tercetoOp2->getRegisterName() << endl;

        // Considerando que se usan todos los registros correspondientes, detectar overflow de short y uint deberia ser facil
        (*reference) << "jo intOverflow" << endl;
        if (terceto->getType() == "uint")
        {
            (*reference) << "js uintNegative" << endl;
        }
        this->freeRegister(tercetoOp2->getRegisterName());
        terceto->setRegisterName(tercetoOp1->getRegisterName());
        return;
    }

    // Caso 4, 1 terceto y 1 variable/constante
    if (!this->isRegister(op1) && this->isRegister(op2))
    {
        string operator1 = SyntacticActions::isConstant(op1) ? this->removeNumberSuffix(op1) : op1;
        // Caso conmutativo (*, +)
        if (operation == "add" || operation == "mul")
        {

            int terceto2 = atoi(op2.c_str());
            Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
            (*reference) << operation << " " << tercetoOp2->getRegisterName() << ", " << operator1 << endl;

            if (assign)
            {
                (*reference) << "mov " << operator1 << ", " << tercetoOp2->getRegisterName() << endl;
            }

            (*reference) << "jo intOverflow" << endl;

            terceto->setRegisterName(tercetoOp2->getRegisterName());
            return;
        }
        else
        {
            int terceto2 = atoi(op2.c_str());
            Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
            string registerName = getFreeRegister(this->getOperationSize(terceto->getType()));
            (*reference) << "mov " << registerName << ", " << operator1 << endl;
            (*reference) << operation << " " << registerName << ", " << tercetoOp2->getRegisterName() << endl;

            if (assign)
            {
                (*reference) << "mov " << operator1 << ", " << tercetoOp2->getRegisterName() << endl;
            }

            if (terceto->getType() == "uint")
            {
                (*reference) << "js uintNegative" << endl;
            }

            terceto->setRegisterName(registerName);
            return;
        }
    }

    // Caso 1, 2 variables/constantes
    if ((SyntacticActions::isId(op1) || SyntacticActions::isConstant(op1)) && (SyntacticActions::isId(op2) || SyntacticActions::isConstant(op2)))
    {
        string operator1 = SyntacticActions::isConstant(op1) ? this->removeNumberSuffix(op1) : op1;
        string operator2 = SyntacticActions::isConstant(op2) ? this->removeNumberSuffix(op2) : op2;

        string registerName = getFreeRegister(this->getOperationSize(terceto->getType()));
        (*reference) << "mov " << registerName << ", " << operator1 << endl;
        (*reference) << operation << " " << registerName << ", " << operator2 << endl;

        if (assign)
        {
            (*reference) << "mov " << op1 << ", " << registerName << endl;
        }

        (*reference) << "jo intOverflow" << endl;

        if (terceto->getType() == "uint")
        {
            (*reference) << "js uintNegative" << endl;
        }

        terceto->setRegisterName(registerName);
        return;
    }

    // Caso 2, 1 variable/constante y 1 terceto
    if (this->isRegister(op1) && !this->isRegister(op2))
    {
        string operator2 = SyntacticActions::isConstant(op2) ? this->removeNumberSuffix(op2) : op2;
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        (*reference) << operation << " " << tercetoOp1->getRegisterName() << ", " << operator2 << endl;
        (*reference) << "jo intOverflow" << endl;

        if (terceto->getType() == "uint")
        {
            (*reference) << "js uintNegative" << endl;
        }

        terceto->setRegisterName(tercetoOp1->getRegisterName());
        return;
    }
}

void Assembler::generateDoubleOp(string operation, Terceto *terceto, bool assign)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());
    // Caso 3, 2 tercetos
    if (this->isRegister(op1) && this->isRegister(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);

        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);

        auxStream << aux << " dq ?" << endl;
        (*reference) << "fld " << tercetoOp1->getRegisterName() << endl;
        (*reference) << "fld " << tercetoOp2->getRegisterName() << endl;
        (*reference) << operation << endl;

        // Chequear overflow
        if (operation == "fadd")
        {
            checkDoubleOverflow(aux);
        }

        (*reference) << "fstp " << aux << endl;

        terceto->setRegisterName(aux);
        freeRegister(tercetoOp1->getRegisterName());
        freeRegister(tercetoOp2->getRegisterName());

        return;
    }

    // Caso 4, 1 terceto y 1 variable/constante
    if (this->isRegister(op1) && !this->isRegister(op2))
    {
        string operator2 = op2;
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);
        (*reference) << "fld " << tercetoOp1->getRegisterName() << endl;
        (*reference) << "fld " << operator2 << endl;
        (*reference) << operation << endl;
        // Chequear overflow
        if (operation == "fadd")
        {
            checkDoubleOverflow(aux);
        }
        (*reference) << "fstp " << aux << endl;
        terceto->setRegisterName(aux);
        freeRegister(tercetoOp1->getRegisterName());
        return;
    }

    if (this->isRegister(op2) && !this->isRegister(op1))
    {
        string operator1 = op1;
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);
        (*reference) << "fld " << operator1 << endl;
        (*reference) << "fld " << tercetoOp2->getRegisterName() << endl;
        (*reference) << operation << endl;
        // Chequear overflow
        if (operation == "fadd")
        {
            checkDoubleOverflow(aux);
        }

        if (assign)
        {
            (*reference) << "fstp " << operator1 << endl;
        }
        else
        {
            (*reference) << "fstp " << aux << endl;
            terceto->setRegisterName(aux);
        }

        freeRegister(tercetoOp2->getRegisterName());
        return;
    }

    if ((SyntacticActions::isId(op1) || SyntacticActions::isConstant(op1)) && (SyntacticActions::isId(op2) || SyntacticActions::isConstant(op2)))
    {
        string operator1 = op1;
        string operator2 = op2;

        if (SyntacticActions::isConstant(op1))
        {
            string aux = "@aux" + to_string(auxVars.size());
            auxVars.push_back(aux);
            auxStream << aux << " dq " << convertDoubleToHex(op1) << endl;
            (*reference) << "fld " << aux << endl;
        }
        else
        {
            (*reference) << "fld " << operator1 << endl;
        }
        if (SyntacticActions::isConstant(op2))
        {
            string aux = "@aux" + to_string(auxVars.size());
            auxVars.push_back(aux);
            auxStream << aux << " dq " << convertDoubleToHex(operator2) << endl;
            (*reference) << "fld " << aux << endl;
        }
        else
        {
            (*reference) << "fld " << operator2 << endl;
        }

        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);

        auxStream << aux << " dq ?" << endl;
        (*reference) << operation << endl;
        // Chequear overflow
        if (operation == "fadd")
        {
            checkDoubleOverflow(aux);
        }

        if (assign)
        {
            (*reference) << "fstp " << operator1 << endl;
        }
        else
        {
            (*reference) << "fstp " << aux << endl;
            terceto->setRegisterName(aux);
        }
    }
}

void Assembler::generateComp(Terceto *terceto)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());

    if (this->isRegister(op1) && this->isRegister(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << "cmp " << tercetoOp1->getRegisterName() << ", " << tercetoOp2->getRegisterName() << endl;
        freeRegister(tercetoOp1->getRegisterName());
        freeRegister(tercetoOp2->getRegisterName());
        return;
    }

    if (this->isRegister(op1) && !this->isRegister(op2))
    {
        string operator2 = SyntacticActions::isConstant(op2) ? this->removeNumberSuffix(op2) : op2;
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        (*reference) << "cmp " << tercetoOp1->getRegisterName() << ", " << operator2 << endl;
        freeRegister(tercetoOp1->getRegisterName());
        return;
    }

    if (!this->isRegister(op1) && this->isRegister(op2))
    {
        string operator1 = SyntacticActions::isConstant(op1) ? this->removeNumberSuffix(op1) : op1;
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << "cmp " << operator1 << ", " << tercetoOp2->getRegisterName() << endl;
        freeRegister(tercetoOp2->getRegisterName());
        return;
    }

    if (!this->isRegister(op1) && !this->isRegister(op2))
    {
        string operator1 = SyntacticActions::isConstant(op1) ? this->removeNumberSuffix(op1) : op1;
        string operator2 = SyntacticActions::isConstant(op2) ? this->removeNumberSuffix(op2) : op2;

        string registerName = getFreeRegister(this->getOperationSize(terceto->getType()));
        string registerName2 = getFreeRegister(this->getOperationSize(terceto->getType()));
        (*reference) << "mov " << registerName << ", " << operator1 << endl;
        (*reference) << "mov " << registerName2 << ", " << operator2 << endl;
        (*reference) << "cmp " << registerName << ", " << registerName2 << endl;
        freeRegister(registerName);
        freeRegister(registerName2);
    }
}

void Assembler::generateDoubleComp(Terceto *terceto)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());

    if (this->isRegister(op1) && this->isRegister(op2))
    {
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << "fld " << tercetoOp1->getRegisterName() << endl;
        (*reference) << "fld " << tercetoOp2->getRegisterName() << endl;
        (*reference) << "fcompp" << endl;
        freeRegister(tercetoOp1->getRegisterName());
        freeRegister(tercetoOp2->getRegisterName());
        return;
    }

    if (this->isRegister(op1) && !this->isRegister(op2))
    {
        string operator2 = SyntacticActions::isConstant(op2) ? this->removeNumberSuffix(op2) : op2;
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        (*reference) << "fld " << tercetoOp1->getRegisterName() << endl;
        (*reference) << "fld " << operator2 << endl;
        (*reference) << "fcompp" << endl;
        freeRegister(tercetoOp1->getRegisterName());
        return;
    }

    if (!this->isRegister(op1) && this->isRegister(op2))
    {
        string operator1 = SyntacticActions::isConstant(op1) ? this->removeNumberSuffix(op1) : op1;
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << "fld " << operator1 << endl;
        (*reference) << "fld " << tercetoOp2->getRegisterName() << endl;
        (*reference) << "fcompp" << endl;
        freeRegister(tercetoOp2->getRegisterName());
        return;
    }

    if (!this->isRegister(op1) && !this->isRegister(op2))
    {
        string operator1 = op1;
        string operator2 = op2;

        if (SyntacticActions::isConstant(op1))
        {
            string aux = "@aux" + to_string(auxVars.size());
            auxVars.push_back(aux);
            auxStream << aux << " dq " << operator1 << endl;
            (*reference) << "fld " << aux << endl;
        }
        else
        {
            (*reference) << "fld " << operator1 << endl;
        }
        if (SyntacticActions::isConstant(op2))
        {
            string aux = "@aux" + to_string(auxVars.size());
            auxVars.push_back(aux);
            auxStream << aux << " dq " << operator2 << endl;
            (*reference) << "fld " << aux << endl;
        }
        else
        {
            (*reference) << "fld " << operator2 << endl;
        }

        string aux = "@aux" + to_string(auxVars.size());
        auxVars.push_back(aux);

        auxStream << aux << " dq ?" << endl;

        (*reference) << "fcompp" << endl;
    }
}

void Assembler::start()
{
    reference = &dataStream;

    map<int, Terceto> *tercetos = IntermediateCodeGenerator::getTercetos();
    map<int, Terceto>::iterator it = tercetos->begin();

    while (it != tercetos->end())
    {
        Terceto *terceto = &it->second;
        string op = terceto->getOp();
        string op1 = this->replaceScopeChar(terceto->getOp1());
        string op2 = this->replaceScopeChar(terceto->getOp2());

        bool isDoubleOperation = this->isDouble(op1) || this->isDouble(op2);

        if (op == "=")
        {
            if (isDoubleOperation)
            {
                generateAssignDouble(terceto);
            }
            else
            {
                generateAssign(terceto);
            }
        }
        else if (op == "+")
        {
            if (isDoubleOperation)
            {
                generateDoubleOp("fadd", terceto);
            }
            else
            {
                generateOp("add", terceto);
            }
        }
        else if (op == "+=")
        {
            if (isDoubleOperation)
            {
                generateDoubleOp("fadd", terceto);
            }
            else
            {
                generateOp("add", terceto, true);
            }
        }
        else if (op == "-")
        {
            if (isDoubleOperation)
            {
                generateDoubleOp("fsub", terceto);
            }
            else
            {
                generateOp("sub", terceto);
            }
        }
        else if (op == "*")
        {
            if (isDoubleOperation)
            {
                generateDoubleOp("fmul", terceto);
            }
            else
            {
                generateOp("mul", terceto);
            }
        }
        else if (op == "/")
        {
            if (isDoubleOperation)
            {
                generateDoubleOp("fdiv", terceto);
            }
            else
            {
                generateOp("div", terceto);
            }
        }
        else if (op == ">=")
        {
            if (isDoubleOperation)
            {
                generateDoubleComp(terceto);
            }
            else
            {
                generateComp(terceto);
            }

            lastOperation.push("jl");
        }
        else if (op == "<=")
        {
            if (isDoubleOperation)
            {
                generateDoubleComp(terceto);
            }
            else
            {
                generateComp(terceto);
            }
            lastOperation.push("jg");
        }
        else if (op == ">")
        {
            if (isDoubleOperation)
            {
                generateDoubleComp(terceto);
            }
            else
            {
                generateComp(terceto);
            }
            lastOperation.push("jle");
        }
        else if (op == "<")
        {
            if (isDoubleOperation)
            {
                generateDoubleComp(terceto);
            }
            else
            {
                generateComp(terceto);
            }
            lastOperation.push("jge");
        }
        else if (op == "==")
        {
            if (isDoubleOperation)
            {
                generateDoubleComp(terceto);
            }
            else
            {
                generateComp(terceto);
            }
            lastOperation.push("jne");
        }
        else if (op == "!!")
        {
            if (isDoubleOperation)
            {
                generateDoubleComp(terceto);
            }
            else
            {
                generateComp(terceto);
            }
            lastOperation.push("je");
        }
        else if (op == "BF")
        {
            string label = this->isRegister(op2) ? "Label" + op2 : "Label" + op1;
            (*reference) << lastOperation.top() << " " << label << endl;
            lastOperation.pop();
        }
        else if (op == "BI")
        {
            string label = this->isRegister(op2) ? "Label" + op2 : "Label" + op1;
            (*reference) << "jmp " << label << endl;
        }
        else if (op.find("Label") != string::npos)
        {
            (*reference) << op << ":" << endl;
        }
        else if (op == "inic_func")
        {
            functionDeclarations[op1] = stringstream();
            reference = &functionDeclarations[op1];
            (*reference) << op1 << ":" << endl;

            string oldScope = op1;
            replace(oldScope.begin(), oldScope.end(), '@', ':');

            Token *token = Lexer::symbolTable->getSymbol(oldScope);
            if (token != NULL)
            {
                if (token->getParameter() != NULL)
                {
                    (*reference) << "pop " << token->getParameter()->getKey() << endl;
                }
            }

            functionStack.push(op1);
        }
        else if (op == "end_func")
        {
            reference = &functionDeclarations[op1];

            (*reference) << "end_" << op1 << ":" << endl;
            (*reference) << "ret" << endl;
            functionStack.pop();
            if (functionStack.empty())
            {
                reference = &dataStream;
            }
        }
        // Solucion posible. Agregar una etiqueta que marca el fin de la funcion y que el RETURN se convierta en un JMP a esa etiqueta
        else if (op == "RETURN")
        {
            // Obtengamos el terceto al que hace referencia el return
            int tercetoNumber = atoi(op1.c_str());
            Terceto *terceto = IntermediateCodeGenerator::getTerceto(tercetoNumber);
            string funcName = this->replaceScopeChar(terceto->getOp1());
            reference = &functionDeclarations[funcName];
            (*reference) << "jmp end_" << funcName << endl;
        }
        else if (op == "INVOKE")
        {
            if (this->isRegister(op2))
            {
                int tercetoNumber = atoi(op2.c_str());
                Terceto *terceto = IntermediateCodeGenerator::getTerceto(tercetoNumber);
                (*reference) << "push " << terceto->getRegisterName() << endl;
            }
            else if (op2.length() > 0)
            {
                (*reference) << "push " << op2 << endl;
            }

            (*reference) << "call " << op1 << endl;
        }

        it++;
    }
}

string Assembler::replaceScopeChar(string scope)
{
    string newScope = scope;
    replace(newScope.begin(), newScope.end(), ':', '@');
    return newScope;
}

string Assembler::removeNumberSuffix(string name)
{
    string newName = name;
    newName.erase(newName.find_first_of("_"), string::npos);
    return newName;
}

bool Assembler::isDouble(string key)
{
    if (key.length() == 0)
        return false;
    if (SyntacticActions::isTerceto(key))
        return IntermediateCodeGenerator::getTerceto(atoi(key.c_str()))->getType() == "double";
    if (SyntacticActions::isId(key))
    {
        string oldScope = key;
        replace(oldScope.begin(), oldScope.end(), '@', ':');
        Token *token = Lexer::symbolTable->getSymbol(oldScope);
        return token->getType() == "double";
    }
    Token *token = Lexer::symbolTable->getSymbol(key);
    if (token == NULL)
        return false;
    int type = token->getTokenType();
    return type == CTE_DOUBLE;
}

bool Assembler::isAuxVar(string key)
{
    return find(auxVars.begin(), auxVars.end(), key) != auxVars.end();
}

bool Assembler::isRegister(string key)
{
    return SyntacticActions::isTerceto(key) || isAuxVar(key);
}

void Assembler::checkDoubleOverflow(string auxVar)
{
    string registerName = getFreeRegister(8);
    (*reference) << "fst " << auxVar << endl;        // Copio el resultado de la suma en una variable auxiliar de 64 bits
    (*reference) << "fcom " << auxVar << endl;       // Comparo si el valor en ST es igual al valor actual en la variable aux
    (*reference) << "fstsw" << registerName << endl; // Copio el valor del registro de estado en AX
    (*reference) << "sahf" << endl;                  // Copio el valor de AX en el registro de estado
    (*reference) << "jne doubleOverflow" << endl;    // Si no son iguales, hubo overflow
    freeRegister(registerName);
}

int Assembler::getOperationSize(string type)
{
    if (type == "uint")
    {
        return 16;
    }
    else if (type == "short")
    {
        return 8;
    }
    return 32;
}

string Assembler::convertDoubleToHex(string number)
{
    istringstream iss(number);
    double valorDouble;
    iss >> valorDouble;

    ostringstream oss;
    oss << std::hexfloat << valorDouble;
    string valorHex = oss.str();
    return valorHex;
}
