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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QSpinBox *spinBox_ww;
    QLabel *label_2;
    QSpinBox *spinBox_vw;
    QSpinBox *spinBox_wh;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_vh;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 69, 20));
        spinBox_ww = new QSpinBox(centralwidget);
        spinBox_ww->setObjectName(QString::fromUtf8("spinBox_ww"));
        spinBox_ww->setGeometry(QRect(160, 20, 100, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 20, 69, 20));
        spinBox_vw = new QSpinBox(centralwidget);
        spinBox_vw->setObjectName(QString::fromUtf8("spinBox_vw"));
        spinBox_vw->setGeometry(QRect(620, 20, 100, 28));
        spinBox_wh = new QSpinBox(centralwidget);
        spinBox_wh->setObjectName(QString::fromUtf8("spinBox_wh"));
        spinBox_wh->setGeometry(QRect(380, 20, 100, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 20, 69, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(760, 20, 69, 20));
        spinBox_vh = new QSpinBox(centralwidget);
        spinBox_vh->setObjectName(QString::fromUtf8("spinBox_vh"));
        spinBox_vh->setGeometry(QRect(840, 20, 100, 28));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\206\347\252\227\345\217\230\346\215\242", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\256\275\345\272\246\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\247\206\345\217\243\345\256\275\345\272\246\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\351\253\230\345\272\246\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\247\206\345\217\243\351\253\230\345\272\246\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
