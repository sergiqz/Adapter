#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "cuadrilatero.h"
#include "factoryrec.h"
using namespace std;

class rectangulo : public cuadrilatero
{
	private:
        factoryrec *fac;
	public:
        rectangulo(int _base=10,int _altura=10);
        ~rectangulo();
		void draw();
		float area();
        void set_base(int _b);
        void set_altura(int _h);
        int get_base();
        int get_altura();

		
};
#endif
