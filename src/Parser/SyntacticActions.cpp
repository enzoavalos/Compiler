#include "./SyntacticActions.h"

void SyntacticActions::check_division_by_zero(SymbolTable * symbol_table, string key){
        string aux = symbol_table->getSymbol(key)->getLexeme();
        if(aux == "0"){
            cout << "Error: Division by zero" << endl;
        }

}