#ifndef BALAGRAF_H
#define BALAGRAF_H
#include "bala.h"
#include <QGraphicsItem>
#include<QPixmap>
#include<QPainter>

class Balagraf: public QGraphicsItem
{
private:
    Bala * bala;
    QPixmap *pixmap;

public:
    Balagraf(float R, float vo, float angulo);
    Bala* getBala();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
};

#endif // BALAGRAF_H
