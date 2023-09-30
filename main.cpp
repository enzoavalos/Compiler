#include <iostream>
#include <fstream>
#include <string.h>
#include "src/Parser/SyntacticActions.cpp"
#include "src/Lexer.cpp"
#include "src/SymbolTable/SymbolTable.cpp"
#include "src/TransitionMatrix/TransitionMatrix.cpp"
#include "src/TransitionMatrix/SemanticActions.cpp"
#include "src/Token.cpp"

using namespace std;
int yylex();
void yyerror(const char *);
#include "src/Parser/gramatica.tab.cpp"
Lexer *lexer;

#if YYDEBUG
    extern int yydebug;
#else
    static int yydebug = 0;
#endif


int main(int argc, char* argv[])
{
    yydebug = 0;
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
    yyparse();

    table.printTable();
}

void yyerror(const char * text)
{
    cout << text << endl;
}

int yylex() {
    Token *token = lexer->scanToken();
    printf("Token: %d\n", token->getType());
    printf("Lexema: %s\n", token->getLexeme().c_str());
    string lex = token->getLexeme();

    char *cstr = new char[lex.length() + 1];
    strcpy(cstr, lex.c_str());
    yylval.string = cstr;
    return token->getType();
}
