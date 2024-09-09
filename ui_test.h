/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Test
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Test)
    {
        if (Test->objectName().isEmpty())
            Test->setObjectName(QString::fromUtf8("Test"));
        Test->resize(683, 205);
        pushButton = new QPushButton(Test);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 170, 80, 24));
        pushButton_2 = new QPushButton(Test);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 170, 80, 24));
        label = new QLabel(Test);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 661, 141));
        label->setFrameShape(QFrame::Box);
        textEdit = new QTextEdit(Test);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(370, 160, 104, 31));

        retranslateUi(Test);

        QMetaObject::connectSlotsByName(Test);
    } // setupUi

    void retranslateUi(QDialog *Test)
    {
        Test->setWindowTitle(QCoreApplication::translate("Test", "Test", nullptr));
        pushButton->setText(QCoreApplication::translate("Test", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Test", "\320\236\321\202\320\262\320\265\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Test: public Ui_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
