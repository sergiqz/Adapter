#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "cuadrilatero.cpp"
#include <math.h>

template <class T>
class Rectangulo : public Cuadrilatero<T>
{
    private:
        T b,a;
    public:
        Rectangulo(T base=0,T altura=0);
        virtual ~Rectangulo();
        void lados(T *a,size_t);
        T area();
        T perimetro();
        void dibujar();
        void setbase(T _b);
        void setaltura(T _a);
        T getaltura();
        T getbase();
};


template <class T>
Rectangulo<T>::Rectangulo(T base,T altura):Cuadrilatero<T>(base,base,altura,altura,180)
{
    b=base;
    a=altura;
}


template <class T>
Rectangulo<T>::~Rectangulo()
{

}


template <class T>
T Rectangulo<T>::area()
{
    return b*a;
}
template <class T>
T Rectangulo<T>::perimetro()
{
    return b+b+a+a;
}
template <class T>
void Rectangulo<T>::dibujar(){
    cout<<"rectangulo"<<endl;
}

template <class T>
void Rectangulo<T>::setbase(T _b){
    b=_b;
}

template <class T>
void Rectangulo<T>::setaltura(T _a){
    a=_a;
}
template <class T>
T Rectangulo<T>::getaltura(){
    return a;
}
template <class T>
T Rectangulo<T>::getbase(){
    return b;
}





#endif//
