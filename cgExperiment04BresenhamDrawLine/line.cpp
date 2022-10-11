#include "line.h"

line::line(QPoint p0, QPoint p1, QColor color)
    : p0(p0), p1(p1), color(color)
{

}

void line::showLineInBresenham(QPainter* ptr)
{
    int x, y;
    double m;  // 斜率
    double e = -0.5;
    QPoint temp;

    ptr->save();
    ptr->setPen(color);
    if(p0.y() == p1.y())  // 水平边
    {
        if(p0.x() > p1.x())
        {
            temp = p0;
            p0 = p1;
            p1 = temp;
        }
        for(x = p0.x(); x < p1.x(); x++)
        {
            ptr->drawPoint(x, p0.y());
        }
        ptr->restore();
        return;
    }
    else if(p0.x() == p1.x())  // 垂直边
    {
       if(p0.y() > p1.y())
       {
           temp = p0;
           p0 = p1;
           p1 = temp;
       }
       for(y = p0.y(); y < p1.y(); y++)
       {
           ptr->drawPoint(p0.x(), y);
       }
       ptr->restore();
       return;
    }

    m = (double)(p1.y() - p0.y()) / (double)(p1.x() - p0.x());
    if(m >= 0 && m <= 1)  // 斜率在-45°到45°之间，x++
    {
        if(p0.x() > p1.x())
        {
            temp = p0;
            p0 = p1;
            p1 = temp;
        }
        e = -0.5;
        x = p0.x();
        y = p0.y();
        while(x < p1.x())
        {
            ptr->drawPoint(x, y);
            e += m;
            if(e > 0)
            {
                e--;
                y++;
            }
            x++;
        }
    }
    else if(m >= -1 && m < 0)  // 斜率在-45°到0°之间
    {
        if(p0.x() > p1.x())
        {
            temp = p1;
            p1 = p0;
            p0 = temp;
        }
        e = 0.5;
        x = p0.x();
        y = p0.y();
        while(x < p1.x())
        {
            ptr->drawPoint(x, y);
            e += m;
            if(e < 0)
            {
                e++;
                y--;
            }

            x++;
        }
    }
    else if(m > 1)  // 斜率超过45°
    {
        if(p0.y() > p1.y())
        {
            temp = p1;
            p1 = p0;
            p0 = temp;
        }
        e = -0.5;
        x = p0.x();
        y = p0.y();
        while(y < p1.y())
        {
            ptr->drawPoint(x, y);
            e += 1/m;
            if(e > 0)
            {
                e--;
                x++;
            }
            y++;
        }
    }
    else
    {
        if(p0.y() > p1.y())
        {
            temp = p1;
            p1 = p0;
            p0 = temp;
        }
        e = 0.5;
        x = p0.x();
        y = p0.y();
        while(y < p1.y())
        {
            ptr->drawPoint(x, y);
            e += 1/m;
            if(e < 0)
            {
                x--;
                e++;
            }
            y++;
        }
    }
    ptr->restore();
}



























