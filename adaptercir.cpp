#include "adaptercir.h"

adaptercir::adaptercir()
{

}
void adaptercir::draw(circle* circ,QPainter * painter){
    cir=circ;
    point* c;
    c=cir->getpoints();
    painter->drawEllipse(c->get_x(),c->get_y(),60,60);
}
