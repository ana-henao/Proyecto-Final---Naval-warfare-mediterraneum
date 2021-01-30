#ifndef BALAGRAF_H
#define BALAGRAF_H
#include "bala.h"
#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
#include "balaparab.h"
#include "balacirc.h"
#include "balamrua.h"

class Balagraf: public QGraphicsItem
{
private:
    Bala * bala;
    QPixmap *pixmap;
    float escala;
    float x;
    float y;
    int tipo;

public:
    Balagraf(float R,  float vx, float vy, int x, int y,float dato,int tipo);
    Bala* getBala();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
    void setEscala(float s);
    void actualizar(float x,float y);
    float getX();
    float getY();
    int getTipo();

};

#endif // BALAGRAF_H
