#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include "muro.h"
#include "jugador.h"
#include <QTimer>
//#include "balagraf.h"


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

public slots:
    void Actualizacion();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Jugador *jugador1 ;
    Jugador *jugador2 ;
    Barcograf *barc1;
    Barcograf *barc2;
    bool iniciar=false;
    bool Parabolic1=true;
    bool Parabolic2=true;
    QTimer *timer;
    float dt_=0.1;
    bool turno=true;//turno jugador1
    Balagraf *bala1;
    Balagraf *bala2;

};
#endif // MAINWINDOW_H
