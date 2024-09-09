/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(511, 223);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 0, 371, 91));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 151, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 100, 141, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 100, 141, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 160, 71, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 511, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\232\321\203\321\200\321\201\320\276\320\262\320\276\320\271 \320\277\321\200\320\276\320\265\320\272\321\202 \320\277\320\276 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\265 &quot;\320\220\321\200\321\205\320\270\321\202\320\265\320\272\321\202\321\203\321\200\320\260 \320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260 \320\264\320\260\320\275\320\275\321\213\321\205&quot;</p><p align=\"center\"><span style=\" font-size:20pt;\">\320\245\320\265\321\210-\321\202\320\260\320\261\320\273\320\270\321\206\321\213. \320\234\320\265\321\202\320\276\320\264 \321\206\320\265\320\277\320\276\321\207\320\265\320\272</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\265\320\275\320\270\320\265 \321\202\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276\n"
" \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\264\320\265\320\274\320\276\320\275\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\271\321\202\320\270 \321\202\320\265\321\201\321\202 \320\277\320\276 \321\202\320\265\320\274\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
