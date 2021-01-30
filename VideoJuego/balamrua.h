#ifndef BALAMRUA_H
#define BALAMRUA_H
#include "bala.h"

class BalaMRUA: public Bala
{
private:
    float a;
    float angulo;
    float vo;
    float t=0;
    float G=50;//6.67384*pow(10,-11);
public:
    BalaMRUA(float R, float vx, float vy, int x, int y, float a);;
    void movimiento(float t) override;
    void setAceleracion(float a);
    float getAceleracion();
    void setVo(float vo);


};

#endif // BALAMRUA_H
