#ifndef CUADRADO_H
#define CUADRADO_H
#include "cuadrilatero.cpp"
#include <math.h>

class Cuadrado : public Cuadrilatero<int>
{
   /* private:
        int b,a;
    public:
        Cuadrado(int base,int altura);
        virtual ~Cuadrado();
        void lados(int *a,size_t);
        int area();
        int perimetro();
        void dibujar();
        */
};
#endif // CUADRADO_H
