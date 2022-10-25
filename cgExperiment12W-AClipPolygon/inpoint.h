#ifndef INPOINT_H
#define INPOINT_H

#include <QPoint>

class InPoint
{
public:
    InPoint();
    InPoint(QPoint point, int jud);
    void setPoint(QPoint p);
    void setJudge(int jud);
    QPoint getPoint();
    int getJudge();

private:
    QPoint point;
    int judge;  // 1:入点， 2：出点， 0：端点
};

#endif // INPOINT_H
