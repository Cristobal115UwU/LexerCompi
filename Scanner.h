#ifndef __SCANNER_HPP__
#define __SCANNER_HPP__ 1

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

namespace C_1
{

    class Scanner : public yyFlexLexer
    {
    public:
        Scanner(std::istream *in) : yyFlexLexer(in)
        {
        };

        using FlexLexer::yylex;
        virtual int yylex();

    private:
        const int ERROR = -1;
        const int ACEPTAR = 0;
        const int MAS = 1;
        const int MENOS = 2;
        const int MUL = 3;
        const int DIV = 4;
        const int ID = 5;
        // TODO(1) Completar las constantes que faltan de los tokens
    };

}

#endif /* END __SCANNER_H__ */