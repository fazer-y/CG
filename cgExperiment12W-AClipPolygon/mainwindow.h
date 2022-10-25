#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QRect>
#include <QVector>
#include <QList>
#include <QColor>
#include <QColorDialog>
#include <QPainter>
#include <QPolygon>
#include "inpoint.h"


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

private:
    Ui::MainWindow *ui;
    QPoint pp[8];  // 被裁剪多边形的顶点集合
    QPoint vp[8];  // 裁剪窗口的顶点
    QList<QLine> pLine;  // 被裁剪多边形的边
    QList<QLine> vLine;  // 裁剪窗口的边
    QList<InPoint> pPoint;  // 被裁剪多边形插入交点之后的序列
    QList<InPoint> vPoint;  // 裁剪窗口的插入交点之后的序列
    int pn;  // 被裁减多边形的顶点数
    int vn;  // 裁剪窗口顶点数
    QColor newColor;
    QColor oldColor;

    void SetPLane();
    bool IsInsect(const QPoint A, const QPoint B, const QPoint C
                 ,const QPoint D, QPoint& Insect, double& t);
    void BoolIntersection(QList<QPoint>& PointInter, QList<int>& Num);

private slots:
    void on_pushButton_color_old_clicked();

    void on_pushButton_ok_clicked();

    void on_pushButton_color_new_clicked();
};
#endif // MAINWINDOW_H
