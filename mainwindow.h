#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adaptercir.h"
#include "adapterrec.h"
#include <QMainWindow>
#include <QMouseEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
private slots:
    void on_cuadradito_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    adapterrec *adp;
    rectangulo *reg;
    circle *cir;
    adaptercir *adc;
    QPixmap *pixmap;
    QPen *lapiz;
    QPainter *q;
    bool c;


};

#endif // MAINWINDOW_H
