#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "../Token.h"
#include <map>

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
        string* getSymbolsByScope(string);
        int getSymbolsSize();
};

#endif