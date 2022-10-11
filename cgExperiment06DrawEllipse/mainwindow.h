#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QColor>
#include <QPainter>
#include <QColorDialog>
#include "ellipse.h"

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

private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_color_clicked();

private:
    Ui::MainWindow *ui;
    QPoint p0;
    int a, b;
    QColor color;
};
#endif // MAINWINDOW_H
