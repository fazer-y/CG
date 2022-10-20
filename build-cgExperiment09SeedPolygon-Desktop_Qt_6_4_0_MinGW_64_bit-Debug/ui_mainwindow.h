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
    QFrame *frame_color;
    QPushButton *pushButton_color;
    QPushButton *pushButton_ok;
    QLabel *label;
    QLineEdit *lineEdit_n;
    QGroupBox *groupBox_nodeList;
    QLineEdit *lineEdit_x0;
    QLabel *label_x0;
    QLabel *label_y0;
    QLineEdit *lineEdit_y0;
    QLabel *label_x1_5;
    QLineEdit *lineEdit_y1;
    QLabel *label_x1;
    QLineEdit *lineEdit_x1;
    QLabel *label_x1_7;
    QLineEdit *lineEdit_y2;
    QLabel *label_x1_8;
    QLineEdit *lineEdit_x2;
    QLabel *label_x1_9;
    QLineEdit *lineEdit_y3;
    QLabel *label_x1_10;
    QLineEdit *lineEdit_x3;
    QLabel *label_x1_11;
    QLineEdit *lineEdit_y4;
    QLabel *label_x1_12;
    QLineEdit *lineEdit_x4;
    QLabel *label_x1_13;
    QLineEdit *lineEdit_y5;
    QLabel *label_x1_14;
    QLineEdit *lineEdit_x5;
    QLabel *label_x1_15;
    QLineEdit *lineEdit_y6;
    QLabel *label_x1_16;
    QLineEdit *lineEdit_x6;
    QLabel *label_x1_17;
    QLineEdit *lineEdit_y7;
    QLabel *label_x1_18;
    QLineEdit *lineEdit_x7;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_sy;
    QLabel *label_x1_20;
    QLabel *label_x1_19;
    QLineEdit *lineEdit_sx;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(979, 748);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_set = new QGroupBox(centralwidget);
        groupBox_set->setObjectName("groupBox_set");
        groupBox_set->setGeometry(QRect(570, 0, 381, 701));
        frame_color = new QFrame(groupBox_set);
        frame_color->setObjectName("frame_color");
        frame_color->setGeometry(QRect(80, 30, 80, 30));
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
        pushButton_color->setGeometry(QRect(220, 30, 92, 29));
        pushButton_ok = new QPushButton(groupBox_set);
        pushButton_ok->setObjectName("pushButton_ok");
        pushButton_ok->setGeometry(QRect(140, 660, 92, 29));
        label = new QLabel(groupBox_set);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 80, 69, 20));
        lineEdit_n = new QLineEdit(groupBox_set);
        lineEdit_n->setObjectName("lineEdit_n");
        lineEdit_n->setGeometry(QRect(220, 80, 80, 20));
        groupBox_nodeList = new QGroupBox(groupBox_set);
        groupBox_nodeList->setObjectName("groupBox_nodeList");
        groupBox_nodeList->setGeometry(QRect(20, 120, 341, 431));
        lineEdit_x0 = new QLineEdit(groupBox_nodeList);
        lineEdit_x0->setObjectName("lineEdit_x0");
        lineEdit_x0->setGeometry(QRect(80, 40, 80, 20));
        label_x0 = new QLabel(groupBox_nodeList);
        label_x0->setObjectName("label_x0");
        label_x0->setGeometry(QRect(20, 40, 50, 20));
        label_x0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_y0 = new QLabel(groupBox_nodeList);
        label_y0->setObjectName("label_y0");
        label_y0->setGeometry(QRect(180, 40, 50, 20));
        label_y0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y0 = new QLineEdit(groupBox_nodeList);
        lineEdit_y0->setObjectName("lineEdit_y0");
        lineEdit_y0->setGeometry(QRect(240, 40, 80, 20));
        label_x1_5 = new QLabel(groupBox_nodeList);
        label_x1_5->setObjectName("label_x1_5");
        label_x1_5->setGeometry(QRect(180, 90, 50, 20));
        label_x1_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y1 = new QLineEdit(groupBox_nodeList);
        lineEdit_y1->setObjectName("lineEdit_y1");
        lineEdit_y1->setGeometry(QRect(240, 90, 80, 20));
        label_x1 = new QLabel(groupBox_nodeList);
        label_x1->setObjectName("label_x1");
        label_x1->setGeometry(QRect(20, 90, 50, 20));
        label_x1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x1 = new QLineEdit(groupBox_nodeList);
        lineEdit_x1->setObjectName("lineEdit_x1");
        lineEdit_x1->setGeometry(QRect(80, 90, 80, 20));
        label_x1_7 = new QLabel(groupBox_nodeList);
        label_x1_7->setObjectName("label_x1_7");
        label_x1_7->setGeometry(QRect(180, 140, 50, 20));
        label_x1_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y2 = new QLineEdit(groupBox_nodeList);
        lineEdit_y2->setObjectName("lineEdit_y2");
        lineEdit_y2->setGeometry(QRect(240, 140, 80, 20));
        label_x1_8 = new QLabel(groupBox_nodeList);
        label_x1_8->setObjectName("label_x1_8");
        label_x1_8->setGeometry(QRect(20, 140, 50, 20));
        label_x1_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x2 = new QLineEdit(groupBox_nodeList);
        lineEdit_x2->setObjectName("lineEdit_x2");
        lineEdit_x2->setGeometry(QRect(80, 140, 80, 20));
        label_x1_9 = new QLabel(groupBox_nodeList);
        label_x1_9->setObjectName("label_x1_9");
        label_x1_9->setGeometry(QRect(180, 190, 50, 20));
        label_x1_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y3 = new QLineEdit(groupBox_nodeList);
        lineEdit_y3->setObjectName("lineEdit_y3");
        lineEdit_y3->setGeometry(QRect(240, 190, 80, 20));
        label_x1_10 = new QLabel(groupBox_nodeList);
        label_x1_10->setObjectName("label_x1_10");
        label_x1_10->setGeometry(QRect(20, 190, 50, 20));
        label_x1_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x3 = new QLineEdit(groupBox_nodeList);
        lineEdit_x3->setObjectName("lineEdit_x3");
        lineEdit_x3->setGeometry(QRect(80, 190, 80, 20));
        label_x1_11 = new QLabel(groupBox_nodeList);
        label_x1_11->setObjectName("label_x1_11");
        label_x1_11->setGeometry(QRect(180, 240, 50, 20));
        label_x1_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y4 = new QLineEdit(groupBox_nodeList);
        lineEdit_y4->setObjectName("lineEdit_y4");
        lineEdit_y4->setGeometry(QRect(240, 240, 80, 20));
        label_x1_12 = new QLabel(groupBox_nodeList);
        label_x1_12->setObjectName("label_x1_12");
        label_x1_12->setGeometry(QRect(20, 240, 50, 20));
        label_x1_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x4 = new QLineEdit(groupBox_nodeList);
        lineEdit_x4->setObjectName("lineEdit_x4");
        lineEdit_x4->setGeometry(QRect(80, 240, 80, 20));
        label_x1_13 = new QLabel(groupBox_nodeList);
        label_x1_13->setObjectName("label_x1_13");
        label_x1_13->setGeometry(QRect(180, 290, 50, 20));
        label_x1_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y5 = new QLineEdit(groupBox_nodeList);
        lineEdit_y5->setObjectName("lineEdit_y5");
        lineEdit_y5->setGeometry(QRect(240, 290, 80, 20));
        label_x1_14 = new QLabel(groupBox_nodeList);
        label_x1_14->setObjectName("label_x1_14");
        label_x1_14->setGeometry(QRect(20, 290, 50, 20));
        label_x1_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x5 = new QLineEdit(groupBox_nodeList);
        lineEdit_x5->setObjectName("lineEdit_x5");
        lineEdit_x5->setGeometry(QRect(80, 290, 80, 20));
        label_x1_15 = new QLabel(groupBox_nodeList);
        label_x1_15->setObjectName("label_x1_15");
        label_x1_15->setGeometry(QRect(180, 340, 50, 20));
        label_x1_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y6 = new QLineEdit(groupBox_nodeList);
        lineEdit_y6->setObjectName("lineEdit_y6");
        lineEdit_y6->setGeometry(QRect(240, 340, 80, 20));
        label_x1_16 = new QLabel(groupBox_nodeList);
        label_x1_16->setObjectName("label_x1_16");
        label_x1_16->setGeometry(QRect(20, 340, 50, 20));
        label_x1_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x6 = new QLineEdit(groupBox_nodeList);
        lineEdit_x6->setObjectName("lineEdit_x6");
        lineEdit_x6->setGeometry(QRect(80, 340, 80, 20));
        label_x1_17 = new QLabel(groupBox_nodeList);
        label_x1_17->setObjectName("label_x1_17");
        label_x1_17->setGeometry(QRect(180, 390, 50, 20));
        label_x1_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y7 = new QLineEdit(groupBox_nodeList);
        lineEdit_y7->setObjectName("lineEdit_y7");
        lineEdit_y7->setGeometry(QRect(240, 390, 80, 20));
        label_x1_18 = new QLabel(groupBox_nodeList);
        label_x1_18->setObjectName("label_x1_18");
        label_x1_18->setGeometry(QRect(20, 390, 50, 20));
        label_x1_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x7 = new QLineEdit(groupBox_nodeList);
        lineEdit_x7->setObjectName("lineEdit_x7");
        lineEdit_x7->setGeometry(QRect(80, 390, 80, 20));
        groupBox = new QGroupBox(groupBox_set);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 570, 331, 71));
        lineEdit_sy = new QLineEdit(groupBox);
        lineEdit_sy->setObjectName("lineEdit_sy");
        lineEdit_sy->setGeometry(QRect(230, 30, 80, 20));
        label_x1_20 = new QLabel(groupBox);
        label_x1_20->setObjectName("label_x1_20");
        label_x1_20->setGeometry(QRect(10, 30, 50, 20));
        label_x1_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_x1_19 = new QLabel(groupBox);
        label_x1_19->setObjectName("label_x1_19");
        label_x1_19->setGeometry(QRect(170, 30, 50, 20));
        label_x1_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_sx = new QLineEdit(groupBox);
        lineEdit_sx->setObjectName("lineEdit_sx");
        lineEdit_sx->setGeometry(QRect(70, 30, 80, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 979, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\244\232\350\276\271\345\275\242\357\274\232\347\247\215\345\255\220\345\241\253\345\205\205\347\256\227\346\263\225", nullptr));
        groupBox_set->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        pushButton_color->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271\351\242\234\350\211\262", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\241\266\347\202\271\344\270\252\346\225\260\357\274\232", nullptr));
        lineEdit_n->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        groupBox_nodeList->setTitle(QCoreApplication::translate("MainWindow", "\345\244\232\350\276\271\345\275\242\351\241\266\347\202\271\345\235\220\346\240\207", nullptr));
        lineEdit_x0->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_x0->setText(QCoreApplication::translate("MainWindow", "x0\357\274\232", nullptr));
        label_y0->setText(QCoreApplication::translate("MainWindow", "y0\357\274\232", nullptr));
        lineEdit_y0->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_x1_5->setText(QCoreApplication::translate("MainWindow", "y1\357\274\232", nullptr));
        lineEdit_y1->setText(QCoreApplication::translate("MainWindow", "70", nullptr));
        label_x1->setText(QCoreApplication::translate("MainWindow", "x1\357\274\232", nullptr));
        lineEdit_x1->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_x1_7->setText(QCoreApplication::translate("MainWindow", "y2\357\274\232", nullptr));
        lineEdit_y2->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_x1_8->setText(QCoreApplication::translate("MainWindow", "x2\357\274\232", nullptr));
        lineEdit_x2->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_x1_9->setText(QCoreApplication::translate("MainWindow", "y3\357\274\232", nullptr));
        lineEdit_y3->setText(QCoreApplication::translate("MainWindow", "80", nullptr));
        label_x1_10->setText(QCoreApplication::translate("MainWindow", "x3\357\274\232", nullptr));
        lineEdit_x3->setText(QCoreApplication::translate("MainWindow", "110", nullptr));
        label_x1_11->setText(QCoreApplication::translate("MainWindow", "y4\357\274\232", nullptr));
        lineEdit_y4->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label_x1_12->setText(QCoreApplication::translate("MainWindow", "x4\357\274\232", nullptr));
        lineEdit_x4->setText(QCoreApplication::translate("MainWindow", "110", nullptr));
        label_x1_13->setText(QCoreApplication::translate("MainWindow", "y5\357\274\232", nullptr));
        lineEdit_y5->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_x1_14->setText(QCoreApplication::translate("MainWindow", "x5\357\274\232", nullptr));
        lineEdit_x5->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_x1_15->setText(QCoreApplication::translate("MainWindow", "y6\357\274\232", nullptr));
        lineEdit_y6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x1_16->setText(QCoreApplication::translate("MainWindow", "x6\357\274\232", nullptr));
        lineEdit_x6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x1_17->setText(QCoreApplication::translate("MainWindow", "y7\357\274\232", nullptr));
        lineEdit_y7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x1_18->setText(QCoreApplication::translate("MainWindow", "x7\357\274\232", nullptr));
        lineEdit_x7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\247\215\345\255\220\347\202\271\345\235\220\346\240\207", nullptr));
        lineEdit_sy->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
        label_x1_20->setText(QCoreApplication::translate("MainWindow", "seedx\357\274\232", nullptr));
        label_x1_19->setText(QCoreApplication::translate("MainWindow", "seedy\357\274\232", nullptr));
        lineEdit_sx->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
