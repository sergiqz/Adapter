#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H
#include "forma.cpp"
#include <cmath>

template <class T>
class Circunferencia : public Forma<T>
{

	private:
		T r;
        float const pi=3.1416;

    public:

        Circunferencia(T radio);
        virtual ~Circunferencia();
        T area();
    	T perimetro();
    	void dibujar();   
};

template <class T>
Circunferencia<T>::Circunferencia(T radio){
    r=radio;
}
template <class T>
Circunferencia<T>::~Circunferencia()
{

}






template <class T>
T Circunferencia<T>::area(){
	float a= pi*pow(r,2);
	return a;
}


template <class T>
T Circunferencia<T>::perimetro(){
	return 2*pi*r;
}

template <class T>
void Circunferencia<T>::dibujar(){
	cout<<"Circulo"<<endl;
}

#endif
