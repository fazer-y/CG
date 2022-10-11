#include "polygon.h"

polygon::polygon(QVector<QPoint>& points, QPoint seed, QColor color)
    :points(points)
    ,seed(seed)
    ,color(color)
{

}

int polygon::getMaxX()
{
    int max = 0;
    QVector<QPoint>::iterator iter;
    for(iter=points.begin(); iter!=points.end(); iter++)
    {
        if(iter->x() > max)
        {
            max = iter->x();
        }
    }
    return max;
}

int polygon::getMinX()
{
    int min = getMaxX();
    QVector<QPoint>::iterator iter;
    for(iter=points.begin(); iter!=points.end(); iter++)
    {
        if(iter->x() < min)
        {
            min = iter->x();
        }
    }
    return min;
}

int polygon::getMaxY()
{
    int max = 0;
    QVector<QPoint>::iterator iter;
    for(iter=points.begin(); iter!=points.end(); iter++)
    {
        if(iter->y() > max)
        {
            max = iter->y();
        }
    }
    return max;
}
int polygon::getMinY()
{
    int min = getMaxY();
    QVector<QPoint>::iterator iter;
    for(iter=points.begin(); iter!=points.end(); iter++)
    {
        if(iter->y() < min)
        {
            min = iter->y();
        }
    }
    return min;
}

bool polygon::isInPolygon(QPoint p)
{
    int i, j;
    bool c = false;

    for(i=0, j=points.size()-1; i < points.size(); j=i++)
    {
        if(((points[i].y() > p.y()) != (points[j].y() > p.y()))
           && (p.x() < (points[j].x()-points[i].x())
               * (p.y()-points[i].y()) / (points[j].y()-points[i].y())
               + points[i].x()))
        {
            c = !c;
        }
    }
    return c;
}

void polygon::showPolygonInSeed(QPainter* ptr)
{
    if(!isInPolygon(seed) || (points.size() < 3))
        return;

    // 获取多边形最小包围盒
    int maxX, minX, maxY, minY;
    maxX = getMaxX()+1;
    minX = getMinX()-1;
    maxY = getMaxY()+1;
    minY = getMinY()-1;

    if(seed.x() <= minX || seed.x() >= maxX
            || seed.y() <= minY || seed.y() >= maxY)
    {
        return;
    }

    // 设置标志矩阵,完成初始化
    int m = maxY - minY;
    int n = maxX - minX;
    bool MF[m][n];
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            MF[i][j] = false;
        }
    }

    // 边界绘制
    QPoint p0, p1;
    int temp;
    int vertics = points.size();
    int x, y, k;
    double tx, ty, dx, dy;
    int x0, x1, y0, y1;
    ptr->save();
    ptr->setPen(color);

    for(k = 0; k < vertics; k++)
    {
        if(k == vertics-1)
        {
            p0 = points[k];
            p1 = points[0];
        }
        else
        {
            p0 = points[k];
            p1 = points[k+1];
        }

        x0 = p0.x();
        y0 = p0.y();
        x1 = p1.x();
        y1 = p1.y();

        if(y0 == y1)  // 水平边
        {
            y = y0;
            if(x0 > x1)
            {
                temp = x0;
                x0 = x1;
                x1 = temp;
            }
            for(x = x0; x < x1; x++)
            {
                ptr->drawPoint(x, y);
                MF[y-minY][x-minX] = true;
            }
        }
        else if(x0 == x1)  // 垂直边
        {
            x = x0;
            if(y0>y1)
            {
                temp = y0;
                y0 = y1;
                y1 = temp;
            }
            for(y = y0; y < y1; y++)
            {
                ptr->drawPoint(x, y);
                MF[y-minY][x-minX] = true;
            }
        }
        else  // 斜边
        {
            dy = (double)(y1-y0)/(double)(x1-x0);
            dx = 1/dy;

            if(dy>-1 && dy < 1)
            {
                if(x0 > x1)
                {
                    temp = x0;
                    x0 = x1;
                    x1 = temp;
                    temp = y0;
                    y0 = y1;
                    y1 = temp;
                }
                ty = y0;
                for(x = x0; x < x1; x++)
                {
                    y = (int)(ty+0.5);
                    ptr->drawPoint(x, y);
                    MF[y-minY][x-minX] = true;
                    ty += dy;
                }
            }
            else
            {
                if(y0>y1)
                {
                    temp = y0;
                    y0 = y1;
                    y1 = temp;
                    temp = x0;
                    x0 = x1;
                    x1 = temp;
                }
                tx = x0;
                for(y = y0; y < y1; y++)
                {
                    x = (int)(tx+0.5);
                    ptr->drawPoint(x, y);
                    MF[y-minY][x-minX] = true;
                    tx += dx;
                }
            }
        }
    }

    // 种子填充
    QStack<QPoint> stack;
    stack.push(seed);
    MF[seed.y()-minY][seed.x()-minX] = true;

    QPoint ps;
    while(!stack.isEmpty())
    {
        ps = stack.pop();
        ptr->drawPoint(ps);

        // 左上
        p0.setX(ps.x()-1);
        p0.setY(ps.y()+1);
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 上
        p0.setX(ps.x());
        p0.setY(ps.y()+1);
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 右上
        p0.setX(ps.x()+1);
        p0.setY(ps.y()+1);
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 左
        p0.setX(ps.x()-1);
        p0.setY(ps.y());
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 右
        p0.setX(ps.x()+1);
        p0.setY(ps.y());
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 左下
        p0.setX(ps.x()-1);
        p0.setY(ps.y()-1);
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 下
        p0.setX(ps.x());
        p0.setY(ps.y()-1);
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }

        // 右下
        p0.setX(ps.x()+1);
        p0.setY(ps.y()-1);
        if(!MF[p0.y()-minY][p0.x()-minX] && isInPolygon(p0))
        {
            stack.push(p0);
            MF[p0.y()-minY][p0.x()-minX] = true;
        }
    }
    ptr->restore();
}
