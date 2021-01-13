#include "maquina.h"



float Maquina::getRandom(int min, int max)
{

    return qrand() % ((max + 1) - min) + min;

}

Maquina::Maquina(QString nombre, int vidas, int nBarcos): Jugador(nombre, vidas, nBarcos){

    timer=new QTimer();

    timer->start(100);//cada imagen cambia cada 300ms
    //cada x tiempo actuliza, conecta la señal del tiempo con la actualizacion
    //connect(timer,&QTimer::timeout,this,&cuerpo::Actualizacion);
}

void Maquina::disparar_enemy()
{
    //int nBarco=getRandom(1,);
    float angulo=getRandom(0,pi);


}
