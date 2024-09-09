/********************************************************************************
** Form generated from reading UI file 'demonstration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMONSTRATION_H
#define UI_DEMONSTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Demonstration
{
public:
    QLabel *label;
    QWidget *widget;

    void setupUi(QDialog *Demonstration)
    {
        if (Demonstration->objectName().isEmpty())
            Demonstration->setObjectName(QString::fromUtf8("Demonstration"));
        Demonstration->resize(1254, 522);
        label = new QLabel(Demonstration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(950, 0, 311, 191));
        widget = new QWidget(Demonstration);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 961, 720));

        retranslateUi(Demonstration);

        QMetaObject::connectSlotsByName(Demonstration);
    } // setupUi

    void retranslateUi(QDialog *Demonstration)
    {
        Demonstration->setWindowTitle(QCoreApplication::translate("Demonstration", "\320\224\320\265\320\274\320\276\320\275\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("Demonstration", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\245\320\265\321\210-\321\202\320\260\320\261\320\273\320\270\321\206\320\260</span></p><p><span style=\" font-size:12pt;\">\320\275\320\260 \320\264\320\260\320\275\320\275\320\276\320\271 \320\260\320\275\320\270\320\274\320\260\321\206\320\270\320\270 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\260</span></p><p><span style=\" font-size:12pt;\">\321\205\320\265\321\210-\321\204\321\203\320\275\320\272\321\206\320\270\321\217, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\321\217\320\265\321\202 \321\217\321\207\320\265\320\271\320\272\321\203</span></p><p><span style=\" font-size:12pt;\">\320\264\320\273\321\217 \321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\321\203\321\202\320\265\320\274 \320\264\320\265\320\273\320\265\320\275\320\270"
                        "\321\217</span></p><p><span style=\" font-size:12pt;\">\321\206\320\265\320\273\320\276\321\207\320\270\321\201\320\273\320\265\320\275\320\275\320\276\320\263\320\276 \321\201 \320\275\320\260\320\270\320\274\320\265\320\275\321\214\321\210\320\270\320\274 \320\276\321\201\321\202\320\260\321\202\320\272\320\276\320\274</span></p><p><span style=\" font-size:12pt;\">\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\275\320\260 \320\272\320\273\321\216\321\207 (\320\276\321\202 0 \320\264\320\276 12)</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Demonstration: public Ui_Demonstration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMONSTRATION_H
