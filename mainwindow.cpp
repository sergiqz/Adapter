#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    pixmap=new QPixmap(400,300);
    pixmap->fill();


    color.setNamedColor("black");
    lapiz=new QPen(color);

    ui->base->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
    //factoryrec::get_instance();

    rectangulo*aux=new rectangulo();

    factoryrec::get_instance()->set_altura(0);
    aux->setpoints(100,100);
    vecrect.push_back(aux);

    circle*aux2=new circle(0);
    factorycir::get_instance();
    aux2->setpoints(60,60);
    cir.push_back(aux2);
    ui->lado->setDisabled(true);
    ui->bases->setDisabled(true);
    ui->radio->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event){
     ui->base->setPixmap(*pixmap);
    if(!c){
        rectangulo*aux1=new rectangulo();
        aux1->set_altura(altura);
        aux1->set_base(base);
        aux1->setpoints(event->x(),event->y());
        vecrect.push_back(aux1);
        adapterrec*tmp3=new adapterrec(aux1);
        tmp3->draw(q);
        adaprect.push_back(tmp3);

    }
    else{
        circle*aux=new circle();
        aux->set_radio(radio);
        aux->setpoints(event->x(),event->y());
        cir.push_back(aux);
        adaptercir* tmp2=new adaptercir(aux);
        tmp2->draw(q);
        adapcir.push_back(tmp2);
    }
    ui->base->setPixmap(*pixmap);
}
void MainWindow::on_cuadradito_currentIndexChanged(int index)
{

    switch(index)
        {
            case 0:
            ui->lado->setDisabled(true);
            ui->bases->setDisabled(true);
            ui->radio->setDisabled(true);
            break;

            case 1:
            c=0;
            ui->radio->setDisabled(true);
            ui->lado->setDisabled(false);
            ui->bases->setDisabled(false);
            break;

            case 2:
            c=1;
            ui->lado->setDisabled(true);
            ui->bases->setDisabled(true);
            ui->radio->setDisabled(false);
            break;
        }
}
void MainWindow::on_lado_editingFinished()
{
    pixmap->fill();
    altura= ui->lado->text().toInt();
    vecrect[0]->set_altura(altura);
    refresh();

}
void MainWindow::on_radio_editingFinished()
{
    pixmap->fill();
    radio= ui->radio->text().toInt();
    cir[0]->set_radio(radio);
    refresh();
}
void MainWindow::on_bases_editingFinished()
{
    pixmap->fill();
    base= ui->bases->text().toInt();
    vecrect[0]->set_base(base);
    refresh();
}
void MainWindow::refresh(){
    for (int y = 0; y < int(adaprect.size()); y++)
    {
        adaprect[y]->draw(q);
    }
    for (int j=0; j<int(adapcir.size()); j++)
    {
        adapcir[j]->draw(q);
    }

}

void MainWindow::on_colores_currentIndexChanged(int index)
{
    switch (index) {
        case 1:
        color.setNamedColor("red");
        lapiz->setColor(color);
        break;

        case 2:
        color.setNamedColor("green");
        lapiz->setColor(color);
        break;

        default:
        color.setNamedColor("black");
        lapiz->setColor(color);
        break;
    }
    q->setPen(*lapiz);
    refresh();
}
