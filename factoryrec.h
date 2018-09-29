#ifndef FACTORYREC_H
#define FACTORYREC_H
#include "rectangulo.h"
class factoryrec
{
private:
    int lado;
    string color;
    factoryrec();
public:
    static factoryrec* instance;
    static factoryrec* get_instance();
    void set_lado(int _lado);
    int get_lados();
    void set_color(string _color);
    string get_color();


};

#endif // FACTORYREC_H
