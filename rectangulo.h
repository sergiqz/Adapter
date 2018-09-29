#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "cuadrilatero.h"
using namespace std;

class rectangulo : public cuadrilatero
{
	private:
		int b,h;
	public:
        rectangulo(int _b=30,int _h=30);
        ~rectangulo();
		void draw();
		float area();


		
};
#endif
