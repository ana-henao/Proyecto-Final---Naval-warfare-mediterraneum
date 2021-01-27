#ifndef BALAMRUA_H
#define BALAMRUA_H
#include "bala.h"

class BalaMRUA: public Bala
{
private:
    float a;
public:
    BalaMRUA(float R, float vx, float vy, int x, int y, float a);;
    void movimiento(float t) override;
    void setAceleracion(float a);
    float getAceleracion();


};

#endif // BALAMRUA_H
