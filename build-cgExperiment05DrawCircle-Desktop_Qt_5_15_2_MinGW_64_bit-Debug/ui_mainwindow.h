/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_set;
    QLabel *label_x0;
    QLineEdit *lineEdit_x;
    QLineEdit *lineEdit_y;
    QLabel *label_y0;
    QLineEdit *lineEdit_r;
    QLabel *label_x1;
    QFrame *frame_color;
    QPushButton *pushButton_color;
    QPushButton *pushButton_ok;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 430);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_set = new QGroupBox(centralwidget);
        groupBox_set->setObjectName(QString::fromUtf8("groupBox_set"));
        groupBox_set->setGeometry(QRect(560, 10, 221, 301));
        label_x0 = new QLabel(groupBox_set);
        label_x0->setObjectName(QString::fromUtf8("label_x0"));
        label_x0->setGeometry(QRect(10, 40, 100, 20));
        label_x0->setAlignment(Qt::AlignCenter);
        lineEdit_x = new QLineEdit(groupBox_set);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(120, 40, 80, 20));
        lineEdit_y = new QLineEdit(groupBox_set);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(120, 80, 80, 20));
        label_y0 = new QLabel(groupBox_set);
        label_y0->setObjectName(QString::fromUtf8("label_y0"));
        label_y0->setGeometry(QRect(10, 80, 100, 20));
        label_y0->setAlignment(Qt::AlignCenter);
        lineEdit_r = new QLineEdit(groupBox_set);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));
        lineEdit_r->setGeometry(QRect(120, 120, 80, 20));
        label_x1 = new QLabel(groupBox_set);
        label_x1->setObjectName(QString::fromUtf8("label_x1"));
        label_x1->setGeometry(QRect(10, 120, 100, 20));
        label_x1->setAlignment(Qt::AlignCenter);
        frame_color = new QFrame(groupBox_set);
        frame_color->setObjectName(QString::fromUtf8("frame_color"));
        frame_color->setGeometry(QRect(20, 180, 80, 30));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(46, 47, 48, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(0, 122, 244, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush3);
        QBrush brush4(QColor(164, 166, 168, 96));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush3);
        frame_color->setPalette(palette);
        frame_color->setAutoFillBackground(true);
        frame_color->setFrameShape(QFrame::Panel);
        frame_color->setFrameShadow(QFrame::Sunken);
        pushButton_color = new QPushButton(groupBox_set);
        pushButton_color->setObjectName(QString::fromUtf8("pushButton_color"));
        pushButton_color->setGeometry(QRect(120, 180, 92, 29));
        pushButton_ok = new QPushButton(groupBox_set);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(70, 250, 92, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_set->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_x0->setText(QCoreApplication::translate("MainWindow", "\345\234\206\345\277\203x\357\274\232", nullptr));
        lineEdit_x->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        lineEdit_y->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_y0->setText(QCoreApplication::translate("MainWindow", "\345\234\206\345\277\203y\357\274\232", nullptr));
        lineEdit_r->setText(QCoreApplication::translate("MainWindow", "56", nullptr));
        label_x1->setText(QCoreApplication::translate("MainWindow", "\345\215\212\345\276\204r\357\274\232", nullptr));
        pushButton_color->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271\351\242\234\350\211\262", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
