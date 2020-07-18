/********************************************************************************
** Form generated from reading UI file 'AuthorEmail.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHOREMAIL_H
#define UI_AUTHOREMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorEmail
{
public:
    QLabel *label;
    QTextEdit *edit_name;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *edit_data;
    QPushButton *td;
    QLabel *label_4;
    QTextEdit *edit_peo;

    void setupUi(QWidget *AuthorEmail)
    {
        if (AuthorEmail->objectName().isEmpty())
            AuthorEmail->setObjectName(QString::fromUtf8("AuthorEmail"));
        AuthorEmail->resize(816, 566);
        label = new QLabel(AuthorEmail);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 281, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 24pt \"Arial\";"));
        edit_name = new QTextEdit(AuthorEmail);
        edit_name->setObjectName(QString::fromUtf8("edit_name"));
        edit_name->setGeometry(QRect(150, 120, 201, 51));
        label_2 = new QLabel(AuthorEmail);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        label_3 = new QLabel(AuthorEmail);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 170, 111, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        edit_data = new QTextEdit(AuthorEmail);
        edit_data->setObjectName(QString::fromUtf8("edit_data"));
        edit_data->setGeometry(QRect(150, 190, 601, 351));
        td = new QPushButton(AuthorEmail);
        td->setObjectName(QString::fromUtf8("td"));
        td->setGeometry(QRect(640, 120, 111, 51));
        td->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"background-color: rgb(0, 255, 127);"));
        label_4 = new QLabel(AuthorEmail);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 120, 81, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        edit_peo = new QTextEdit(AuthorEmail);
        edit_peo->setObjectName(QString::fromUtf8("edit_peo"));
        edit_peo->setGeometry(QRect(450, 120, 171, 51));

        retranslateUi(AuthorEmail);

        QMetaObject::connectSlotsByName(AuthorEmail);
    } // setupUi

    void retranslateUi(QWidget *AuthorEmail)
    {
        AuthorEmail->setWindowTitle(QCoreApplication::translate("AuthorEmail", "AuthorEmail", nullptr));
        label->setText(QCoreApplication::translate("AuthorEmail", "  \347\250\277\344\273\266\344\275\234\350\200\205\344\275\277\347\224\250", nullptr));
        label_2->setText(QCoreApplication::translate("AuthorEmail", "\347\250\277\344\273\266\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AuthorEmail", "\347\250\277\344\273\266\345\206\205\345\256\271\357\274\232", nullptr));
        td->setText(QCoreApplication::translate("AuthorEmail", "\346\212\225\351\200\222", nullptr));
        label_4->setText(QCoreApplication::translate("AuthorEmail", "\346\212\225\347\250\277\344\272\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorEmail: public Ui_AuthorEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHOREMAIL_H
