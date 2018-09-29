#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adapter.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_cuadradito_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    Adapter *adp;
    Rectangulo<int> *reg;
    QPixmap *pixmap;
    QPen *lapiz;
    QPainter *q;


};

#endif // MAINWINDOW_H
