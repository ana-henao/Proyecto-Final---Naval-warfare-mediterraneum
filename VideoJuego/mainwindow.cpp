#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    timer=new QTimer(this);

    ui->setupUi(this);
    scene=new QGraphicsScene;
    muro *muro1=new muro(30,400,15,200);
    ui->graphicsView_2->setScene(scene);
    scene->setSceneRect(-350,-200,700,400);//define el tamaño de la escena

    setjugador1("max",3,5);
    setjugador2("max2",3,5);

    scene->addItem(muro1);
    timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(Actualizacion()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setjugador1(QString nombre, int vidas, int nBarcos)
{
    this->jugador1=new Jugador(nombre,vidas,nBarcos,1);
    cout << jugador1->getBarcos().size()<<endl;
    for (int i=0;i<jugador1->getBarcos().size() ;i++) {
        scene->addItem(jugador1->getBarcos()[i]);
    }

}

void MainWindow::setjugador2(QString nombre, int vidas, int nBarcos)
{
    this->jugador2=new Jugador(nombre,vidas,nBarcos,2);
    for (int i=0;i<jugador1->getBarcos().size() ;i++) {
        int x=jugador2->getBarcos()[i]->getBarco()->getX();
        jugador2->getBarcos()[i]->setX((-1*x));
        scene->addItem(jugador2->getBarcos()[i]);
    }
}

void MainWindow::Actualizacion()
{
    if(turno==true){
        bala1->getBala()->movimiento(dt_);
        float x=bala1->getBala()->getX();
        float y=bala1->getBala()->getY();
        bala1->actualizar(x,y);
        for(int i=0; i<jugador2->getBarcos().size();i++){
            Barcograf *barco=jugador2->getBarcos()[i];
            //if(sqrt(pow((barco->getBarco()->getX() - x),2)+pow((barco->getBarco()->getY() - y),2)) < 0.3){//radio de impacto
              if(barco->getBarco()->getX()<x and (barco->getBarco()->getX()+barco->getBarco()->getAncho())<x
                      /*and barco->getBarco()->getY()>y and (barco->getBarco()->getAlto()+barco->getBarco()->getY())<y*/){
                if(y<0) y=0;
                cout<<"golpeado"<<endl;
                timer->stop();
                //enemigo.impacto();
                 //imprimir impacto
                break;
              }
            //}
        }

    }
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
   if(index>0){
   barc1=jugador1->getBarcos()[index-1];
   }

}

void MainWindow::on_izq1_clicked()
{
    barc1->setX(barc1->getBarco()->getX()-10);
}

void MainWindow::on_down1_clicked()
{
    barc1->setY(barc1->getBarco()->getY()+10);
}

void MainWindow::on_der1_clicked()
{
    barc1->setX(barc1->getBarco()->getX()+10);
}

void MainWindow::on_up1_clicked()
{
    barc1->setY(barc1->getBarco()->getY()-10);
}

void MainWindow::on_izq2_clicked()
{
    barc2->setX(barc2->getBarco()->getX()-10);
}

void MainWindow::on_down2_clicked()
{
    barc2->setY(barc2->getBarco()->getY()+10);
}

void MainWindow::on_der2_clicked()
{
    barc2->setX(barc2->getBarco()->getX()+10);
}

void MainWindow::on_up2_clicked()
{
    barc2->setY(barc2->getBarco()->getY()-10);
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    if(index>0){
    barc2=jugador2->getBarcos()[index-1];
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(iniciar==false){
        iniciar=true;
        ui->up1->setEnabled(false);
        ui->der1->setEnabled(false);
        ui->izq1->setEnabled(false);
        ui->down1->setEnabled(false);
        ui->up2->setEnabled(false);
        ui->der2->setEnabled(false);
        ui->izq2->setEnabled(false);
        ui->down2->setEnabled(false);

    }
    else{
        iniciar=false;
        ui->up1->setEnabled(true);
        ui->der1->setEnabled(true);
        ui->izq1->setEnabled(true);
        ui->down1->setEnabled(true);
        ui->up2->setEnabled(true);
        ui->der2->setEnabled(true);
        ui->izq2->setEnabled(true);
        ui->down2->setEnabled(true);
    }
}

void MainWindow::on_tipo1_currentIndexChanged(int index)
{
    if(index==0){
        Parabolic1=true;
    }else{
        Parabolic1=false;
    }

}

void MainWindow::on_tipo2_currentIndexChanged(int index)
{

    if(index==0){
        Parabolic2=true;
    }else{
        Parabolic2=false;
    }
}

void MainWindow::on_Disparar1_clicked()
{
   timer->start(dt_);
   turno=true;
   bala1=barc1->getBarco()->dispara(400,1.5,-1.2,70,1);
   bala1->setEscala(0.2);
   scene->addItem(bala1);
}

void MainWindow::on_Disparar2_clicked()
{
    timer->start(dt_);
    turno=false;
}
