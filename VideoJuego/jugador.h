#ifndef JUGADOR_H
#define JUGADOR_H
#include<QString>

class Jugador
{
private:
    QString nombre;
    int vidas;
    //QVector<Barco *> barcos;
public:
    Jugador(QString nombre, int vidas,int nBarcos);
    QString getNombre();
    int getVidas();
    //QVector<Barcos*> getBarcos();
    void impacto();
};

#endif // JUGADOR_H
