#include "adapter.h"

Adapter::Adapter()
{



}
void Adapter::draw(Rectangulo<int> *regctangulo,QPainter *painter){
    reg=regctangulo;

    painter->drawRect(reg->getaltura(),reg->getbase(),3,3);
}
