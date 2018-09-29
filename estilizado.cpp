#ifndef ESTILIZADO_H
#define ESTILIZADO_H
#include "fabrica.cpp"
#include "rectangulo.cpp"
#include <cmath>


class Estilizado : public Fabrica
{
    public:

        Estilizado();
        virtual ~Estilizado();
        Forma<int>* crear_cuadrilatero();
        Forma<int>* crear_circulos();     
};



Estilizado::Estilizado(){

}


Estilizado::~Estilizado()
{

}


Forma<int>* Estilizado::crear_cuadrilatero(){
    return new Rectangulo<int>(4,3);	
}



Forma<int>* Estilizado::crear_circulos(){
	
}

#endif