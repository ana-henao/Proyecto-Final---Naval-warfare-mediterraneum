#ifndef DISPARO_H
#define DISPARO_H
#include <QGraphicsItem>
#include <QPixmap>
#include<QPainter>

class Disparo:public QGraphicsItem

{
private:
    QPixmap *pixmap;
    int w,h;
    int posx, posy;

public:
    Disparo(int w_, int h_, int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
};

#endif // DISPARO_H
