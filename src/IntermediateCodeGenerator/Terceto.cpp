#include "Terceto.h"

Terceto::Terceto(){
}

Terceto::Terceto(string op, string op1, string op2){
    setOp(op);
    setOp1(op1);
    setOp2(op2);
    setOp3(op3);
}

string Terceto::getOp() {
    return this->op;
}
string Terceto::getOp1(){
    return this->op1;
}
string Terceto:: getOp2(){
    return this->op2;
}

string Terceto:: getOp3(){
    return this->op3;
}

void Terceto::setOp(string  op){
    this->op = op;
}

void Terceto::setOp1(string  op1){
    this->op1 = op1;
}

void Terceto::setOp2(string op2){
    this->op2 = op2;
}

void Terceto::setOp3(string op3){
    this->op3 = op3;
}

void Terceto::completarTerceto(int numeroTerceto) {
    
}