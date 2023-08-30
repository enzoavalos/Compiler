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
        void addSymbol(Token *);
        Token * getSymbol(string) const;
        void printTable() const;
        void deleteSymbol(string);
};

#endif