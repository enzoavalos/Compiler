#include "IntermediateCodeGenerator.h"
#include "..\Logger.cpp"

void IntermediateCodeGenerator::addScope(char* newScope){
    string aux = newScope;
    scope += ":" + aux;
}

void IntermediateCodeGenerator::onScopeFinished(){
    size_t lastScope = scope.rfind(":");
    if(lastScope != string::npos)
        scope = scope.substr(0, lastScope);
}

void IntermediateCodeGenerator::setVarScope(char *key){
    Logger::infoMsg("DENTRO SET SCOPE");
    string lexeme = key;
    Lexer::symbolTable->setScope(lexeme, scope);
}