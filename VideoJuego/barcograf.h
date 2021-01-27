#ifndef BARCOGRAF_H
#define BARCOGRAF_H
#include <QGraphicsItem>
#include "barco.h"
#include<QPixmap>
#include<QPainter>


class Barcograf: public QGraphicsItem
{
private:
    Barco * barco;
    QPixmap *pixmap;
    float escala=1;
public:
    Barcograf(int Al, int An, int x, int y, float vo, int tipo);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
    Barco* getBarco();
    void setEscala(float s);
    void setX(int x);
    void setY(int y);
};

#endif // BARCOGRAF_H
