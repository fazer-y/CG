#ifndef POLYGON_H
#define POLYGON_H

#include <QPoint>
#include <QVector>
#include <QColor>
#include <QPainter>

class polygon
{
private:
    QVector<QPoint> points;
    QColor color;
    int getMaxX();
    int getMinX();
    int getMaxY();
    int getMinY();

public:
    polygon(QVector<QPoint>& points, QColor color);
    void showPolygonInEdgeFlag(QPainter* ptr);
};

#endif // POLYGON_H
