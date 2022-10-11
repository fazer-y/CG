#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    p0.setX(ui->lineEdit_x->text().toInt());
    p0.setY(ui->lineEdit_y->text().toInt());
    a = ui->lineEdit_a->text().toInt();
    b = ui->lineEdit_b->text().toInt();
    color = ui->frame_color->palette().base().color();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ok_clicked()
{
    p0.setX(ui->lineEdit_x->text().toInt());
    p0.setY(ui->lineEdit_y->text().toInt());
    a = ui->lineEdit_a->text().toInt();
    b = ui->lineEdit_b->text().toInt();
    update();
}


void MainWindow::on_pushButton_color_clicked()
{
    color = QColorDialog::getColor();
    ui->frame_color->setPalette(QPalette(color));
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
    ptr->setPen(color);
    ellipse e(p0, a, b, color);
    e.showEllipse(ptr);
    ptr->restore();
    delete ptr;
}

