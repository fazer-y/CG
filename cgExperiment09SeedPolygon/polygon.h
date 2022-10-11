#ifndef POLYGON_H
#define POLYGON_H

#include <QPoint>
#include <QVector>
#include <QColor>
#include <QPainter>
#include <QStack>

class polygon
{
private:
    QVector<QPoint> points;
    QColor color;
    QPoint seed;
    int getMaxX();
    int getMinX();
    int getMaxY();
    int getMinY();
    bool isInPolygon(QPoint p);

public:
    polygon(QVector<QPoint>& points, QPoint seed, QColor color);
    void showPolygonInSeed(QPainter* ptr);
};

#endif // POLYGON_H
