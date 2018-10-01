#include "adaptercir.h"

adaptercir::adaptercir(circle* circ)
{
    cir=circ;
}
void adaptercir::draw(QPainter * painter){
    point* c;
    c=cir->getpoints();
    painter->drawEllipse(c->get_x(),c->get_y(),cir->get_radio(),cir->get_radio());
}
