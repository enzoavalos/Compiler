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
    for(auto& pair: this->symbols){
        Token* token = pair.second;
        string msg = pair.first + " - lexema: " + token->getLexeme() + " - referencias: " + to_string(token->getReferences());

        if(token->getType() != "no-type")
            msg += " - tipo: " + token->getType();
        
        if(token->getUse() != "unused")
            msg += " - uso: " + token->getUse();

        if(token->getParameter() != NULL)
            msg += " - parametro: " + token->getParameter()->getLexeme();

        if(token->getFather() != NULL)
            msg += " - padre: " + token->getFather()->getLexeme();

        if(token->getUse() == "nombre-funcion")
            msg += " - inicio: " + to_string(token->getBegin()) + " - fin: " + to_string(token->getEnd());
        
        cout << msg << endl;
    }
}

void SymbolTable::decreaseSymbolReferences(string lexeme){
    Token * token = this->getSymbol(lexeme);
    if(token != NULL){
        token->decreaseReferences();
        
        if(token->getReferences() <= 0)
            this->deleteSymbol(lexeme);
    }
}

void SymbolTable::deleteSymbol(string lexeme){
    Token * token = this->getSymbol(lexeme);
    if(token != NULL){
        this->symbols.erase(lexeme);
        delete token;
    }
}

void SymbolTable::setScope(string lexeme, string scope){
    Token * token = this->getSymbol(lexeme);

    if(token != NULL){
        string varName = token->getLexeme() + ":" + scope;
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

map<string,Token*> SymbolTable::getSymbols(){
    return this->symbols;
}