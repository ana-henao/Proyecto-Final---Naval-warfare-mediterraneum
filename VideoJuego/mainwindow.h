#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include "muro.h"
#include "jugador.h"
#include <QTimer>
#include <QString>
#include "disparo.h"
//#include "balagraf.h"
#include <QVector>
#include "partida.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setjugador1(Jugador* jugador);
    void setjugador2(Jugador* jugador);
    void setNivel(int nivel, Partida* partida);


private slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_izq1_clicked();
    void on_down1_clicked();
    void on_der1_clicked();
    void on_up1_clicked();
    void on_izq2_clicked();
    void on_down2_clicked();
    void on_der2_clicked();
    void on_up2_clicked();
    void on_comboBox_2_currentIndexChanged(int index);
    void on_pushButton_clicked();//iniciar
    void on_tipo1_currentIndexChanged(int index);
    void on_tipo2_currentIndexChanged(int index);
    void on_Disparar1_clicked();
    void on_Disparar2_clicked();
    void on_reiniciarP_clicked();
    void on_guardarP_clicked();
    void on_eliminarP_clicked();
    void on_cargarP_clicked();
    void on_nuevaP_clicked();
    void on_pushButton_2_clicked();

    void on_cargar_currentIndexChanged(int index);

    void on_eliminar_currentIndexChanged(int index);

public slots:
    void Actualizacion();
    void Actualizacion_circ();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsScene *scene1;
    QGraphicsScene *scene2;
    Jugador *jugador1 ;
    Jugador *jugador2 ;
    Barcograf *barc1;
    Barcograf *barc2;
    bool iniciar=false;
    bool Parabolic1=true;
    bool Parabolic2=true;
    QTimer *timer;
    QTimer *timerc;
    float dt_=0.1;
    bool turno=true;//turno jugador1
    Balagraf *bala1;
    Balagraf *bala2;
    Balagraf *balacirc1;
    Balagraf *balacirc2;
    QVector <Disparo*> disparos1;
    QVector <Disparo*> disparos2;
    int ancho=700;
    int alto=400;
    int cambiar_nivel=0;
    int nivel=1;
    bool menu=false;
    QVector <Partida*> partidas;
    Partida *partida_actual;
    int elim=0;
    int carg=0;



};
#endif // MAINWINDOW_H
