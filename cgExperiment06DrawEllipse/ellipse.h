#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <QPoint>
#include <QColor>
#include <QPainter>

class ellipse
{
private:
    QPoint p0;
    int a, b;
    QColor color;

public:
    ellipse(QPoint p0, int a, int b, QColor color);
    void showEllipse(QPainter* ptr);

private:
    void Draw4thEllipse(int x, int y, QPainter* ptr);

};

#endif // ELLIPSE_H
