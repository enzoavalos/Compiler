#include <iostream>
#include <fstream>
#include <string.h>
#include "src/Lexer.cpp"
#include "src/SymbolTable/SymbolTable.cpp"
#include "src/TransitionMatrix/TransitionMatrix.cpp"
#include "src/TransitionMatrix/SemanticActions.cpp"
#include "src/Token.cpp"

using namespace std;
int yylex();
Lexer *lexer;

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		cout << "Ingrese un nombre de archivo" << endl;
		return 1;
	}

    fstream input;
    input.open(argv[1], ios::in);
    
    string temp, src = "";
    
    if(input.good()) {
        while(!input.eof()) {
            getline(input, temp);
            src += temp+"\n";
        }
        input.close();
    }
    else {
        cout << "Error al abrir el archivo" << endl;
    }
    src += '\0';

    SymbolTable table = SymbolTable();
    lexer = new Lexer(src, &table);

    lexer->run();
}

int yylex() {
    Token *token = lexer->scanToken();

    string lex = token->getLexeme();

    char *cstr = new char[lex.length() + 1];
    strcpy(cstr, lex.c_str());
    // yylval = cstr; Define later
    return token->getType();
}
