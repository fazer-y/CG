#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent*)
{
    QPainter* ptr = new QPainter(this);
    ui->groupBox_set->setFixedSize(313, height()-20);
    ui->splitter->setFixedSize(width()-318, height()-20);
}
