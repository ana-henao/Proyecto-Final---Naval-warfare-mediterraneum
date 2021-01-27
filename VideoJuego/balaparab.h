#ifndef BALAPARAB_H
#define BALAPARAB_H
#include "bala.h"


class BalaParab: public Bala
{
private:
    float angulo;
    float vo;
    float t=0;

public:
    BalaParab(float R, float vx, float vy, int x, int y, float angulo);;
    void movimiento(float t) override;
    void setAngulo(float an);
    float getAngulo();
    void setVo(float vo);

};

#endif // BALAPARAB_H
