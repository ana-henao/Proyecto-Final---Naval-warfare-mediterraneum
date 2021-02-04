#ifndef PARTIDA_H
#define PARTIDA_H
#include "jugador.h"
#include "disparo.h"
#include <QVector>


class Partida
{
private:
    Jugador *jugador1;
    QVector <Disparo*> disparos1;
    Jugador *jugador2;
    QVector <Disparo*> disparos2;
    int nivel;
    QString nombre;

public:
    Partida(QString nombre,Jugador *jugador1, Jugador *jugador2, int nivel);
    Jugador* getJugador1();
    Jugador* getJugador2();
    QVector <Disparo*> getDisparos1();//vector que obtiene los disparos
    QVector <Disparo*> getDisparos2();
    int getNivel();//obtiene el numero del nivel en el que se esté
    void setDisparos1(QVector <Disparo*> disparos);//se obtienen los disparos
    void setDisparos2(QVector <Disparo*> disparos);
    void set_jugador1(Jugador *jugador1);
    void set_jugador2(Jugador *jugador2);
    void setNivel(int nivel);
    void setNombre(QString nombre);//asigna el nombre de la partida
    QString getNombre();


};

#endif // PARTIDA_H
