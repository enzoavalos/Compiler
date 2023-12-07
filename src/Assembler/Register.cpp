#include "Register.h"

Register::Register(string name, int size) {
    this->name = name;
    this->size = size;
}

string Register::getName() {
    return this->name;
}

int Register::getSize() {
    return this->size;
}

void Register::setName(string name) {
    this->name = name;
}

void Register::getRegister() {
    this->free = false;
}

void Register::freeRegister() {
    this->free = true;
}

void Register::addRegister(Register *reg) {
    this->Registers.push_back(reg);
}

bool Register::isFree() {
    return this->free;
}

vector<Register*> Register::getRegisters() {
    return this->Registers;
}
