#ifndef ADAPTER_H
#define ADAPTER_H
#include "rectangulo.cpp"
#include <QPointF>
#include <QPainter>
#include <QColor>
#include <QPixmap>
#include <QPen>
class Adapter
{
private:
    Rectangulo<int> *reg;

    int _x,_y,_width,_heigth;

public:
    Adapter();
    void draw(Rectangulo<int> *regctangulo,QPainter *painter);

};

#endif // ADAPTER_H
