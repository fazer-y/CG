#ifndef POLYGON_H
#define POLYGON_H

#include <QPoint>
#include <QVector>
#include <QList>
#include <QColor>
#include <QPainter>
#include <algorithm>
using namespace std;
#include "edge.h"

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
    void showPolygonInEdgeTable(QPainter* ptr);
};

#endif // POLYGON_H
