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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "figurewidget.h"
#include "textwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_C;
    QAction *action_B;
    QAction *action_T;
    QAction *action_S;
    QAction *action_R;
    QAction *action_G;
    QAction *action_D;
    QAction *action_I;
    QAction *action_U;
    QAction *action_L;
    QWidget *centralwidget;
    QSplitter *splitter;
    textWidget *widget1;
    figureWidget *widget2;
    QMenuBar *menubar;
    QMenu *menu_S;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QString::fromUtf8("action_C"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/images/show.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_C->setIcon(icon);
        action_B = new QAction(MainWindow);
        action_B->setObjectName(QString::fromUtf8("action_B"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/images/rubberband.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_B->setIcon(icon1);
        action_T = new QAction(MainWindow);
        action_T->setObjectName(QString::fromUtf8("action_T"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/images/translate.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_T->setIcon(icon2);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/images/scale.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon3);
        action_R = new QAction(MainWindow);
        action_R->setObjectName(QString::fromUtf8("action_R"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/images/rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_R->setIcon(icon4);
        action_G = new QAction(MainWindow);
        action_G->setObjectName(QString::fromUtf8("action_G"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/images/gravity.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_G->setIcon(icon5);
        action_D = new QAction(MainWindow);
        action_D->setObjectName(QString::fromUtf8("action_D"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/images/directional.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_D->setIcon(icon6);
        action_I = new QAction(MainWindow);
        action_I->setObjectName(QString::fromUtf8("action_I"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/images/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_I->setIcon(icon7);
        action_U = new QAction(MainWindow);
        action_U->setObjectName(QString::fromUtf8("action_U"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/images/ruler.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_U->setIcon(icon8);
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QString::fromUtf8("action_L"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/images/guide.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_L->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 0, 0));
        splitter->setOrientation(Qt::Horizontal);
        widget1 = new textWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        splitter->addWidget(widget1);
        widget2 = new figureWidget(splitter);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        splitter->addWidget(widget2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu_S = new QMenu(menubar);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        menu_S->setTearOffEnabled(false);
        menu_S->setToolTipsVisible(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_S->menuAction());
        menu_S->addAction(action_C);
        menu_S->addAction(action_B);
        menu_S->addAction(action_T);
        menu_S->addAction(action_S);
        menu_S->addAction(action_R);
        menu_S->addAction(action_G);
        menu_S->addAction(action_D);
        menu_S->addAction(action_I);
        menu_S->addAction(action_U);
        menu_S->addAction(action_L);
        toolBar->addAction(action_C);
        toolBar->addAction(action_B);
        toolBar->addAction(action_T);
        toolBar->addAction(action_S);
        toolBar->addAction(action_R);
        toolBar->addAction(action_G);
        toolBar->addAction(action_D);
        toolBar->addAction(action_I);
        toolBar->addAction(action_U);
        toolBar->addAction(action_L);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\272\244\344\272\222\345\274\217\347\273\230\345\233\276", nullptr));
        action_C->setText(QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\346\230\276\347\244\272(&C)", nullptr));
        action_B->setText(QCoreApplication::translate("MainWindow", "\346\251\241\347\232\256\347\255\213(&B)", nullptr));
        action_T->setText(QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250(&T)", nullptr));
        action_S->setText(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276(&S)", nullptr));
        action_R->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254(&R)", nullptr));
        action_G->setText(QCoreApplication::translate("MainWindow", "\345\274\225\345\212\233\345\234\272(&G)", nullptr));
        action_D->setText(QCoreApplication::translate("MainWindow", "\345\256\232\345\220\221(&D)", nullptr));
        action_I->setText(QCoreApplication::translate("MainWindow", "\347\275\221\346\240\274(&I)", nullptr));
        action_U->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\260\272(&U)", nullptr));
        action_L->setText(QCoreApplication::translate("MainWindow", "\345\274\225\345\257\274\347\272\277(&L)", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\346\274\224\347\244\272(&S)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
