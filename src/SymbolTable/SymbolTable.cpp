#include "SymbolTable.h"

SymbolTable::SymbolTable(){
}

SymbolTable::~SymbolTable(){
}

void SymbolTable::addSymbol(Token * token){
    Token * _token = this->getSymbol(token->getLexeme());
    if(_token != NULL){
        _token->increaseReferences();
        return;
    }

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
    cout << "\nTabla de simbolos\n";
    for(auto& pair: this->symbols)
        cout << pair.second->getLexeme() << " - referencias: " << pair.second->getReferences()
        << " - tipo: " << pair.second->getType() << " - uso: " << pair.second->getUse() << endl;
}

void SymbolTable::deleteSymbol(string lexeme){
    Token * token = this->getSymbol(lexeme);
    if(token != NULL){
        token->decreaseReferences();
        
        if(token->getReferences() <= 0)
            this->symbols.erase(lexeme);
    }
}

void SymbolTable::setScope(string lexeme, string scope){
    Token * token = this->getSymbol(lexeme);
    if(token != NULL){
        string varName = token->getLexeme();
        varName += ":" + scope;
        token->setLexeme(varName);
    }
}