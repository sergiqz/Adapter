#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    pixmap=new QPixmap(400,300);
    pixmap->fill();


    QColor color("black");
    lapiz=new QPen(color);


    ui->base->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
    //cuadri->draw(q);
   // q->drawRect(60,60,3,3);
   // ui->base->setPixmap(*pixmap);
    reg= new rectangulo(reg->get_base(),reg->get_altura());
    adp= new adapterrec(reg);
    cir= new circle(60);
    adc= new adaptercir();
}

MainWindow::~MainWindow()
{

    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event){
    cir->setpoints(event->x(),event->y());
    reg->setpoints(event->x(),event->y());
    if(!c)
        adp->draw(q);
    else
        adc->draw(cir,q);
    ui->base->setPixmap(*pixmap);
}


void MainWindow::on_cuadradito_currentIndexChanged(int index)
{
    switch(index)
        {
            case 1:
            c=0;
            break;
            case 2:
            c=1;
            break;
        }


}

void MainWindow::on_lado_editingFinished()
{

    int x= ui->lado->text().toInt();
    reg->set_lado(x);

}







void MainWindow::on_radio_editingFinished()
{
    int r= ui->radio->text().toInt();
   // cir->set_radio(r);
}



void MainWindow::on_bases_editingFinished()
{
    int y= ui->bases->text().toInt();
    reg->set_base(y);
}
