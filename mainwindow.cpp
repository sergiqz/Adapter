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
    //factoryrec::get_instance();

    rectangulo*aux=new rectangulo(10,10);

    factoryrec::get_instance()->set_altura(100);
    aux->setpoints(100,100);
    reg.push_back(aux);

    circle*aux2=new circle(10);
    factorycir::get_instance();
    aux2->setpoints(60,60);
    cir.push_back(aux2);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event){
    if(!c){
        rectangulo*aux1=new rectangulo();
        aux1->set_altura(ui->lado->text().toInt());
        aux1->set_base(ui->bases->text().toInt());
        aux1->setpoints(event->x(),event->y());
        reg.push_back(aux1);
        ui->base->setPixmap(*pixmap);
        adapterrec*tmp3=new adapterrec(aux1);
        tmp3->draw(q);
        adp.push_back(tmp3);

    }
    else{
        circle*aux=new circle();
        aux->set_radio(ui->radio->text().toInt());
        aux->setpoints(event->x(),event->y());
        cir.push_back(aux);
        adaptercir* tmp2=new adaptercir(aux);
        tmp2->draw(q);
        adc.push_back(tmp2);
    }



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


    pixmap->fill();
    int x= ui->lado->text().toInt();
    reg[0]->set_altura(x);
    for (int y = 0; y < adp.size(); y++)
    {
        adp[y]->draw(q);
    }
}







void MainWindow::on_radio_editingFinished()
{
    pixmap->fill();
    int r= ui->radio->text().toInt();
    cir[0]->set_radio(r);
    for (int y = 0; y < adc.size(); y++)
    {
        adc[y]->draw(q);
    }
}



void MainWindow::on_bases_editingFinished()
{
    pixmap->fill();
    int y= ui->bases->text().toInt();
    reg[0]->set_base(y);
    for (int y = 0; y < adp.size(); y++)
    {
        adp[y]->draw(q);
    }
}
