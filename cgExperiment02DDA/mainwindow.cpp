#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    points.append(QPoint(ui->lineEdit_x0->text().toInt(),
                         ui->lineEdit_y0->text().toInt() +
                         ui->statusbar->height()));
    points.append(QPoint(ui->lineEdit_x1->text().toInt(),
                         ui->lineEdit_y1->text().toInt() +
                         ui->statusbar->height()));
    color = ui->frame_color->palette().base().color();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent*)
{
    int w = ui->groupBox_set->width();
    int h = ui->groupBox_set->height();
    int x = width() - w - 10;
    int y = ui->groupBox_set->y();
    ui->groupBox_set->setGeometry(QRect(x, y, w, h));

    QPainter* ptr = new QPainter(this);
    ptr->save();
    ptr->setPen(color);  // 设置笔的颜色
    line l(points[0], points[1], color);
    l.showLineInDDA(ptr);  // DDA算法绘制直线
    ptr->restore();
    delete ptr;
}

void MainWindow::on_pushButton_color_clicked()
{
    color = QColorDialog::getColor();
    ui->frame_color->setPalette(QPalette(color));
}


void MainWindow::on_pushButton_ok_clicked()
{
    // 更新直线起点、终点坐标
    points[0] = QPoint(ui->lineEdit_x0->text().toInt(),
                       ui->lineEdit_y0->text().toInt() +
                       ui->statusbar->height());
    points[1] = QPoint(ui->lineEdit_x1->text().toInt(),
                       ui->lineEdit_y1->text().toInt() +
                       ui->statusbar->height());
    update();  // 更新窗口，触发QPaintEvent事件
}
