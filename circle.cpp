#include "circle.h"

circle::circle(int radio)
{
    r=radio;
}
circle::~circle()
{

}
float circle::area(){
    float a= pi*pow(r,2);
    return a;
}
int circle::perimetro(){
    return 2*pi*r;
}
void circle::draw(){
    cout<<"Circulo"<<endl;
}
point* circle::getpoints(){
    return puntos;
}
