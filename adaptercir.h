#ifndef ADAPTERCIR_H
#define ADAPTERCIR_H
#include <QPainter>
#include "circle.h"
#include <QColor>
#include <QPixmap>
#include <QPen>

class adaptercir
{
private:
    circle* cir;
public:
    adaptercir();
    void draw(circle* circ, QPainter * painter);
};

#endif // ADAPTERCIR_H
