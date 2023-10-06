#include "./SyntacticActions.h"
#include "../Logger.cpp"

void SyntacticActions::check_division_by_zero(char* key){
        string aux = key;
        cout << "Division by zero check " << key << endl;
        if(aux == "0")
            Logger::logError("Division by zero");
}