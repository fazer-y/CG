#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QRect>
#include <QVector>
#include <QColor>
#include <QColorDialog>
#include <QPainter>
#include <QPolygon>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent*);
    bool lineClip(QPoint& p0, QPoint& p1, QRect rt);
    char getCSCode(int x, int y, QRect rt);

private:
    Ui::MainWindow *ui;
    QPoint p[8];
    QRect rect;
    int n;
    QColor newColor;
    QColor oldColor;

    QPolygon polyClip(QPolygon poly1, QRect& rect1);
    QPolygon edgeClip(QPolygon poly1, QPoint p0, QPoint p1);
    bool isInsideEdge(QPoint p, QPoint p0, QPoint p1);
    QPoint intersect(QPoint s, QPoint p, QPoint p0, QPoint p1);

private slots:
    void on_pushButton_color_clicked();

    void on_pushButton_ok_clicked();

    void on_pushButton_color_3_clicked();
};
#endif // MAINWINDOW_H
