#include "adaptercir.h"

adaptercir::adaptercir()
{

}
void adaptercir::draw(circle* circ,QPainter * painter){
    cir=circ;
    cir->get
      painter->drawEllipse(cir->get_x(),cir->get_y(),10,10);
}
