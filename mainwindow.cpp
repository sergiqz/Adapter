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
    reg = new Rectangulo<int>();
    adp= new Adapter();

}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_cuadradito_currentIndexChanged(int index)
{
    switch(ui->cuadradito->currentIndex())
        {
            case 1:reg->setbase(200);
            reg->setaltura(200);
            adp->draw(reg,q);
        }
    ui->base->setPixmap(*pixmap);

}
