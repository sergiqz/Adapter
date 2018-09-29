#include "adapterrec.h"

adapterrec::adapterrec()
{

}
void adapterrec::draw(rectangulo *rectangulo,QPainter *painter){
    reg=rectangulo;
    point* punt;
    punt=reg->getpoints();
    painter->drawRect(punt->get_x(),punt->get_y(),60,60);
}
