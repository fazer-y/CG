/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
    QLineEdit *lineEdit_x0;
    QLineEdit *lineEdit_y0;
    QLabel *label_y0;
    QLineEdit *lineEdit_x1;
    QLabel *label_x1;
    QLineEdit *lineEdit_y1;
    QLabel *label_y1;
    QFrame *frame_color;
    QPushButton *pushButton_color;
    QPushButton *pushButton_ok;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(818, 443);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_set = new QGroupBox(centralwidget);
        groupBox_set->setObjectName("groupBox_set");
        groupBox_set->setGeometry(QRect(580, 10, 221, 321));
        label_x0 = new QLabel(groupBox_set);
        label_x0->setObjectName("label_x0");
        label_x0->setGeometry(QRect(10, 40, 100, 20));
        label_x0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x0 = new QLineEdit(groupBox_set);
        lineEdit_x0->setObjectName("lineEdit_x0");
        lineEdit_x0->setGeometry(QRect(120, 40, 80, 20));
        lineEdit_y0 = new QLineEdit(groupBox_set);
        lineEdit_y0->setObjectName("lineEdit_y0");
        lineEdit_y0->setGeometry(QRect(120, 80, 80, 20));
        label_y0 = new QLabel(groupBox_set);
        label_y0->setObjectName("label_y0");
        label_y0->setGeometry(QRect(10, 80, 100, 20));
        label_y0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x1 = new QLineEdit(groupBox_set);
        lineEdit_x1->setObjectName("lineEdit_x1");
        lineEdit_x1->setGeometry(QRect(120, 140, 80, 20));
        label_x1 = new QLabel(groupBox_set);
        label_x1->setObjectName("label_x1");
        label_x1->setGeometry(QRect(10, 140, 100, 20));
        label_x1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y1 = new QLineEdit(groupBox_set);
        lineEdit_y1->setObjectName("lineEdit_y1");
        lineEdit_y1->setGeometry(QRect(120, 180, 80, 20));
        label_y1 = new QLabel(groupBox_set);
        label_y1->setObjectName("label_y1");
        label_y1->setGeometry(QRect(10, 180, 100, 20));
        label_y1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_color = new QFrame(groupBox_set);
        frame_color->setObjectName("frame_color");
        frame_color->setGeometry(QRect(20, 230, 80, 30));
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
        pushButton_color->setObjectName("pushButton_color");
        pushButton_color->setGeometry(QRect(120, 230, 92, 29));
        pushButton_ok = new QPushButton(groupBox_set);
        pushButton_ok->setObjectName("pushButton_ok");
        pushButton_ok->setGeometry(QRect(70, 280, 92, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 818, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\347\233\264\347\272\277", nullptr));
        groupBox_set->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_x0->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277\350\265\267\347\202\271x0\357\274\232", nullptr));
        lineEdit_x0->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        lineEdit_y0->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_y0->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277\350\265\267\347\202\271y0\357\274\232", nullptr));
        lineEdit_x1->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        label_x1->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277\347\273\210\347\202\271x1\357\274\232", nullptr));
        lineEdit_y1->setText(QCoreApplication::translate("MainWindow", "260", nullptr));
        label_y1->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277\347\273\210\347\202\271y1\357\274\232", nullptr));
        pushButton_color->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271\351\242\234\350\211\262", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
