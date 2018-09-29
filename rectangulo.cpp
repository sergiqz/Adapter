#include "rectangulo.h"
rectangulo::rectangulo(int _b,int _h):cuadrilatero(180,_b,_b,_h,_h){
	b=_b;
	h=_h;
}
rectangulo::~rectangulo(){

}
void rectangulo::draw(){
	cout<<"rectangulo"<<endl;
}
float rectangulo::area(){
	return b*h;
}
void rectangulo::set_lados(int _b,int _h){
    b=_b;
    h=_h;
}
int rectangulo::get_base(){
    return b;
}
int rectangulo::get_altura(){
    return h;
}
