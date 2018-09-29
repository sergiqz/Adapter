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
    q->drawRect(60,60,3,3);
    ui->base->setPixmap(*pixmap);

}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{



}
