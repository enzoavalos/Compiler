#include "SymbolTable.h"

SymbolTable::SymbolTable(){
}

SymbolTable::~SymbolTable(){
}

void SymbolTable::addSymbol(Token * token){
    this->symbols.insert(pair<string,Token*>(token->getLexeme(),token));
}

Token * SymbolTable::getSymbol(string lexeme) const{
    auto result = this->symbols.find(lexeme);
    if(result != this->symbols.end())
        return result->second;
    else
        return NULL;
}

void SymbolTable::printTable() const{
    cout << "Tabla de simbolos\n";
    for(auto& pair: this->symbols)
        cout << pair.first << endl;
}

void SymbolTable::deleteSymbol(string lexeme){
    this->symbols.erase(lexeme);
}