#include "inpoint.h"

InPoint::InPoint()
{

}

InPoint::InPoint(QPoint point, int jud)
    :point(point)
    ,judge(jud)
{

}

void InPoint::setPoint(QPoint p)
{
    this->point.setX(p.x());
    this->point.setY(p.y());
}

void InPoint::setJudge(int jud)
{
    this->judge = jud;
}

QPoint InPoint::getPoint()
{
    return this->point;
}

int InPoint::getJudge()
{
    return this->judge;
}
