#ifndef BALA_H
#define BALA_H
const double pi=3.141617;
const double G=9.8;
#include <math.h>



using namespace std;

class Bala
{
private:
    float Radio;
    float x;
    float y;
    float Vx;
    float Vy;
    float vo;
    float angulo;


public:
    Bala(float R, float vo, float angulo);
    void movimiento(bool enemigo);
    float getX();
    float getY();
    float getVx();
    float getVy();
    float getR();
};

#endif // BALA_H
