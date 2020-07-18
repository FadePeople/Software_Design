/********************************************************************************
** Form generated from reading UI file 'ExpertEmail.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERTEMAIL_H
#define UI_EXPERTEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpertEmail
{
public:
    QLabel *label;
    QTextEdit *edit_data;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *open_td;
    QPushButton *over_td;
    QPushButton *over_td_2;
    QComboBox *comboBox;

    void setupUi(QWidget *ExpertEmail)
    {
        if (ExpertEmail->objectName().isEmpty())
            ExpertEmail->setObjectName(QString::fromUtf8("ExpertEmail"));
        ExpertEmail->resize(810, 589);
        label = new QLabel(ExpertEmail);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 30, 281, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 24pt \"Arial\";"));
        edit_data = new QTextEdit(ExpertEmail);
        edit_data->setObjectName(QString::fromUtf8("edit_data"));
        edit_data->setGeometry(QRect(160, 200, 591, 361));
        label_3 = new QLabel(ExpertEmail);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 111, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        label_4 = new QLabel(ExpertEmail);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 130, 111, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        open_td = new QPushButton(ExpertEmail);
        open_td->setObjectName(QString::fromUtf8("open_td"));
        open_td->setGeometry(QRect(360, 130, 151, 51));
        open_td->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"background-color: rgb(0, 255, 0);"));
        over_td = new QPushButton(ExpertEmail);
        over_td->setObjectName(QString::fromUtf8("over_td"));
        over_td->setGeometry(QRect(530, 130, 101, 51));
        over_td->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"background-color: rgb(0, 255, 0);"));
        over_td_2 = new QPushButton(ExpertEmail);
        over_td_2->setObjectName(QString::fromUtf8("over_td_2"));
        over_td_2->setGeometry(QRect(650, 130, 101, 51));
        over_td_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"background-color: rgb(255, 0, 0);"));
        comboBox = new QComboBox(ExpertEmail);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 130, 151, 51));

        retranslateUi(ExpertEmail);

        QMetaObject::connectSlotsByName(ExpertEmail);
    } // setupUi

    void retranslateUi(QWidget *ExpertEmail)
    {
        ExpertEmail->setWindowTitle(QCoreApplication::translate("ExpertEmail", "ExpertEmail", nullptr));
        label->setText(QCoreApplication::translate("ExpertEmail", "  \345\256\241\347\250\277\344\270\223\345\256\266\344\275\277\347\224\250", nullptr));
        label_3->setText(QCoreApplication::translate("ExpertEmail", "\347\250\277\344\273\266\345\206\205\345\256\271\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ExpertEmail", "\345\276\205\345\256\241\347\250\277\344\273\266\357\274\232", nullptr));
        open_td->setText(QCoreApplication::translate("ExpertEmail", "\346\211\223\345\274\200\345\276\205\345\256\241\347\250\277\344\273\266", nullptr));
        over_td->setText(QCoreApplication::translate("ExpertEmail", "\345\275\225\347\224\250", nullptr));
        over_td_2->setText(QCoreApplication::translate("ExpertEmail", "\344\270\215\345\275\225\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpertEmail: public Ui_ExpertEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERTEMAIL_H
