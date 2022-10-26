#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    isInWindow = false;
    isInView = false;

    wldOrg = QPoint(50, 120);
    scrOrg = QPoint(width()/2+50, 120);

    wldRect = QRect(0, 0, width()*3/8, height()*5/8);
    scrRect = wldRect;

    wldRect.translate(wldOrg);
    scrRect.translate(scrOrg);

    winRect = QRect(wldRect.width()*1/8,
                    wldRect.width()*7/32,
                    wldRect.width()*6/8,
                    wldRect.width()*18/32);  // 窗口矩形
    viewRect = winRect;  // 视口矩形

    winRect.translate(wldOrg);
    viewRect.translate(scrOrg);

    //初始化世界坐标系中的图形
    wldFigs.append(QRect(wldRect.width()/20,
                         wldRect.height()*3/10,
                         wldRect.width()*17/20,
                         wldRect.height()*4/15));
    wldFigs.append(QRect(wldRect.width()*11/26,
                         wldRect.height()*25/70,
                         wldRect.width()*5/13,
                         wldRect.height()*27/70));
    wldFigs.append(QRect(wldRect.width()/10,
                         wldRect.height()*2/3,
                         wldRect.width()*17/30,
                         wldRect.height()*7/30));
    wldFigs.append(QRect(wldRect.width()*3/10,
                         wldRect.height()*1/10,
                         wldRect.width()*9/20,
                         wldRect.height()*11/40));
    int i;
    for(i=0; i<wldFigs.length(); i++)
        wldFigs[i].translate(wldOrg);

    //初始化屏幕坐标系中的图形
    scrFigs.resize(4);

    ui->spinBox_ww->setMaximum(wldRect.width()-50);
    ui->spinBox_wh->setMaximum(wldRect.height()-50);
    ui->spinBox_vw->setMaximum(scrRect.width()-50);
    ui->spinBox_vh->setMaximum(scrRect.height()-50);
    ui->spinBox_ww->setValue(winRect.width());
    ui->spinBox_wh->setValue(winRect.height());
    ui->spinBox_vw->setValue(viewRect.width());
    ui->spinBox_vh->setValue(viewRect.height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_spinBox_ww_valueChanged(int arg1)
{

}


void MainWindow::on_spinBox_wh_valueChanged(int arg1)
{

}


void MainWindow::on_spinBox_vw_valueChanged(int arg1)
{

}


void MainWindow::on_spinBox_vh_valueChanged(int arg1)
{

}

