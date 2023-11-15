#include "SymbolTable.h"

SymbolTable::SymbolTable(){
}

SymbolTable::~SymbolTable(){
}

void SymbolTable::addSymbol(Token * token, string lexeme){
    Token * _token = this->getSymbol(lexeme);
    if(_token != NULL){
        _token->increaseReferences();
        return;
    }

    this->symbols.insert(pair<string,Token*>(lexeme, token));
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
        cout << pair.first << " - referencias: " << pair.second->getReferences()
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
        string lexeme = token->getLexeme();
        string varName = lexeme + ":" + scope;
        Token * _token = token->copy();
        this->addSymbol(_token, varName);

        this->deleteSymbol(lexeme);
    }
}

list<string>* SymbolTable::getSymbolsByScope(string scope){
    list<string>* salida = new list<string>;
    for(auto& pair: this->symbols){
        string lexeme = pair.first;
        if (lexeme.find(scope) != string::npos)
            salida->push_back(lexeme);
    }

    return salida;
}

int SymbolTable::getSymbolsSize(){
    return this->symbols.size();
}