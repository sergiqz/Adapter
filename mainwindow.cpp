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
    rectangulo*aux=new rectangulo(10,10);
    aux->setpoints(60,60);
    reg.push_back(aux);
    circle*aux2=new circle(10);
    aux2->setpoints(60,60);
    cir.push_back(aux2);
    //cuadri->draw(q);
   // q->drawRect(60,60,3,3);
   // ui->base->setPixmap(*pixmap);
    reg= new rectangulo(30,30);
    adp= new adapterrec(reg);
    cir= new circle(60);
    adc= new adaptercir(cir);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event){
    if(!c){
        rectangulo*aux=new rectangulo();
        aux->set_altura(ui->lado->text().toInt());
        aux->set_base(ui->bases->text().toInt());
        aux->setpoints(event->x(),event->y());
        reg.push_back(aux);
        cout<<"asdasdasd"<<endl;
        adp->draw(q);
        cout<<"asdasdasd2"<<endl;}
    else{
        circle*aux=new circle(ui->radio->text().toInt());
        aux->setpoints(event->x(),event->y());
        cir.push_back(aux);
        adc->draw(q);}
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

    reg[0]->set_altura(x);

}







void MainWindow::on_radio_editingFinished()
{
    int r= ui->radio->text().toInt();
    cir[0]->set_radio(r);
}



void MainWindow::on_bases_editingFinished()
{
    int y= ui->bases->text().toInt();
    reg[0]->set_base(y);
}
