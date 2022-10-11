#ifndef LINE_H
#define LINE_H
#include <QPoint>
#include <QColor>
#include <QPainter>

class line
{

private:
    QPoint p0;
    QPoint p1;
    QColor color;

public:
    line(QPoint p0, QPoint p1, QColor color);
    void showLineInDDA(QPainter* ptr);
};

#endif // LINE_H
