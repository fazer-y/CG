#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QVector>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void clip();
    void drawRect(QPainter* ptr, QRect rect, QColor clr);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mouseReleaseEvemt(QMouseEvent* event);


private slots:
    void on_spinBox_ww_valueChanged(int arg1);

    void on_spinBox_wh_valueChanged(int arg1);

    void on_spinBox_vw_valueChanged(int arg1);

    void on_spinBox_vh_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QPoint wldOrg;  // 世界坐标系原点
    QPoint scrOrg;  // 屏幕坐标系原点
    QRect wldRect;  // 世界坐标系矩形区域
    QRect scrRect;  // 屏幕坐标系矩形区域
    QRect winRect;  // 窗口
    QRect viewRect; // 视口
    QVector<QRect> wldFigs;  // 世界坐标系中的图形
    QVector<QRect> scrFigs;  // 屏幕坐标系中的图形
    bool isInWindow;  // 鼠标是否在窗口内标志
    bool isInView;    // 鼠标是否在视口内标志
    QPoint oldPos;  // 鼠标按下位置
};
#endif // MAINWINDOW_H
