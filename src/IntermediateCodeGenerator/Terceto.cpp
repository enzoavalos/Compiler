#include "Terceto.h"

Terceto::Terceto(){
}

Terceto::Terceto(string op, string op1, string op2, string type="no-type"){
    setOp(op);
    setOp1(op1);
    setOp2(op2);
    this->type = type;
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

void Terceto::setOp(string  op){
    this->op = op;
}

void Terceto::setOp1(string  op1){
    this->op1 = op1;
}

void Terceto::setOp2(string op2){
    this->op2 = op2;
}

void Terceto::completarTerceto(int numeroTerceto) {
    
}

void Terceto::setLine(int line){
    this->line = line;
}

int Terceto::getLine(){
    return this->line;
}

void Terceto::setRegisterName(string registerName) {
    this->registerName = registerName;
}

string Terceto::getRegisterName() {
    return this->registerName;
}

string Terceto::getType() const{
    return this->type;
}

void Terceto::setType(string type){
    this->type = type;
}