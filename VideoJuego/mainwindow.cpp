#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    timer=new QTimer(this);
    //timerc=new QTimer(this);

    ui->setupUi(this);
    this->jugador1=new Jugador("Jugador 1",5,5,1);
    this->jugador2=new Jugador("Jugador 2",5,5,2);

    partida_actual=new Partida("default", this->jugador1,this->jugador2,1);
    setNivel(nivel, partida_actual);
    ui->nuevaP->setEnabled(false);
    ui->eliminarP->setEnabled(false);
    ui->cargarP->setEnabled(false);
    ui->guardarP->setEnabled(false);
    ui->reiniciarP->setEnabled(false);
    ui->pushButton->setEnabled(true);
    timer->stop();
    //timerc->stop();

    connect(timer,SIGNAL(timeout()),this,SLOT(Actualizacion()));
    //connect(timerc,SIGNAL(timeout()),this,SLOT(Actualizacion_circ()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::setjugador1(Jugador *jugador1)
{

    disparos1.clear();
    barc1=NULL;
    for (int i=0;i<jugador1->getBarcos().size() ;i++) {
        scene->addItem(jugador1->getBarcos()[i]);
    }
    for (int i=0;i<jugador1->getDisparos() ;i++ ) {
        Disparo *dis=new Disparo(15,43,-90+(i*20),0);
        disparos1.append(dis);
        scene1->addItem(dis);
    }
   ui->comboBox->addItems(jugador1->getNombresBarcos());

   }

void MainWindow::setjugador2(Jugador *jugador2)
{
    disparos2.clear();
    barc2=NULL;
    for (int i=0;i<jugador2->getBarcos().size() ;i++) {
        int x=jugador2->getBarcos()[i]->getBarco()->getX();
        jugador2->getBarcos()[i]->setX((-1*x));
        scene->addItem(jugador2->getBarcos()[i]);
    }
    for (int i=0;i<jugador2->getDisparos() ;i++ ) {
        Disparo *dis=new Disparo(15,43,-90+(i*20),0);
        disparos2.append(dis);
        scene2->addItem(dis);
    }
    ui->comboBox_2->addItems(jugador2->getNombresBarcos());
}

void MainWindow::setNivel(int nivel, Partida *partida)
{
    scene=new QGraphicsScene;
    scene1=new QGraphicsScene;
    scene2=new QGraphicsScene;
    ui->graphicsView_2->setScene(scene);
    ui->disparos1->setScene(scene1);
    ui->disparos2->setScene(scene2);
    scene->setSceneRect(-ancho/2,-alto/2,ancho,alto);//define el tamaño de la escena
    scene1->setSceneRect(-90,-20,180,40);
    scene2->setSceneRect(-90,-20,180,40);

    muro *muro1=new muro(30,400,15,200);
    scene->addItem(muro1);
    ui->comboBox->clear();
    ui->comboBox->addItem("Seleccione Barco");
    ui->comboBox_2->clear();
    ui->comboBox_2->addItem("Seleccione Barco");
    ui->Disparar1->setEnabled(false);
    ui->Disparar2->setEnabled(false);

    if(nivel==1){
        ui->nivel->setText("Nivel 1");
        this->jugador1=new Jugador("Jugador 1",5,5,1);
        this->jugador2=new Jugador("Jugador 2",5,5,2);
        this->partida_actual->set_jugador1(this->jugador1);
        this->partida_actual->set_jugador2(this->jugador2);
        int j1=this->jugador1->getPuntaje();
        ui->puntaje1->setText(QString::number(j1));
        ui->puntaje2->setText(QString::number(this->jugador2->getPuntaje()));
        setjugador1(this->jugador1);
        setjugador2(this->jugador2);
        this->partida_actual->setDisparos1(this->disparos1);
        this->partida_actual->setDisparos2(this->disparos2);
        this->partida_actual->setNivel(1);
    }else if(nivel==2){
        ui->nivel->setText("Nivel 2");
        this->jugador1=new Jugador("Jugador 1",4,4,1);
        this->jugador2=new Jugador("Jugador 2",4,4,2);
        this->partida_actual->set_jugador1(this->jugador1);
        this->partida_actual->set_jugador2(this->jugador2);

        int j1=this->jugador1->getPuntaje();
        ui->puntaje1->setText(QString::number(j1));
        ui->puntaje2->setText(QString::number(this->jugador2->getPuntaje()));

        setjugador1(this->jugador1);
        setjugador2(this->jugador2);
        this->partida_actual->setDisparos1(this->disparos1);
        this->partida_actual->setDisparos2(this->disparos2);
        this->partida_actual->setNivel(2);

    }else{

        ui->nivel->setText("Nivel 3");
        this->jugador1=new Jugador("Jugador 1",3,3,1);
        this->jugador2=new Jugador("Jugador 2",3,3,2);
        this->partida_actual->set_jugador1(this->jugador1);
        this->partida_actual->set_jugador2(this->jugador2);

        int j1=this->jugador1->getPuntaje();
        ui->puntaje1->setText(QString::number(j1));
        ui->puntaje2->setText(QString::number(this->jugador2->getPuntaje()));

        setjugador1(this->jugador1);
        setjugador2(this->jugador2);
        this->partida_actual->setDisparos1(this->disparos1);
        this->partida_actual->setDisparos2(this->disparos2);
        this->partida_actual->setNivel(3);
            }
}

void MainWindow::Actualizacion()
{
//    balacirc1->getBala()->movimiento(dt_);

//    float x=balacirc1->getBala()->getX();
//    float y=balacirc1->getBala()->getY();
//    //cout <<"X "<<x<<endl;
//    //cout <<"Y "<<y<<endl;
//    balacirc1->actualizar(x+barc1->getBarco()->getX(),-y+barc1->getBarco()->getY());

    if(turno==true){

        bala1->getBala()->movimiento(dt_);
        float x=bala1->getBala()->getX();
        float y=bala1->getBala()->getY();
        float xcorrect=0;
        float ycorrect=0;

            if(barc1->getBarco()->getY()<0){
                bala1->actualizar(x+barc1->getBarco()->getX()+barc1->getBarco()->getAncho()/2,-y+barc1->getBarco()->getY());

            }else{
                bala1->actualizar(x+barc1->getBarco()->getX()+barc1->getBarco()->getAncho()/2,-y+barc1->getBarco()->getY());

            }

        xcorrect=bala1->getX();
        ycorrect=bala1->getY();
        //cout <<"ycorrect"<<ycorrect<<endl;
        //cout <<"xcorrect"<<xcorrect<<endl;
        for(int i=0; i<jugador2->getBarcos().size();i++){
            Barcograf *barco=jugador2->getBarcos()[i];

            //cout<<"ybarco "<<barco->getBarco()->getY()<<endl;
            //cout<<"xbarco: "<<barco->getBarco()->getX()<<endl;

            if(barc1->getBarco()->getY()<0){

                if(xcorrect>0 and xcorrect>=barco->getBarco()->getX() and (barco->getBarco()->getY()-ycorrect)<5
                        and xcorrect<(barco->getBarco()->getAncho()+barco->getBarco()->getX())
                        and ycorrect<(barco->getBarco()->getAlto())+barco->getBarco()->getY()and ycorrect>=(barco->getBarco()->getY())){

                    jugador1->setPuntaje(barco->getBarco()->getPuntaje());
                    ui->puntaje1->setText(QString::number(jugador1->getPuntaje()));
                    //cout<<jugador1->getPuntaje()<<endl;
                    if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                        nivel++;
                        setNivel(nivel,partida_actual);
                    }
                    timer->stop();
                    break;

                }
            }else{
                if(xcorrect>0 and xcorrect>barco->getBarco()->getX() and xcorrect<(barco->getBarco()->getAncho()/4+barco->getBarco()->getX())
                        and ycorrect>=(barco->getBarco()->getY()) and ycorrect<(barco->getBarco()->getY()+barco->getBarco()->getAlto())){
                    jugador1->setPuntaje(barco->getBarco()->getPuntaje());
                    ui->puntaje1->setText(QString::number(jugador1->getPuntaje()));
                    //cout<<jugador1->getPuntaje()<<endl;
                    if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                        nivel++;
                        setNivel(nivel,partida_actual);
                    }
                    timer->stop();
                    break;
                  }
            }
            if(Parabolic1==false){


                if(xcorrect>0 and xcorrect>barco->getBarco()->getX() and xcorrect<(barco->getBarco()->getAncho()/4+barco->getBarco()->getX())
                        and ycorrect>=(barco->getBarco()->getY()) and ycorrect<(barco->getBarco()->getY()+barco->getBarco()->getAlto())){
                    jugador1->setPuntaje(barco->getBarco()->getPuntaje());
                    ui->puntaje1->setText(QString::number(jugador1->getPuntaje()));
                    //cout<<jugador1->getPuntaje()<<endl;
                    if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                        nivel++;
                        setNivel(nivel ,partida_actual);
                    }
                    timer->stop();
                    break;
                }
            }
           if(bala1->getX()>ancho/2 or bala1->getY()>alto/2){
               scene->removeItem(bala1);

               //cout <<"activado: "<<endl;
               if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                   nivel++;
                   setNivel(nivel,partida_actual);
               }
               timer->stop();
               break;
           }

        }

    }else{
        float x=0;

        if(Parabolic2==true){
            bala2->getBala()->movimiento(dt_);
            x=bala2->getBala()->getX();
        }else{
            bala2->getBala()->movimiento(-dt_);
            x=-bala2->getBala()->getX();
        }

        float y=bala2->getBala()->getY();
        float xcorrect=0;
        float ycorrect=0;

            if(barc2->getBarco()->getY()<0){
                bala2->actualizar(x+barc2->getBarco()->getX()+barc2->getBarco()->getAncho()/2,-y+barc2->getBarco()->getY());

            }else{
                bala2->actualizar(x+barc2->getBarco()->getX()+barc2->getBarco()->getAncho()/2,-y+barc2->getBarco()->getY());

            }

        xcorrect=bala2->getX();
        ycorrect=bala2->getY();
        //cout <<"ycorrect"<<ycorrect<<endl;
        cout <<"xcorrect"<<xcorrect<<endl;
        for(int i=0; i<jugador1->getBarcos().size();i++){
            Barcograf *barco=jugador1->getBarcos()[i];

            //cout<<"ybarco "<<barco->getBarco()->getY()<<endl;
            cout<<"xbarco: "<<barco->getBarco()->getX()<<endl;

            if(barc2->getBarco()->getY()<0){

                if(xcorrect<0 and xcorrect<barco->getBarco()->getX() and (barco->getBarco()->getY()-ycorrect)<5
                        and xcorrect<(barco->getBarco()->getAncho()+barco->getBarco()->getX())
                        and ycorrect<(barco->getBarco()->getAlto())-barco->getBarco()->getY()){

                    jugador2->setPuntaje(barco->getBarco()->getPuntaje());
                    ui->puntaje2->setText(QString::number(jugador2->getPuntaje()));
                    //cout<<jugador1->getPuntaje()<<endl;
                    if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                        nivel++;
                        setNivel(nivel,partida_actual);
                    }
                    timer->stop();
                    break;

                }
            }else{
                if(xcorrect<0 and xcorrect<barco->getBarco()->getX() and (-barco->getBarco()->getY()+ycorrect)<5
                        and xcorrect<(barco->getBarco()->getAncho()+barco->getBarco()->getX())
                        and ycorrect>(barco->getBarco()->getY())){
                    jugador2->setPuntaje(barco->getBarco()->getPuntaje());
                    ui->puntaje2->setText(QString::number(jugador2->getPuntaje()));
                    //cout<<jugador1->getPuntaje()<<endl;
                    if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                        nivel++;
                        setNivel(nivel,partida_actual);
                    }
                    timer->stop();
                    break;
                  }
            }
            if(Parabolic2==false){
                if(xcorrect<0 and xcorrect>barco->getBarco()->getX() and xcorrect<(barco->getBarco()->getAncho()/4+barco->getBarco()->getX())
                        and ycorrect>=(barco->getBarco()->getY()) and ycorrect<(barco->getBarco()->getY()+barco->getBarco()->getAlto())){
                    jugador2->setPuntaje(barco->getBarco()->getPuntaje());
                    ui->puntaje2->setText(QString::number(jugador2->getPuntaje()));
                    //cout<<jugador1->getPuntaje()<<endl;
                    if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                        nivel++;
                        setNivel(nivel,partida_actual);
                    }
                    timer->stop();
                    break;
                }
            }
           if(bala2->getX()<-ancho/2 or bala2->getY()>alto/2){
               scene->removeItem(bala2);

               if(jugador1->getDisparos()<1 and jugador2->getDisparos()<1){
                   nivel++;
                   setNivel(nivel,partida_actual);
               }
               //cout <<"activado: "<<endl;
               timer->stop();
               break;
           }

        }

    }

}

void MainWindow::Actualizacion_circ()
{
    balacirc1->getBala()->movimiento(dt_);
    balacirc1->actualizar(balacirc1->getBala()->getX(),balacirc1->getBala()->getY());
    cout << "circ: " << endl;
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
   if(index>0){
   barc1=jugador1->getBarcos()[index-1];
   }

}

void MainWindow::on_izq1_clicked()
{
    if(barc1!=NULL and (barc1->getBarco()->getX()-10+barc1->getBarco()->getAncho())>-ancho/2){
        barc1->setX(barc1->getBarco()->getX()-10);
    }
}

void MainWindow::on_down1_clicked()
{
    if(barc1!=NULL and (barc1->getBarco()->getY()+(barc1->getBarco()->getAlto()/2)+10)<alto/2){
        barc1->setY(barc1->getBarco()->getY()+10);
    }
}

void MainWindow::on_der1_clicked()
{
    if(barc1!=NULL and (barc1->getBarco()->getX()+barc1->getBarco()->getAncho()+10)< 0){
        barc1->setX(barc1->getBarco()->getX()+10);
    }
}

void MainWindow::on_up1_clicked()
{
    if(barc1!=NULL and (barc1->getBarco()->getY()-10-(barc1->getBarco()->getAlto()/2))>-alto/2){
        barc1->setY(barc1->getBarco()->getY()-10);
    }
}

void MainWindow::on_izq2_clicked()
{
    if(barc2!=NULL and (barc2->getBarco()->getX()-barc2->getBarco()->getAncho()-10)> 0){
        barc2->setX(barc2->getBarco()->getX()-10);
    }
}

void MainWindow::on_down2_clicked()
{
    if(barc2!=NULL and (barc2->getBarco()->getY()+(barc2->getBarco()->getAlto()/2)+10)<alto/2){
        barc2->setY(barc2->getBarco()->getY()+10);
    }
}

void MainWindow::on_der2_clicked()
{
    if(barc2!=NULL and (barc2->getBarco()->getX()+10-barc2->getBarco()->getAncho())<ancho/2){
        barc2->setX(barc2->getBarco()->getX()+10);
    }
}

void MainWindow::on_up2_clicked()
{
    if(barc2!=NULL and (barc2->getBarco()->getY()-10-(barc2->getBarco()->getAlto()/2))>-alto/2){
        barc2->setY(barc2->getBarco()->getY()-10);
    }
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
        ui->Disparar1->setEnabled(true);
        ui->Disparar2->setEnabled(true);

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
        ui->Disparar1->setEnabled(false);
        ui->Disparar2->setEnabled(false);
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
   float angulo1=ui->angulo1->value();
   turno=true;
   if(jugador1->getDisparos()>0){
       if(Parabolic1==true){
        bala1=barc1->getBarco()->dispara(400,1.5,-1.2,angulo1,1);
       }else{
           bala1=barc1->getBarco()->dispara(400,1.5,-1.2,angulo1,3);
       }

       jugador1->Quitar_disparo();

       scene1->removeItem(disparos1[jugador1->getDisparos()]);
       //cout<<"cantidad de disparos: "<<jugador1->getDisparos()<<endl;
       bala1->setEscala(0.2);
       scene->addItem(bala1);
       }
   //balacirc1= jugador1->getBarcos()[3]->getBarco()->dispara(400,1.6,-1.2,800000,2);
   //scene->addItem(balacirc1);


}

void MainWindow::on_Disparar2_clicked()
{
    timer->start(dt_);
    float angulo2=ui->angulo2->value();
    turno=false;
    if(jugador2->getDisparos()>0){
        if(Parabolic2==true){
         bala2=barc2->getBarco()->dispara(400,1.5,-1.2,angulo2,1);
        }else{
            bala2=barc2->getBarco()->dispara(400,1.5,-1.2,angulo2,3);
        }

        jugador2->Quitar_disparo();

        scene2->removeItem(disparos2[jugador2->getDisparos()]);
        //cout<<"cantidad de disparos: "<<jugador1->getDisparos()<<endl;
        bala2->setEscala(0.2);
        scene->addItem(bala2);
        }
}

void MainWindow::on_reiniciarP_clicked()
{
    this->jugador1=new Jugador("Jugador 1",5,5,1);
    this->jugador2=new Jugador("Jugador 2",5,5,2);

    partida_actual=new Partida("default", this->jugador1,this->jugador2,nivel);

    setNivel(nivel,partida_actual);
}

void MainWindow::on_guardarP_clicked()
{
    QString nombre=ui->nombrepartida->text();
    partida_actual->setNombre(nombre);
    ui->cargar->addItem(partida_actual->getNombre());
    ui->eliminar->addItem(partida_actual->getNombre());
    partidas.append(partida_actual);
}

void MainWindow::on_eliminarP_clicked()
{
   partidas.removeAt(this->elim);
   ui->eliminar->clear();
   for (int i=0; i<partidas.size();i++ ) {
    ui->eliminar->addItem(partidas[i]->getNombre());
   }

}

void MainWindow::on_cargarP_clicked()
{
    scene=new QGraphicsScene;
    scene1=new QGraphicsScene;
    scene2=new QGraphicsScene;
    ui->graphicsView_2->setScene(scene);
    ui->disparos1->setScene(scene1);
    ui->disparos2->setScene(scene2);
    scene->setSceneRect(-ancho/2,-alto/2,ancho,alto);//define el tamaño de la escena
    scene1->setSceneRect(-90,-20,180,40);
    scene2->setSceneRect(-90,-20,180,40);

    muro *muro1=new muro(30,400,15,200);
    scene->addItem(muro1);
    ui->comboBox->clear();
    ui->comboBox->addItem("Seleccione Barco");
    ui->comboBox_2->clear();
    ui->comboBox_2->addItem("Seleccione Barco");
    ui->Disparar1->setEnabled(false);
    ui->Disparar2->setEnabled(false);
    partida_actual=partidas[this->carg];
    this->jugador1=partida_actual->getJugador1();
    this->jugador2=partida_actual->getJugador2();
    setjugador1(this->jugador1);
    setjugador2(this->jugador2);
    ui->puntaje1->setText(QString::number(jugador1->getPuntaje()));
    ui->puntaje2->setText(QString::number(jugador2->getPuntaje()));

}

void MainWindow::on_nuevaP_clicked()
{
    this->jugador1=new Jugador("Jugador 1",5,5,1);
    this->jugador2=new Jugador("Jugador 2",5,5,2);
    partida_actual=new Partida("default", this->jugador1,this->jugador2,1);

    setNivel(1,partida_actual);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(menu==false){
        ui->nuevaP->setEnabled(false);
        ui->eliminarP->setEnabled(false);
        ui->cargarP->setEnabled(false);
        ui->guardarP->setEnabled(false);
        ui->reiniciarP->setEnabled(false);
        ui->pushButton->setEnabled(true);
        menu=true;
    }else{
        ui->nuevaP->setEnabled(true);
        ui->eliminarP->setEnabled(true);
        ui->cargarP->setEnabled(true);
        ui->guardarP->setEnabled(true);
        ui->reiniciarP->setEnabled(true);
        ui->pushButton->setEnabled(false);
        menu=false;
    }
}

void MainWindow::on_cargar_currentIndexChanged(int index)
{
    this->carg=index-1;
}

void MainWindow::on_eliminar_currentIndexChanged(int index)
{
    this->elim=index-1;
}
