#ifndef SIMPLE_H
#define SIMPLE_H
#include "fabrica.cpp"
#include <cmath>


class Simple : public Fabrica
{
    public:
        Simple();
        ~Simple();
        Forma<int>* crear_cuadrilatero();
        Forma<int>* crear_circulos();   
};


Simple::Simple(){
}

Simple::~Simple()
{

}

Forma<int>* Simple::crear_cuadrilatero(){
    
}


Forma<int>* Simple::crear_circulos(){

}





	 


#endif