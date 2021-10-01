#include "iostream"
#include "string"
#include "Lexer.h"
#include "tokens.h"
using namespace std;
namespace COMPILADOR_C_1{
    
    //ABRIR ARCHIVO
    Lexer::Lexer(string file)
    {
        ifstream afd(file);
        string line, aceptar;
        stringstream s;
        int fila=0, col=0, q;
        getline(afd,line);
        s = stringstream(line);
        s>>numState;
        s>>numTokens;
        cout << s.str() << endl; //prueba
    }
    
    // //TABLA DE TRANSICIONES
    //     tableT = new int*[numState];
    //     for(int i=0; i<numState; i++){
    //         tableT[i]=new int[numTokens];
    //     }

    //     acept = new bool[numState];

    //     while(fila < numState){
    //         getline(afd,line);
    //         s = stringstream(line);
    //         while(col < numTokens){
    //             s >> q;
    //             tableT[fila][col++]=q;
    //         }
    //         s >> aceptar;
    //         aceptar =="true"? acept[fila] = true : acept[fila]=false;
    //         fila++;
    //         col=0;
    //     }
    //     afd.close(); //cerrar archivo

    // //SÍMBOLOS  
    //     alfabeto['+'] = 0;
    //     alfabeto['-'] = 1;
    //     alfabeto['*'] = 2;
    //     alfabeto['/'] = 3;
    //     alfabeto['='] = 4;
    //     alfabeto['.'] = 5;
    //     alfabeto[','] = 6;
    //     alfabeto[';'] = 7;
    //     alfabeto['('] = 8;
    //     alfabeto[')'] = 9;
    //     alfabeto[' ']  = 10;
    //     alfabeto['\t'] = 10;
    //     alfabeto['\r'] = 10;
    //     alfabeto['\n'] = 10;
    //     alfabeto['0'] = 11;
    //     alfabeto['1'] = 11;
    //     alfabeto['2'] = 11;
    //     alfabeto['3'] = 11;
    //     alfabeto['4'] = 11;
    //     alfabeto['5'] = 11;
    //     alfabeto['6'] = 11;
    //     alfabeto['7'] = 11;
    //     alfabeto['8'] = 11;
    //     alfabeto['9'] = 11;
    //     alfabeto['a'] = 12;
    //     alfabeto['E'] = 13;
    //     alfabeto['e'] = 14;
    //     alfabeto['f'] = 15;
    //     alfabeto['h'] = 16;
    //     alfabeto['i'] = 17;
    //     alfabeto['l'] = 18;
    //     alfabeto['n'] = 19;
    //     alfabeto['o'] = 20;
    //     alfabeto['s'] = 21;
    //     alfabeto['t'] = 22;
    //     alfabeto['w'] = 23;
    //     alfabeto['A'] = 24;
    //     alfabeto['B'] = 24;
    //     alfabeto['C'] = 24;
    //     alfabeto['D'] = 24;
    //     alfabeto['F'] = 24;
    //     alfabeto['G'] = 24;
    //     alfabeto['H'] = 24;
    //     alfabeto['I'] = 24;
    //     alfabeto['J'] = 24;
    //     alfabeto['K'] = 24;
    //     alfabeto['L'] = 24;
    //     alfabeto['M'] = 24;
    //     alfabeto['N'] = 24;
    //     alfabeto['O'] = 24;
    //     alfabeto['P'] = 24;
    //     alfabeto['Q'] = 24;
    //     alfabeto['R'] = 24;
    //     alfabeto['S'] = 24;
    //     alfabeto['T'] = 24;
    //     alfabeto['U'] = 24;
    //     alfabeto['V'] = 24;
    //     alfabeto['W'] = 24;
    //     alfabeto['X'] = 24;
    //     alfabeto['Y'] = 24;
    //     alfabeto['Z'] = 24;
    //     alfabeto['_'] = 24;
    //     alfabeto['b'] = 24;
    //     alfabeto['c'] = 24;
    //     alfabeto['d'] = 24;
    //     alfabeto['g'] = 24;
    //     alfabeto['j'] = 24;
    //     alfabeto['k'] = 24;
    //     alfabeto['m'] = 24;
    //     alfabeto['p'] = 24;
    //     alfabeto['q'] = 24;
    //     alfabeto['u'] = 24;
    //     alfabeto['v'] = 24;
    //     alfabeto['x'] = 24;
    //     alfabeto['y'] = 24;
    //     alfabeto['z'] = 24;
    // }
    
    // //DESTRUCTOR

    // Lexer::~Lexer()
    // {
    //     for(int i=0; i<numState; i++)
    //         delete tableT[i];
    //     delete tableT;
    //     delete acept;
    // }

    // bool Lexer::openFile(string file)
    // {
    //     yyin.open(file,ios::in);
    //     if(!yyin.is_open()){
    //         cerr << "ERROR EN ABRIR EL ARCHIVO"
    //         << file << "" << endl;
    //         return false;
    //     }
    //     getChar();
    //     return true;
    // }
    // CARÁCTERES DEL ARCHIVO
    
    // void Lexer::getChar(){
    //     yyin.get(c);
    // }
    
    // CERRAR ARCHIVO 

    // void Lexer::closeFile(){
    //     yyin.close();
    // }

    //OBTENER TOKENS
    
    // int Lexer::yylex(){
    //     int q=0;
    //     int cc;
    //     yytext = "";        
    //     if(yyin.eof()) return 0;
    //     while(true){
    //         cc =  alfabeto[c];
    //         if(tableT[q][cc]!=-1){
    //             q=tableT[q][cc];
    //             yytext+=c;
    //             getChar();
    //             if(yyin.eof()) return 0;
    //         }else{
    //             if(acept[q]){
    //                 if(q==17){
    //                     q = 0;
    //                     yytext="";
    //                 }
    //                 else return token(q);
    //             }else{
    //                 return ERROR;
    //             }
    //         }
    //     }
    // }

    // string Lexer::getYytext(){
    //     return yytext;
    // } 

    // IMPRIMIR TABLA  CON ESTADOS DE TRANSICIÓN
    
    // void Lexer::printtableT(){
    //     for(int i = 0; i<numState; i++){
    //         for(int j = 0; j<numTokens; j++){
    //             cout << tableT[i][j] << "\t";
    //         }
    //         cout << acept[i] << "\t";
    //         cout << endl;
    //     }
    // }


    // int Lexer::token(int q)
    // {
    //     switch(q){
    //         case 1:
    //             return MAS;
    //         case 2:
    //             return MENOS;
    //         case 3:
    //             return MUL;
    //         case 4:
    //             return DIV;
    //         case 5:
    //             return ASIG;
    //         case 6:
    //             return LPAR;
    //         case 7:
    //             return RPAR;
    //         case 8:
    //             return PYC;
    //         case 9:
    //             return COMA;
    //         case 10 : case 20 : case 35:
    //             return NUMERO;
    //         case 12 : case 13 : case 14 : case 15 : case 16 : case 18 : case 21 :
    //         case 22 : case 23 : case 25 : case 26 : case 27 :  case 30 :
    //             return ID;
    //         case 17:
    //             return ESP;
    //         case 19:
    //             return IF;
    //         case 24:
    //             return INT;
    //         case 29:
    //             return ELSE;
    //         case 31:
    //             return FLOAT;
    //         case 32:
    //             return WHILE; 
    //     }
    // }
}
