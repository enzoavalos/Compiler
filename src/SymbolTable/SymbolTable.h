#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "../Token.h"
#include <map>
#include <list>

class SymbolTable{
    private:
        map<string,Token*> symbols;
    public:
        SymbolTable();
        ~SymbolTable();
        void addSymbol(Token *, string);
        Token * getSymbol(string) const;
        void printTable() const;
        void deleteSymbol(string);
        void setScope(string, string);
        int getSymbolsSize();
        list<string>* getSymbolsByScope(string);
};

#endif