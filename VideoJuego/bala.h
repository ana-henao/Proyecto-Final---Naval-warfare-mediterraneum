#ifndef BALA_H
#define BALA_H
const double pi=3.141617;
const double G=9.8;
#include <math.h>




using namespace std;

class Bala
{
protected:
    float Radio;
    float x;
    float y;
    float Vx;
    float Vy;


public:
    Bala(float R, float vx, float vy, int x, int y);
    float getX();
    float getY();
    float getVx();
    float getVy();
    float getR();
    virtual void movimiento(float t);
};

#endif // BALA_H
