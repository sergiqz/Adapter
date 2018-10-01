#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adaptercir.h"
#include "adapterrec.h"
#include <QMainWindow>
#include <QMouseEvent>
#include <vector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
private slots:
    void on_cuadradito_currentIndexChanged(int index);

    void on_lado_editingFinished();

    void on_radio_editingFinished();


    void on_bases_editingFinished();

private:
    Ui::MainWindow *ui;
    adapterrec *adp;
    vector<rectangulo*>reg;
    vector<circle*>cir;
    adaptercir *adc;
    QPixmap *pixmap;
    QPen *lapiz;
    QPainter *q;
    bool c;
    int x,y;

};

#endif // MAINWINDOW_H
