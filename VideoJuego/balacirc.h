#ifndef BALACIRC_H
#define BALACIRC_H
#include "bala.h"


class BalaCirc: public Bala
{
private:

    float Masa;
    float t=0;
    float xcentral;
    float ycentral;
    float G=6.67384*pow(10,-11);

public:
    BalaCirc(float R, float vx, float vy, int x, int y, float masa);;
    void movimiento(float t) override;
    void setMasa(float Masa);
    float getMasa();
    void setXcentral(float xcentral);
    void setYcentral(float ycentral);


};

#endif // BALACIRC_H
