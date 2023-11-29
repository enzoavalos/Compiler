#ifndef TERCETO_H
#define TERCETO_H

#include <iostream>
using namespace std;

class Terceto{
    public:
        Terceto();
        Terceto(string, string, string, string);

        string getOp() ;
        string getOp1() ;
        string getOp2();

        void setOp(string op);
        void setOp1(string op1);
        void setOp2(string op2);

        void setRegisterName(string registerName);
        string getRegisterName();

        string getType() const;

        static void completarTerceto(int numeroTerceto); // Completar terceto incompleto, backpatching

        void setLine(int);
        int getLine();
    private:
        int line = 1;
        string op;
        string op1;
        string op2;
        string type;

        string registerName = "";
};

#endif