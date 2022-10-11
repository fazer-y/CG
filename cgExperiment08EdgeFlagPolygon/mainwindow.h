#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QRect>
#include <QVector>
#include <QColor>
#include <QColorDialog>
#include <QPainter>
#include "polygon.h"


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
    int n;
    QPoint p[8];
    QColor color;

private slots:
    void on_pushButton_color_clicked();

    void on_pushButton_ok_clicked();

};
#endif // MAINWINDOW_H
