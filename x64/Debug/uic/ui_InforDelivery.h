/********************************************************************************
** Form generated from reading UI file 'InforDelivery.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORDELIVERY_H
#define UI_INFORDELIVERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InforDelivery
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_4;
    QPushButton *deli;

    void setupUi(QWidget *InforDelivery)
    {
        if (InforDelivery->objectName().isEmpty())
            InforDelivery->setObjectName(QString::fromUtf8("InforDelivery"));
        InforDelivery->resize(811, 561);
        label = new QLabel(InforDelivery);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 281, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 24pt \"Arial\";"));
        textEdit = new QTextEdit(InforDelivery);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 160, 741, 371));
        label_4 = new QLabel(InforDelivery);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 100, 121, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        deli = new QPushButton(InforDelivery);
        deli->setObjectName(QString::fromUtf8("deli"));
        deli->setGeometry(QRect(640, 70, 131, 71));
        deli->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";"));

        retranslateUi(InforDelivery);

        QMetaObject::connectSlotsByName(InforDelivery);
    } // setupUi

    void retranslateUi(QWidget *InforDelivery)
    {
        InforDelivery->setWindowTitle(QCoreApplication::translate("InforDelivery", "InforDelivery", nullptr));
        label->setText(QCoreApplication::translate("InforDelivery", "  \345\237\272\346\234\254\344\277\241\346\201\257\345\217\221\345\270\203", nullptr));
        label_4->setText(QCoreApplication::translate("InforDelivery", "\345\217\221\345\270\203\345\206\205\345\256\271\357\274\232", nullptr));
        deli->setText(QCoreApplication::translate("InforDelivery", "\347\241\256\350\256\244\345\217\221\345\270\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InforDelivery: public Ui_InforDelivery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORDELIVERY_H
