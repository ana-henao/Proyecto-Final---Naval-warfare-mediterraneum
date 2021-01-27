#ifndef BALACIRC_H
#define BALACIRC_H
#include "bala.h"

class BalaCirc: public Bala
{
private:

    float Masa;

public:
    BalaCirc(float R, float vx, float vy, int x, int y, float masa);;
    void movimiento(float t) override;
    void setMasa(float Masa);
    float getMasa();

};

#endif // BALACIRC_H
