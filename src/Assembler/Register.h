
#include <iostream>
#include <vector>
using namespace std;

class Register {
    private:
        string name;
        int size;
        bool free = true;
        vector<Register*> Registers = vector<Register*>();

    public:
        Register(string name, int size);
        string getName();
        int getSize();
        void setName(string name);
        void getRegister();
        void freeRegister();
        bool isFree();
        vector<Register*> getRegisters();
        void addRegister(Register *reg);
};