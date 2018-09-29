#ifndef CUADRADO_H
#define CUADRADO_H
#include "cuadrilatero.cpp"
#include <math.h>

template <class T>
class Cuadrado : public Cuadrilatero<T>
{
    private:
        T b,a;
    public:
        Cuadrado(T base,T altura);
        virtual ~Cuadrado();
        void lados(T *a,size_t);
        T area();
        T perimetro();
        void dibujar();

};


template <class T>
Cuadrado<T>::Cuadrado(T base,T altura):Cuadrilatero<T>(base,base,altura,altura,180)
{
    b=base;
    a=altura;
}


template <class T>
Cuadrado<T>::~Cuadrado()
{

}


template <class T>
T Cuadrado<T>::area()
{
    return b*a;
}
template <class T>
T Cuadrado<T>::perimetro()
{
    return b+b+a+a;
}
template <class T>
void Cuadrado<T>::dibujar(){
    cout<<"rectangulo"<<endl;
}




#endif//
