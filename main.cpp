#include <iostream>
#include "Lexer.h"

using namespace std;
using namespace COMPILADOR_C_1;

int main(int argc, char *argv[]){
    // if(argc < 2){
    //     cout << "Faltan argumentos" << endl;
    //     //cout << "Uso esperado: './lexer [archivo_entrada]'" << endl;// JORGE
    //     return EXIT_FAILURE;
    // }

    COMPILADOR_C_1::Lexer lexer("afd");
    if(!lexer.openFile(string(argv[1])))
	return -1;
    cout << "Termine prueba" << endl;

    // int token = lexer.yylex();

    // while(token != 0){
    //     cout<< token << ", " << lexer.getYytext() << endl;
    //     token = lexer.yylex();
    // }
    
    // lexer.closeFile();
    // return 0;
}