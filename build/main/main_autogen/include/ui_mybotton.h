/********************************************************************************
** Form generated from reading UI file 'mybotton.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYBOTTON_H
#define UI_MYBOTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyBotton
{
public:

    void setupUi(QWidget *MyBotton)
    {
        if (MyBotton->objectName().isEmpty())
            MyBotton->setObjectName(QString::fromUtf8("MyBotton"));
        MyBotton->resize(400, 300);

        retranslateUi(MyBotton);

        QMetaObject::connectSlotsByName(MyBotton);
    } // setupUi

    void retranslateUi(QWidget *MyBotton)
    {
        MyBotton->setWindowTitle(QCoreApplication::translate("MyBotton", "MyBotton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyBotton: public Ui_MyBotton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYBOTTON_H
