#ifndef CUADRILATERO_H
#define CUADRILATERO_H

#include <iostream>
#include "shape.h"
#include "point.h"
using namespace std;

class cuadrilatero : public shape
{
	private:
		int l1,l2,l3,l4,an;
        point * puntos;
	public:
        cuadrilatero(int _an=0,int _l1=0,int _l2=0,int _l3=0,int _l4=0);
        ~cuadrilatero();
		void draw();
        float area();
		int perimetro();
        point *getpoints();
        void setpoints(int x, int y);
		
};
#endif
