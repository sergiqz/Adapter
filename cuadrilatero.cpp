#include "cuadrilatero.h"
#include <cmath>
cuadrilatero::cuadrilatero(int _an,int _l1,int _l2,int _l3,int _l4)
{
	an=_an;
	l1=_l1;
	l2=_l2;
	l3=_l3;
	l4=_l4;
    puntos=new point();
}
cuadrilatero::~cuadrilatero()
{

}
void cuadrilatero::draw()
{
	cout<< "cuadrilatero"<<endl;
}
int cuadrilatero::perimetro()
{
	return l1+l2+l3+l4;
}
float cuadrilatero::area()
{
	int s=perimetro()/2;
    float A= pow((s-l1)*(s-l2)*(s-l3)*(s-l4)-l1*l2*l3*l4*(pow((cos(an/2)*3.1416/180),2)),0.5);
	return A;
}
point* cuadrilatero::getpoints(){
    return puntos;
}
void cuadrilatero::setpoints(int x, int y){
    puntos->set_x_y(x,y);
}
