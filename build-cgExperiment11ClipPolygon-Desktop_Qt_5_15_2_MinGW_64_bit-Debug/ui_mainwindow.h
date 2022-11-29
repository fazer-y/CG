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
    QFrame *frame_color;
    QFrame *frame_color_old;
    QPushButton *pushButton_color_2;
    QPushButton *pushButton_color;
    QPushButton *pushButton_ok;
    QGroupBox *groupBox_nodeList;
    QLineEdit *lineEdit_x;
    QLabel *label_x0;
    QLabel *label_x1;
    QLineEdit *lineEdit_y;
    QLabel *label_x1_8;
    QLineEdit *lineEdit_w;
    QLabel *label_x1_10;
    QLineEdit *lineEdit_h;
    QFrame *frame_color_new;
    QPushButton *pushButton_color_3;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_n;
    QGroupBox *groupBox_nodeList_2;
    QLineEdit *lineEdit_x0;
    QLabel *label_x0_2;
    QLabel *label_y0;
    QLineEdit *lineEdit_y0;
    QLabel *label_x1_5;
    QLineEdit *lineEdit_y1;
    QLabel *label_x1_2;
    QLineEdit *lineEdit_x1;
    QLabel *label_x1_7;
    QLineEdit *lineEdit_y2;
    QLabel *label_x1_9;
    QLineEdit *lineEdit_x2;
    QLabel *label_x1_11;
    QLineEdit *lineEdit_y3;
    QLabel *label_x1_12;
    QLineEdit *lineEdit_x3;
    QLabel *label_x1_13;
    QLineEdit *lineEdit_y4;
    QLabel *label_x1_14;
    QLineEdit *lineEdit_x4;
    QLabel *label_x1_15;
    QLineEdit *lineEdit_y5;
    QLabel *label_x1_16;
    QLineEdit *lineEdit_x5;
    QLabel *label_x1_17;
    QLineEdit *lineEdit_y6;
    QLabel *label_x1_18;
    QLineEdit *lineEdit_x6;
    QLabel *label_x1_19;
    QLineEdit *lineEdit_y7;
    QLabel *label_x1_20;
    QLineEdit *lineEdit_x7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1042, 775);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_set = new QGroupBox(centralwidget);
        groupBox_set->setObjectName(QString::fromUtf8("groupBox_set"));
        groupBox_set->setGeometry(QRect(650, 10, 381, 721));
        frame_color = new QFrame(groupBox_set);
        frame_color->setObjectName(QString::fromUtf8("frame_color"));
        frame_color->setGeometry(QRect(80, 30, 80, 30));
        QPalette palette;
        frame_color->setPalette(palette);
        frame_color->setAutoFillBackground(true);
        frame_color->setFrameShape(QFrame::Panel);
        frame_color->setFrameShadow(QFrame::Sunken);
        frame_color_old = new QFrame(frame_color);
        frame_color_old->setObjectName(QString::fromUtf8("frame_color_old"));
        frame_color_old->setGeometry(QRect(0, 0, 80, 30));
        QPalette palette1;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush);
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(46, 47, 48, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(0, 122, 244, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush3);
        QBrush brush4(QColor(164, 166, 168, 96));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush3);
        frame_color_old->setPalette(palette1);
        frame_color_old->setAutoFillBackground(true);
        frame_color_old->setFrameShape(QFrame::Panel);
        frame_color_old->setFrameShadow(QFrame::Sunken);
        pushButton_color_2 = new QPushButton(frame_color);
        pushButton_color_2->setObjectName(QString::fromUtf8("pushButton_color_2"));
        pushButton_color_2->setGeometry(QRect(140, 0, 92, 29));
        pushButton_color = new QPushButton(groupBox_set);
        pushButton_color->setObjectName(QString::fromUtf8("pushButton_color"));
        pushButton_color->setGeometry(QRect(220, 30, 92, 29));
        pushButton_ok = new QPushButton(groupBox_set);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(150, 680, 92, 29));
        groupBox_nodeList = new QGroupBox(groupBox_set);
        groupBox_nodeList->setObjectName(QString::fromUtf8("groupBox_nodeList"));
        groupBox_nodeList->setGeometry(QRect(20, 120, 341, 191));
        lineEdit_x = new QLineEdit(groupBox_nodeList);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(170, 30, 80, 20));
        label_x0 = new QLabel(groupBox_nodeList);
        label_x0->setObjectName(QString::fromUtf8("label_x0"));
        label_x0->setGeometry(QRect(50, 30, 81, 20));
        label_x0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_x1 = new QLabel(groupBox_nodeList);
        label_x1->setObjectName(QString::fromUtf8("label_x1"));
        label_x1->setGeometry(QRect(50, 70, 81, 20));
        label_x1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y = new QLineEdit(groupBox_nodeList);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(170, 70, 80, 20));
        label_x1_8 = new QLabel(groupBox_nodeList);
        label_x1_8->setObjectName(QString::fromUtf8("label_x1_8"));
        label_x1_8->setGeometry(QRect(50, 110, 81, 20));
        label_x1_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_w = new QLineEdit(groupBox_nodeList);
        lineEdit_w->setObjectName(QString::fromUtf8("lineEdit_w"));
        lineEdit_w->setGeometry(QRect(170, 110, 80, 20));
        label_x1_10 = new QLabel(groupBox_nodeList);
        label_x1_10->setObjectName(QString::fromUtf8("label_x1_10"));
        label_x1_10->setGeometry(QRect(50, 150, 81, 20));
        label_x1_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_h = new QLineEdit(groupBox_nodeList);
        lineEdit_h->setObjectName(QString::fromUtf8("lineEdit_h"));
        lineEdit_h->setGeometry(QRect(170, 150, 80, 20));
        frame_color_new = new QFrame(groupBox_set);
        frame_color_new->setObjectName(QString::fromUtf8("frame_color_new"));
        frame_color_new->setGeometry(QRect(80, 80, 80, 30));
        QPalette palette2;
        QBrush brush5(QColor(255, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush6(QColor(255, 51, 51, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush3);
        frame_color_new->setPalette(palette2);
        frame_color_new->setAutoFillBackground(true);
        frame_color_new->setFrameShape(QFrame::Panel);
        frame_color_new->setFrameShadow(QFrame::Sunken);
        pushButton_color_3 = new QPushButton(groupBox_set);
        pushButton_color_3->setObjectName(QString::fromUtf8("pushButton_color_3"));
        pushButton_color_3->setGeometry(QRect(220, 80, 92, 29));
        groupBox = new QGroupBox(groupBox_set);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 320, 351, 351));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 69, 20));
        lineEdit_n = new QLineEdit(groupBox);
        lineEdit_n->setObjectName(QString::fromUtf8("lineEdit_n"));
        lineEdit_n->setGeometry(QRect(190, 30, 80, 20));
        groupBox_nodeList_2 = new QGroupBox(groupBox);
        groupBox_nodeList_2->setObjectName(QString::fromUtf8("groupBox_nodeList_2"));
        groupBox_nodeList_2->setGeometry(QRect(10, 60, 331, 281));
        lineEdit_x0 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x0->setObjectName(QString::fromUtf8("lineEdit_x0"));
        lineEdit_x0->setGeometry(QRect(80, 30, 80, 20));
        label_x0_2 = new QLabel(groupBox_nodeList_2);
        label_x0_2->setObjectName(QString::fromUtf8("label_x0_2"));
        label_x0_2->setGeometry(QRect(20, 30, 50, 20));
        label_x0_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_y0 = new QLabel(groupBox_nodeList_2);
        label_y0->setObjectName(QString::fromUtf8("label_y0"));
        label_y0->setGeometry(QRect(180, 30, 50, 20));
        label_y0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y0 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y0->setObjectName(QString::fromUtf8("lineEdit_y0"));
        lineEdit_y0->setGeometry(QRect(240, 30, 80, 20));
        label_x1_5 = new QLabel(groupBox_nodeList_2);
        label_x1_5->setObjectName(QString::fromUtf8("label_x1_5"));
        label_x1_5->setGeometry(QRect(180, 60, 50, 20));
        label_x1_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y1 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y1->setObjectName(QString::fromUtf8("lineEdit_y1"));
        lineEdit_y1->setGeometry(QRect(240, 60, 80, 20));
        label_x1_2 = new QLabel(groupBox_nodeList_2);
        label_x1_2->setObjectName(QString::fromUtf8("label_x1_2"));
        label_x1_2->setGeometry(QRect(20, 60, 50, 20));
        label_x1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x1 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x1->setObjectName(QString::fromUtf8("lineEdit_x1"));
        lineEdit_x1->setGeometry(QRect(80, 60, 80, 20));
        label_x1_7 = new QLabel(groupBox_nodeList_2);
        label_x1_7->setObjectName(QString::fromUtf8("label_x1_7"));
        label_x1_7->setGeometry(QRect(180, 90, 50, 20));
        label_x1_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y2 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y2->setObjectName(QString::fromUtf8("lineEdit_y2"));
        lineEdit_y2->setGeometry(QRect(240, 90, 80, 20));
        label_x1_9 = new QLabel(groupBox_nodeList_2);
        label_x1_9->setObjectName(QString::fromUtf8("label_x1_9"));
        label_x1_9->setGeometry(QRect(20, 90, 50, 20));
        label_x1_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x2 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x2->setObjectName(QString::fromUtf8("lineEdit_x2"));
        lineEdit_x2->setGeometry(QRect(80, 90, 80, 20));
        label_x1_11 = new QLabel(groupBox_nodeList_2);
        label_x1_11->setObjectName(QString::fromUtf8("label_x1_11"));
        label_x1_11->setGeometry(QRect(180, 120, 50, 20));
        label_x1_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y3 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y3->setObjectName(QString::fromUtf8("lineEdit_y3"));
        lineEdit_y3->setGeometry(QRect(240, 120, 80, 20));
        label_x1_12 = new QLabel(groupBox_nodeList_2);
        label_x1_12->setObjectName(QString::fromUtf8("label_x1_12"));
        label_x1_12->setGeometry(QRect(20, 120, 50, 20));
        label_x1_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x3 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x3->setObjectName(QString::fromUtf8("lineEdit_x3"));
        lineEdit_x3->setGeometry(QRect(80, 120, 80, 20));
        label_x1_13 = new QLabel(groupBox_nodeList_2);
        label_x1_13->setObjectName(QString::fromUtf8("label_x1_13"));
        label_x1_13->setGeometry(QRect(180, 150, 50, 20));
        label_x1_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y4 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y4->setObjectName(QString::fromUtf8("lineEdit_y4"));
        lineEdit_y4->setGeometry(QRect(240, 150, 80, 20));
        label_x1_14 = new QLabel(groupBox_nodeList_2);
        label_x1_14->setObjectName(QString::fromUtf8("label_x1_14"));
        label_x1_14->setGeometry(QRect(20, 150, 50, 20));
        label_x1_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x4 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x4->setObjectName(QString::fromUtf8("lineEdit_x4"));
        lineEdit_x4->setGeometry(QRect(80, 150, 80, 20));
        label_x1_15 = new QLabel(groupBox_nodeList_2);
        label_x1_15->setObjectName(QString::fromUtf8("label_x1_15"));
        label_x1_15->setGeometry(QRect(180, 180, 50, 20));
        label_x1_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y5 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y5->setObjectName(QString::fromUtf8("lineEdit_y5"));
        lineEdit_y5->setGeometry(QRect(240, 180, 80, 20));
        label_x1_16 = new QLabel(groupBox_nodeList_2);
        label_x1_16->setObjectName(QString::fromUtf8("label_x1_16"));
        label_x1_16->setGeometry(QRect(20, 180, 50, 20));
        label_x1_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x5 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x5->setObjectName(QString::fromUtf8("lineEdit_x5"));
        lineEdit_x5->setGeometry(QRect(80, 180, 80, 20));
        label_x1_17 = new QLabel(groupBox_nodeList_2);
        label_x1_17->setObjectName(QString::fromUtf8("label_x1_17"));
        label_x1_17->setGeometry(QRect(180, 210, 50, 20));
        label_x1_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y6 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y6->setObjectName(QString::fromUtf8("lineEdit_y6"));
        lineEdit_y6->setGeometry(QRect(240, 210, 80, 20));
        label_x1_18 = new QLabel(groupBox_nodeList_2);
        label_x1_18->setObjectName(QString::fromUtf8("label_x1_18"));
        label_x1_18->setGeometry(QRect(20, 210, 50, 20));
        label_x1_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x6 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x6->setObjectName(QString::fromUtf8("lineEdit_x6"));
        lineEdit_x6->setGeometry(QRect(80, 210, 80, 20));
        label_x1_19 = new QLabel(groupBox_nodeList_2);
        label_x1_19->setObjectName(QString::fromUtf8("label_x1_19"));
        label_x1_19->setGeometry(QRect(180, 240, 50, 20));
        label_x1_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y7 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_y7->setObjectName(QString::fromUtf8("lineEdit_y7"));
        lineEdit_y7->setGeometry(QRect(240, 240, 80, 20));
        label_x1_20 = new QLabel(groupBox_nodeList_2);
        label_x1_20->setObjectName(QString::fromUtf8("label_x1_20"));
        label_x1_20->setGeometry(QRect(20, 240, 50, 20));
        label_x1_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x7 = new QLineEdit(groupBox_nodeList_2);
        lineEdit_x7->setObjectName(QString::fromUtf8("lineEdit_x7"));
        lineEdit_x7->setGeometry(QRect(80, 240, 80, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1042, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\243\201\345\211\252\357\274\232\345\244\232\350\276\271\345\275\242\350\243\201\345\211\252", nullptr));
        groupBox_set->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        pushButton_color_2->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271\351\242\234\350\211\262", nullptr));
        pushButton_color->setText(QCoreApplication::translate("MainWindow", "\350\243\201\345\211\252\345\211\215\351\242\234\350\211\262", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        groupBox_nodeList->setTitle(QCoreApplication::translate("MainWindow", "\350\243\201\345\211\252\347\252\227\345\217\243", nullptr));
        lineEdit_x->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        label_x0->setText(QCoreApplication::translate("MainWindow", "\345\267\246\344\270\212\350\247\222x\357\274\232", nullptr));
        label_x1->setText(QCoreApplication::translate("MainWindow", "\345\267\246\344\270\212\350\247\222y\357\274\232", nullptr));
        lineEdit_y->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        label_x1_8->setText(QCoreApplication::translate("MainWindow", "\345\256\275\345\272\246w\357\274\232", nullptr));
        lineEdit_w->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_x1_10->setText(QCoreApplication::translate("MainWindow", "\351\253\230\345\272\246h\357\274\232", nullptr));
        lineEdit_h->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        pushButton_color_3->setText(QCoreApplication::translate("MainWindow", "\350\243\201\345\211\252\345\220\216\351\242\234\350\211\262", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\244\232\350\276\271\345\275\242\345\217\202\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\241\266\347\202\271\344\270\252\346\225\260\357\274\232", nullptr));
        lineEdit_n->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        groupBox_nodeList_2->setTitle(QCoreApplication::translate("MainWindow", "\345\244\232\350\276\271\345\275\242\351\241\266\347\202\271\345\235\220\346\240\207", nullptr));
        lineEdit_x0->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_x0_2->setText(QCoreApplication::translate("MainWindow", "x0\357\274\232", nullptr));
        label_y0->setText(QCoreApplication::translate("MainWindow", "y0\357\274\232", nullptr));
        lineEdit_y0->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_x1_5->setText(QCoreApplication::translate("MainWindow", "y1\357\274\232", nullptr));
        lineEdit_y1->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_x1_2->setText(QCoreApplication::translate("MainWindow", "x1\357\274\232", nullptr));
        lineEdit_x1->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        label_x1_7->setText(QCoreApplication::translate("MainWindow", "y2\357\274\232", nullptr));
        lineEdit_y2->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        label_x1_9->setText(QCoreApplication::translate("MainWindow", "x2\357\274\232", nullptr));
        lineEdit_x2->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_x1_11->setText(QCoreApplication::translate("MainWindow", "y3\357\274\232", nullptr));
        lineEdit_y3->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_x1_12->setText(QCoreApplication::translate("MainWindow", "x3\357\274\232", nullptr));
        lineEdit_x3->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_x1_13->setText(QCoreApplication::translate("MainWindow", "y4\357\274\232", nullptr));
        lineEdit_y4->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        label_x1_14->setText(QCoreApplication::translate("MainWindow", "x4\357\274\232", nullptr));
        lineEdit_x4->setText(QCoreApplication::translate("MainWindow", "210", nullptr));
        label_x1_15->setText(QCoreApplication::translate("MainWindow", "y5\357\274\232", nullptr));
        lineEdit_y5->setText(QCoreApplication::translate("MainWindow", "210", nullptr));
        label_x1_16->setText(QCoreApplication::translate("MainWindow", "x5\357\274\232", nullptr));
        lineEdit_x5->setText(QCoreApplication::translate("MainWindow", "400", nullptr));
        label_x1_17->setText(QCoreApplication::translate("MainWindow", "y6\357\274\232", nullptr));
        lineEdit_y6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x1_18->setText(QCoreApplication::translate("MainWindow", "x6\357\274\232", nullptr));
        lineEdit_x6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x1_19->setText(QCoreApplication::translate("MainWindow", "y7\357\274\232", nullptr));
        lineEdit_y7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x1_20->setText(QCoreApplication::translate("MainWindow", "x7\357\274\232", nullptr));
        lineEdit_x7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
