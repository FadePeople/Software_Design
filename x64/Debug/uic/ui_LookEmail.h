/********************************************************************************
** Form generated from reading UI file 'LookEmail.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOKEMAIL_H
#define UI_LOOKEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LookEmail
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *list_ok;
    QListWidget *list_no;

    void setupUi(QWidget *LookEmail)
    {
        if (LookEmail->objectName().isEmpty())
            LookEmail->setObjectName(QString::fromUtf8("LookEmail"));
        LookEmail->resize(816, 565);
        label = new QLabel(LookEmail);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 10, 281, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 24pt \"Arial\";"));
        label_2 = new QLabel(LookEmail);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 90, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"color: rgb(255, 0, 0);"));
        label_3 = new QLabel(LookEmail);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 90, 181, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"color: rgb(255, 0, 0);"));
        list_ok = new QListWidget(LookEmail);
        list_ok->setObjectName(QString::fromUtf8("list_ok"));
        list_ok->setGeometry(QRect(40, 130, 351, 411));
        list_no = new QListWidget(LookEmail);
        list_no->setObjectName(QString::fromUtf8("list_no"));
        list_no->setGeometry(QRect(430, 130, 351, 411));

        retranslateUi(LookEmail);

        QMetaObject::connectSlotsByName(LookEmail);
    } // setupUi

    void retranslateUi(QWidget *LookEmail)
    {
        LookEmail->setWindowTitle(QCoreApplication::translate("LookEmail", "LookEmail", nullptr));
        label->setText(QCoreApplication::translate("LookEmail", "  \345\275\225\347\224\250\347\250\277\344\273\266\346\237\245\347\234\213", nullptr));
        label_2->setText(QCoreApplication::translate("LookEmail", "\345\275\225\347\224\250\344\277\241\346\201\257\345\210\227\350\241\250\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("LookEmail", "\346\234\252\345\275\225\347\224\250\344\277\241\346\201\257\345\210\227\350\241\250\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LookEmail: public Ui_LookEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOKEMAIL_H
