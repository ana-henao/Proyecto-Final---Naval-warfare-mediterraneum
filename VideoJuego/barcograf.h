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
public:
    Barcograf(int Al, int An, int x, int y, float vo);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
    Barco* getBarco();
};

#endif // BARCOGRAF_H
