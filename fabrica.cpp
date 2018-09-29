#ifndef FABRICA_H
#define FABRICA_H
#include <iostream>
#include "forma.cpp"
#include "cuadrilatero.cpp"
#include "rectangulo.cpp"
using namespace std;

class Fabrica
{
    public:
       // Forma(){}
        virtual ~Fabrica(){}
    	virtual Forma<int>* crear_cuadrilatero()=0;
    	virtual Forma<int>* crear_circulos()=0;
};






#endif
