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
        string varName = this->replaceScopeChar(it->first);
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

    fileStream << ".data" << endl;

    fileStream << "msg1 db \"Error: Division by zero\", 0" << endl;
    fileStream << "msg2 db \"Error: Index out of bounds\", 0" << endl;
    fileStream << "msg3 db \"Error: Invalid memory access\", 0" << endl;

    declareVariables();

    fileStream << ".code" << endl;

    // Declarar funciones
    for(auto it = functionDeclarations.begin(); it != functionDeclarations.end(); it++){
        fileStream << it->second.str();
    }

    fileStream << "start:" << endl;
    fileStream << dataStream.str();
    fileStream << "end start" << endl;
}

// TODO 3: revisar estas generaciones, probablemente se puede optimizar y sacar codigo repetido
void Assembler::generateAssign(Terceto *terceto)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());

    // Caso 1, variable/constante y registro
    if (SyntacticActions::isId(op1) && SyntacticActions::isTerceto(op2))
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
        string registerName = getFreeRegister();
        (*reference) << "mov " << registerName << ", " << op2 << endl;
        (*reference) << "mov " << op1 << ", " << registerName << endl;
        this->freeRegister(registerName);
        return;
    }
}

// TODO 4: Tenemos que hacer algo con los numeros. Eliminar el sufijos de SHORT y UINT. Y usar los registros correspondientes segun el tamaño de la variable?
void Assembler::generateOp(string operation, Terceto *terceto)
{
        string op1 = this->replaceScopeChar(terceto->getOp1());
        string op2 = this->replaceScopeChar(terceto->getOp2());
    // Caso 3, 2 tercetos
    if (SyntacticActions::isTerceto(op1) && SyntacticActions::isTerceto(op2))
    {
        cout << "Caso 3" << endl;
        int terceto1 = atoi(op1.c_str());
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << operation << tercetoOp1->getRegisterName() << ", " << tercetoOp2->getRegisterName() << endl;
        this->freeRegister(tercetoOp2->getRegisterName());
        terceto->setRegisterName(tercetoOp1->getRegisterName());
        return;
    }

    // Caso 4, 1 terceto y 1 variable/constante
    if (!SyntacticActions::isTerceto(op1) && SyntacticActions::isTerceto(op2))
    {
        cout << "Caso 4" << endl;
        // Caso conmutativo (*, +)
        if (operation == "add" || operation == "mul")
        {

            int terceto2 = atoi(op2.c_str());
            Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
            (*reference) << operation << " " << tercetoOp2->getRegisterName() << ", " << op1 << endl;
            terceto->setRegisterName(tercetoOp2->getRegisterName());
            return;
        }
        else
        {
            int terceto2 = atoi(op2.c_str());
            Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
            string registerName = getFreeRegister();
            (*reference) << "mov " << registerName << ", " << op1 << endl;
            (*reference) << operation << " " << registerName << ", " << tercetoOp2->getRegisterName() << endl;
            terceto->setRegisterName(registerName);
            return;
        }
    }

    // Caso 1, 2 variables/constantes
    if ((SyntacticActions::isId(op1) || SyntacticActions::isConstant(op1)) && (SyntacticActions::isId(op2) || SyntacticActions::isConstant(op2)))
    {
        string registerName = getFreeRegister();
        (*reference) << "mov " << registerName << ", " << op1 << endl;
        (*reference) << operation << " " << registerName << ", " << op2 << endl;
        terceto->setRegisterName(registerName);
        return;
    }

    // Caso 2, 1 variable/constante y 1 terceto
    if (SyntacticActions::isTerceto(op1) && !SyntacticActions::isTerceto(op2))
    {
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        (*reference) << operation << " " << tercetoOp1->getRegisterName() << ", " << op2 << endl;
        terceto->setRegisterName(tercetoOp1->getRegisterName());
        return;
    }
}

void Assembler::generateComp(Terceto *terceto)
{
    string op1 = this->replaceScopeChar(terceto->getOp1());
    string op2 = this->replaceScopeChar(terceto->getOp2());

    if (SyntacticActions::isTerceto(op1) && SyntacticActions::isTerceto(op2))
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

    if (SyntacticActions::isTerceto(op1) && !SyntacticActions::isTerceto(op2))
    {
        int terceto1 = atoi(op1.c_str());
        Terceto *tercetoOp1 = IntermediateCodeGenerator::getTerceto(terceto1);
        (*reference) << "cmp " << tercetoOp1->getRegisterName() << ", " << op2 << endl;
        freeRegister(tercetoOp1->getRegisterName());
        return;
    }

    if (!SyntacticActions::isTerceto(op1) && SyntacticActions::isTerceto(op2))
    {
        int terceto2 = atoi(op2.c_str());
        Terceto *tercetoOp2 = IntermediateCodeGenerator::getTerceto(terceto2);
        (*reference) << "cmp " << op1 << ", " << tercetoOp2->getRegisterName() << endl;
        freeRegister(tercetoOp2->getRegisterName());
        return;
    }

    if (!SyntacticActions::isTerceto(op1) && !SyntacticActions::isTerceto(op2))
    {
        string registerName = getFreeRegister();
        string registerName2 = getFreeRegister();
        (*reference) << "mov " << registerName << ", " << op1 << endl;
        (*reference) << "mov " << registerName2 << ", " << op2 << endl;
        (*reference) << "cmp " << registerName << ", " << registerName2 << endl;
        freeRegister(registerName);
        freeRegister(registerName2);
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

        if (op == "=")
        {
            generateAssign(terceto);
        }
        else if (op == "+")
        {
            generateOp("add", terceto);
        }
        else if (op == "+=")
        {
            string registerName = getFreeRegister();
            (*reference) << "mov " << registerName << ", " << op1 << endl;
            (*reference) << "add " << registerName << ", " << op2 << endl;
            (*reference) << "mov " << op1 << ", " << registerName << endl;
            freeRegister(registerName);
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
        else if (op == ">=")
        {
            generateComp(terceto);
            lastOperation.push("jl");
        }
        else if (op == "<=")
        {
            generateComp(terceto);
            lastOperation.push("jg");
        }
        else if (op == ">")
        {
            generateComp(terceto);
            lastOperation.push("jle");
        }
        else if (op == "<")
        {
            generateComp(terceto);
            lastOperation.push("jge");
        }
        else if (op == "==")
        {
            generateComp(terceto);
            lastOperation.push("jne");
        }else if(op == "!!"){
            generateComp(terceto);
            lastOperation.push("je");
        }
        else if (op == "BF")
        {
            string label = SyntacticActions::isTerceto(op2) ? "Label" + op2 : "Label" + op1;
            (*reference) << lastOperation.top() << " " << label << endl;
            lastOperation.pop();
        }
        else if (op == "BI")
        {
            string label = SyntacticActions::isTerceto(op2) ? "Label" + op2 : "Label" + op1;
            (*reference) << "jmp " << label << endl;
        }
        else if (op.find("Label") != string::npos)
        {
            (*reference) << op << ":" << endl;
        }
        // Esto no me convence mucho, si las funciones estan anidadas o algo va a causar problemas.
        //  Posibles soluciones? Contar anidamientos y aumentar/descontar segun inicio o return
        else if (op == "inic_func")
        {
            functionDeclarations[op1] = stringstream();
            reference = &functionDeclarations[op1];
            (*reference) << op1 << ":" << endl;
            functionStack.push(op1);
        }
        else if (op == "end_func")
        {
            reference = &functionDeclarations[op1];
            // Revisar, si hay un RETURN y end_func juntos, que no se repitan los ret

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
            // Como se envian argumentos a la funcion?
            (*reference) << "invoke " << op1 << ", " << op2 << endl;
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
