#ifndef MAQUINA_H
#define MAQUINA_H
#include "jugador.h"
#define pi 3.141617

#include<QTimer>

class Maquina: public Jugador
{
private:
    QTimer *timer;
    float getRandom(int min, int max);

public:
    Maquina(QString nombre, int vidas,int nBarcos);;
    void disparar_enemy();
};

#endif // MAQUINA_H
