#ifndef TERCETO_H
#define TERCETO_H

#include <iostream>
using namespace std;

class Terceto{
    public:
        Terceto();
        Terceto(string, string, string);

        string getOp() ;
        string getOp1() ;
        string getOp2();
        string getOp3();

        void setOp(string op);
        void setOp1(string op1);
        void setOp2(string op2);
        void setOp3(string op3);

        static void completarTerceto(int numeroTerceto); // Completar terceto incompleto, backpatching
    private:
        string op;
        string op1; // Operador 1, puede ser otro terceto
        string op2;
        string op3; // Operador auxiliar
};

#endif