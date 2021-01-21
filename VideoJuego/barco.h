#ifndef BARCO_H
#define BARCO_H
#include "balagraf.h"


class Barco
{
private:
    int alto;
    int ancho;
    int x;
    int y;
    float vo;
    float angulo;
    float v0x;
    float v0y;
    Balagraf *bala;


public:
    Barco(int Al, int An, int x, int y, float vo);
    void setAngulo(float a);
    int getAlto();
    int getAncho();
    int getX();
    int getY();
    float getVo();
    float getAngulo();
    Balagraf* dispara();

};

#endif // BARCO_H