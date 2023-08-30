#include <iostream>
#include <fstream>
#include "src/Lexer.cpp"
#include "src/SymbolTable/SymbolTable.cpp"

using namespace std;

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

    Lexer *lexer = new Lexer(src);
    lexer->run();
    
}
