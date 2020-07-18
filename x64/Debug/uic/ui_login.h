/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QRadioButton *rbtn_tg;
    QRadioButton *rbtn_sg;
    QRadioButton *rbtn_admin;
    QLabel *label_2;
    QLineEdit *edit_key;
    QLineEdit *edit_account;
    QLabel *label_3;
    QPushButton *btn_sign;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *btn_login;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(455, 325);
        rbtn_tg = new QRadioButton(login);
        rbtn_tg->setObjectName(QString::fromUtf8("rbtn_tg"));
        rbtn_tg->setGeometry(QRect(60, 40, 115, 19));
        rbtn_sg = new QRadioButton(login);
        rbtn_sg->setObjectName(QString::fromUtf8("rbtn_sg"));
        rbtn_sg->setGeometry(QRect(200, 40, 115, 19));
        rbtn_admin = new QRadioButton(login);
        rbtn_admin->setObjectName(QString::fromUtf8("rbtn_admin"));
        rbtn_admin->setGeometry(QRect(330, 40, 115, 19));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 150, 71, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Microsoft YaHei\";"));
        edit_key = new QLineEdit(login);
        edit_key->setObjectName(QString::fromUtf8("edit_key"));
        edit_key->setGeometry(QRect(120, 140, 241, 51));
        edit_account = new QLineEdit(login);
        edit_account->setObjectName(QString::fromUtf8("edit_account"));
        edit_account->setGeometry(QRect(120, 80, 241, 51));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 80, 71, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Microsoft YaHei\";"));
        btn_sign = new QPushButton(login);
        btn_sign->setObjectName(QString::fromUtf8("btn_sign"));
        btn_sign->setGeometry(QRect(260, 260, 151, 41));
        btn_sign->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Microsoft YaHei\";"));
        checkBox = new QCheckBox(login);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(80, 220, 91, 19));
        checkBox_2 = new QCheckBox(login);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(240, 220, 91, 19));
        btn_login = new QPushButton(login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(40, 260, 151, 41));
        btn_login->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Microsoft YaHei\";"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        rbtn_tg->setText(QCoreApplication::translate("login", "\347\250\277\344\273\266\344\275\234\350\200\205", nullptr));
        rbtn_sg->setText(QCoreApplication::translate("login", "\345\256\241\347\250\277\344\270\223\345\256\266", nullptr));
        rbtn_admin->setText(QCoreApplication::translate("login", "\347\256\241\347\220\206\345\221\230", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\350\264\246\345\217\267\357\274\232", nullptr));
        btn_sign->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        checkBox->setText(QCoreApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        checkBox_2->setText(QCoreApplication::translate("login", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        btn_login->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
