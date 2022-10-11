#ifndef CIRCLE_H
#define CIRCLE_H

#include <QPoint>
#include <QColor>
#include <QPainter>

class circle
{
public:
    circle(QPoint p0, int r, QColor color);
    void showCircle(QPainter* ptr);

private:
    void draw8th(QPoint p, QPainter *ptr);

private:
    QPoint p0;
    int r;
    QColor color;
};

#endif // CIRCLE_H
