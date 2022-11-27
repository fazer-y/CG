#ifndef WIDGET_H
#define WIDGET_H

#include <QGLWidget>
#include <QtMath>
#include <QtOpenGL/glut.h>
const double PI = 3.14159265;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QGLWidget
{
    Q_OBJECT

public:
    Widget(QGLWidget *parent = nullptr);
    ~Widget();

protected:
    void paintGL();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
