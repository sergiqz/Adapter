#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "shape.h"
#include "point.h"
using namespace std;
class circle
{
private:
    int r;
    double const pi=3.1416;
    point* puntos;

public:

    circle(int radio=5);
    ~circle();
    void draw();
    float area();
    int perimetro();
    point *getpoints();
};

#endif // CIRCLE_H
