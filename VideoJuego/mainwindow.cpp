#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "muro.h"
#include "humano.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene;
    muro *muro1=new muro(30,400,15,200);
    ui->graphicsView_2->setScene(scene);
    scene->setSceneRect(-350,-200,700,400);//define el tamaño de la escena

    setjugador1("max",3,5);

    scene->addItem(muro1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setjugador1(QString nombre, int vidas, int nBarcos)
{
    this->jugador1=new Humano(nombre,vidas,nBarcos,1);
    cout << jugador1->getBarcos().size()<<endl;
    for (int i=0;i<jugador1->getBarcos().size() ;i++) {
        scene->addItem(jugador1->getBarcos()[i]);
    }

}

void MainWindow::setjugador2(QString nombre, int vidas, int nBarcos)
{
    this->jugador2=new Humano(nombre,vidas,nBarcos,2);
}

