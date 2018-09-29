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
        Rectangulo(T base,T altura);
        virtual ~Rectangulo();
        void lados(T *a,size_t);
        T area();
        T perimetro();
        void dibujar();
    
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




#endif//
