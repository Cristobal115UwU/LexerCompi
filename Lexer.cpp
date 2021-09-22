#include "Lexer.h"
#include "tokens.h"

namespace COMP{
    Lexer::Lexer(/* args */)
    {
        transiciones =  new int*[36];
        for(int i=0; i<36; i++)
            transiciones[i] = new int[25];
        // TODO(1)  Completar la tabla de transiciones o llamar a la función para leer el archivo del AFD
        transiciones[0][0] = 1;
        transiciones[0][1] = 2;
        transiciones[0][2] = 3;
        transiciones[0][3] = 4;
        transiciones[0][4] = 5;
        transiciones[0][5] = 17;
        transiciones[0][6] = 10;
        transiciones[0][7] = 16;
        transiciones[0][8] = 16;
        transiciones[0][9] = 14;
        transiciones[0][10] = 13;
        transiciones[0][11] = 16;
        transiciones[0][12] = 12;

        // TODO(2) Completar el arreglo de estados de aceptación
        acc = new bool[36];
        acc[0] = false;
        acc[1] = true;

    }
    
    Lexer::~Lexer()
    {
    }

    bool Lexer::readAFD(string file){
        // TODO(3) Implementar una función qu e lea los renglones de la matriz de transicones
        // y los guarde en dicha matriz
    }

    char Lexer::getChar(){
        // TODO(4) implentar la función que permita regresar solo 1 caracter
    }

    bool Lexer::openFile(string file){
        yyin.open(file,ios::in);
    }

    int Lexer::charToColumn(char c){
        // TODO(5) completar  la función para regresar un número de acuerdo a la columna
        // También se puede usar un map<string, int> para obtenerlo con unbjeto 
        switch ((c))
        {
            case '+': return 0;
            case '-': return 1;
            case '*': return 2;
            case '/': return 3;
            case '=': return 4;
            case ' ': case '\t': case '\r': return 5;
            case '\n':  yyline++; return 5;
            default:
                break;
        }
    }

    int Lexer::yylex(){
        int q=0;
        int cc;
        yytext = "";

        while(true){
            cc = charToColumn(c);
            if(transiciones[q][cc]!=-1){
                q=transiciones[q][cc];
                yytext+=c;
                c= getChar();
            }else{
                if(acc[q]){
                    // TODO(6) Agregar el código para que la función ignore los espacios en blanco.
                    // Hint. Se puede hacer uso del estado de aceptación de los espacios en blanco
                    return token(q);
                }else{
                    return ERROR;
                }
            }
        }

    }

    int Lexer::token(int q){
        // TODO(7) Completar la función para que pueda retornar los tokens
        switch(q){
            case 1:
                return MAS;
            case 2:
                return MENOS;
            case 16:
                return ID;
        }
    }

}