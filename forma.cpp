#ifndef FORMA_H
#define FORMA_H
#include <iostream>
using namespace std;

template <class T>
class Forma
{
    public:
        //Forma();
        virtual ~Forma();
        virtual T area() = 0;
    	virtual T perimetro() = 0;
    	virtual void dibujar()=0;
};


template <class T>
Forma<T>::~Forma()
{

}

#endif