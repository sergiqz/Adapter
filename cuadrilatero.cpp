#ifndef CUADRILATERO_H
#define CUADRILATERO_H
#include "forma.cpp"
#include <cmath>

template <class T>
class Cuadrilatero : public Forma<T>
{

    private:
        T l1,l2,l3,l4,an;

    public:

        Cuadrilatero(T lado1,T lado2,T lado3,T lado4, T angul);
        virtual ~Cuadrilatero();
        T area();

        T perimetro();
        void dibujar();   
};

template <class T>
Cuadrilatero<T>::Cuadrilatero(T lado1,T lado2,T lado3,T lado4, T angul){
    an=angul;
    l1=lado1;
    l2=lado2;
    l3=lado3;
    l4=lado4;
}
template <class T>
Cuadrilatero<T>::~Cuadrilatero()
{

}






template <class T>
T Cuadrilatero<T>::area(){
    int s=perimetro()/2;
    float a= pow((s-l1)*(s-l2)*(s-l3)*(s-l4)-l1*l2*l3*l4*(pow((cos(an/2)*3.1416/180),2)),0.5);
    return a;
}


template <class T>
T Cuadrilatero<T>::perimetro(){
    return l1+l2+l3+l4;
}

template <class T>
void Cuadrilatero<T>::dibujar(){
    cout<<"Cuadrilatero"<<endl;
}




     


#endif