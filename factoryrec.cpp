#include "factoryrec.h"
factoryrec* factoryrec::instance=nullptr;
factoryrec::factoryrec()
{
    lado=10;
    color="black";
}

factoryrec* factoryrec::get_instance(){
    if(instance==nullptr){
        instance=new factoryrec();
    }
    return instance;

}

void factoryrec::set_lado(int _lado){
    lado=_lado;
}

int factoryrec::get_lados(){
    return lado;
}

void factoryrec::set_color(string _color){
    color=_color;
}

string factoryrec::get_color(){
    return color;
}
