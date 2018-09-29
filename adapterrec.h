#ifndef ADAPTERREC_H
#define ADAPTERREC_H
#include "rectangulo.h"
#include <QPointF>
#include <QPainter>
#include <QColor>
#include <QPixmap>
#include <QPen>

class adapterrec
{
    rectangulo *reg;

public:
    adapterrec();
    void draw(rectangulo *rectangulo,QPainter *painter);

};

#endif // ADAPTERREC_H
