#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include "jugador.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setjugador1(QString nombre, int vidas,int nBarcos);
    void setjugador2(QString nombre, int vidas,int nBarcos);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Jugador *jugador1;
    Jugador *jugador2;

};
#endif // MAINWINDOW_H
