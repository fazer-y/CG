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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <layoutwidget.h>
#include <projectionwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_set;
    QGroupBox *groupBox_projection;
    QRadioButton *radioButton_perspective;
    QRadioButton *radioButton_parallel;
    QGroupBox *groupBox_vrp;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_vrpx;
    QLineEdit *lineEdit_vrpy;
    QLineEdit *lineEdit_vrpz;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_theta;
    QLineEdit *lineEdit_phi;
    QLineEdit *lineEdit_delta;
    QGroupBox *groupBox_prp;
    QLabel *label_9;
    QLineEdit *lineEdit_prpu;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_prpv;
    QLineEdit *lineEdit_prpn;
    QGroupBox *groupBox_6;
    QLabel *label_10;
    QLineEdit *lineEdit_cwv;
    QLabel *label_11;
    QLineEdit *lineEdit_cwu;
    QPushButton *pushButton_apply;
    QPushButton *pushButton_restore;
    QSplitter *splitter;
    layoutWidget *widget_1;
    projectionWidget *widget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_set = new QGroupBox(centralwidget);
        groupBox_set->setObjectName(QString::fromUtf8("groupBox_set"));
        groupBox_set->setGeometry(QRect(10, 10, 313, 611));
        groupBox_set->setStyleSheet(QString::fromUtf8(""));
        groupBox_projection = new QGroupBox(groupBox_set);
        groupBox_projection->setObjectName(QString::fromUtf8("groupBox_projection"));
        groupBox_projection->setGeometry(QRect(10, 30, 291, 61));
        radioButton_perspective = new QRadioButton(groupBox_projection);
        radioButton_perspective->setObjectName(QString::fromUtf8("radioButton_perspective"));
        radioButton_perspective->setGeometry(QRect(20, 30, 97, 22));
        radioButton_parallel = new QRadioButton(groupBox_projection);
        radioButton_parallel->setObjectName(QString::fromUtf8("radioButton_parallel"));
        radioButton_parallel->setGeometry(QRect(160, 30, 97, 22));
        groupBox_vrp = new QGroupBox(groupBox_set);
        groupBox_vrp->setObjectName(QString::fromUtf8("groupBox_vrp"));
        groupBox_vrp->setGeometry(QRect(10, 100, 291, 61));
        label = new QLabel(groupBox_vrp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 21, 16));
        label_2 = new QLabel(groupBox_vrp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 30, 21, 16));
        label_3 = new QLabel(groupBox_vrp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 30, 16, 16));
        lineEdit_vrpx = new QLineEdit(groupBox_vrp);
        lineEdit_vrpx->setObjectName(QString::fromUtf8("lineEdit_vrpx"));
        lineEdit_vrpx->setGeometry(QRect(30, 30, 51, 23));
        lineEdit_vrpy = new QLineEdit(groupBox_vrp);
        lineEdit_vrpy->setObjectName(QString::fromUtf8("lineEdit_vrpy"));
        lineEdit_vrpy->setGeometry(QRect(130, 30, 51, 23));
        lineEdit_vrpz = new QLineEdit(groupBox_vrp);
        lineEdit_vrpz->setObjectName(QString::fromUtf8("lineEdit_vrpz"));
        lineEdit_vrpz->setGeometry(QRect(230, 30, 51, 23));
        groupBox_4 = new QGroupBox(groupBox_set);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 180, 291, 141));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 41, 16));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 70, 41, 16));
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 110, 41, 16));
        label_6->setLayoutDirection(Qt::RightToLeft);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_theta = new QLineEdit(groupBox_4);
        lineEdit_theta->setObjectName(QString::fromUtf8("lineEdit_theta"));
        lineEdit_theta->setGeometry(QRect(60, 30, 111, 23));
        lineEdit_phi = new QLineEdit(groupBox_4);
        lineEdit_phi->setObjectName(QString::fromUtf8("lineEdit_phi"));
        lineEdit_phi->setGeometry(QRect(60, 70, 111, 23));
        lineEdit_delta = new QLineEdit(groupBox_4);
        lineEdit_delta->setObjectName(QString::fromUtf8("lineEdit_delta"));
        lineEdit_delta->setGeometry(QRect(60, 110, 111, 23));
        groupBox_prp = new QGroupBox(groupBox_set);
        groupBox_prp->setObjectName(QString::fromUtf8("groupBox_prp"));
        groupBox_prp->setGeometry(QRect(10, 340, 291, 61));
        label_9 = new QLabel(groupBox_prp);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 30, 16, 16));
        lineEdit_prpu = new QLineEdit(groupBox_prp);
        lineEdit_prpu->setObjectName(QString::fromUtf8("lineEdit_prpu"));
        lineEdit_prpu->setGeometry(QRect(30, 30, 51, 23));
        label_7 = new QLabel(groupBox_prp);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 30, 21, 16));
        label_8 = new QLabel(groupBox_prp);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 30, 21, 16));
        lineEdit_prpv = new QLineEdit(groupBox_prp);
        lineEdit_prpv->setObjectName(QString::fromUtf8("lineEdit_prpv"));
        lineEdit_prpv->setGeometry(QRect(130, 30, 51, 23));
        lineEdit_prpn = new QLineEdit(groupBox_prp);
        lineEdit_prpn->setObjectName(QString::fromUtf8("lineEdit_prpn"));
        lineEdit_prpn->setGeometry(QRect(230, 30, 51, 23));
        groupBox_6 = new QGroupBox(groupBox_set);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 420, 291, 61));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 30, 21, 16));
        lineEdit_cwv = new QLineEdit(groupBox_6);
        lineEdit_cwv->setObjectName(QString::fromUtf8("lineEdit_cwv"));
        lineEdit_cwv->setGeometry(QRect(130, 30, 51, 23));
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 30, 21, 16));
        lineEdit_cwu = new QLineEdit(groupBox_6);
        lineEdit_cwu->setObjectName(QString::fromUtf8("lineEdit_cwu"));
        lineEdit_cwu->setGeometry(QRect(30, 30, 51, 23));
        pushButton_apply = new QPushButton(groupBox_set);
        pushButton_apply->setObjectName(QString::fromUtf8("pushButton_apply"));
        pushButton_apply->setGeometry(QRect(50, 500, 80, 24));
        pushButton_restore = new QPushButton(groupBox_set);
        pushButton_restore->setObjectName(QString::fromUtf8("pushButton_restore"));
        pushButton_restore->setGeometry(QRect(180, 500, 80, 24));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(330, 0, 661, 611));
        splitter->setOrientation(Qt::Vertical);
        widget_1 = new layoutWidget(splitter);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        splitter->addWidget(widget_1);
        widget_2 = new projectionWidget(splitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        splitter->addWidget(widget_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3D\346\210\277\345\261\213\347\273\230\345\210\266", nullptr));
        groupBox_set->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\345\256\232", nullptr));
        groupBox_projection->setTitle(QCoreApplication::translate("MainWindow", "\346\212\225\345\275\261\347\261\273\345\236\213", nullptr));
        radioButton_perspective->setText(QCoreApplication::translate("MainWindow", "\351\200\217\350\247\206\346\212\225\345\275\261", nullptr));
        radioButton_parallel->setText(QCoreApplication::translate("MainWindow", "\345\271\263\350\241\214\346\212\225\345\275\261", nullptr));
        groupBox_vrp->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276\345\217\202\350\200\203\347\202\271VRP(WC)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "y\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "z\357\274\232", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276\345\217\202\350\200\203\345\235\220\346\240\207\347\263\273\345\201\217\350\275\254\350\247\222", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "theta\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "phi\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "delta\357\274\232", nullptr));
        groupBox_prp->setTitle(QCoreApplication::translate("MainWindow", "\346\212\225\345\275\261\345\217\202\350\200\203\347\202\271PRP\357\274\210VRC\357\274\211", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "n\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "u\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "v\357\274\232", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\344\270\255\345\277\203CW\357\274\210VRC\357\274\211", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "u\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "v\357\274\232", nullptr));
        pushButton_apply->setText(QCoreApplication::translate("MainWindow", "\345\272\224 \347\224\250", nullptr));
        pushButton_restore->setText(QCoreApplication::translate("MainWindow", "\346\201\242 \345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
