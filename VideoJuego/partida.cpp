#include "partida.h"




Partida::Partida(QString nombre, Jugador *jugador1, Jugador *jugador2, int nivel)
{
    this->jugador1=jugador1;
    this->jugador2=jugador2;
    this->nivel=nivel;
    this->nombre=nombre;
}

Jugador *Partida::getJugador1()
{
    return jugador1;
}

Jugador *Partida::getJugador2()
{
    return jugador2;
}

QVector<Disparo *> Partida::getDisparos1()
{
    return disparos1;
}

QVector<Disparo *> Partida::getDisparos2()
{
    return disparos2;
}

int Partida::getNivel()
{
    return nivel;
}

void Partida::setDisparos1(QVector<Disparo *> disparos)
{
    this->disparos1=disparos;
}

void Partida::setDisparos2(QVector<Disparo *> disparos)
{
    this->disparos2=disparos;
}

void Partida::set_jugador1(Jugador *jugador1)
{
    this->jugador1=jugador1;
}

void Partida::set_jugador2(Jugador *jugador2)
{
    this->jugador2=jugador2;
}

void Partida::setNivel(int nivel)
{
    this->nivel=nivel;
}

void Partida::setNombre(QString nombre)
{
    this->nombre=nombre;
}

QString Partida::getNombre()
{
    return nombre;
}
