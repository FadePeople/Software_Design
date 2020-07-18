/********************************************************************************
** Form generated from reading UI file 'MemberManage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERMANAGE_H
#define UI_MEMBERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberManage
{
public:
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QListWidget *listWidget;
    QPushButton *ok_vip;
    QPushButton *no_vip;

    void setupUi(QWidget *MemberManage)
    {
        if (MemberManage->objectName().isEmpty())
            MemberManage->setObjectName(QString::fromUtf8("MemberManage"));
        MemberManage->resize(816, 565);
        label = new QLabel(MemberManage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 20, 201, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 24pt \"Arial\";"));
        label_4 = new QLabel(MemberManage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 120, 111, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        comboBox = new QComboBox(MemberManage);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 120, 151, 51));
        comboBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";"));
        label_5 = new QLabel(MemberManage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 170, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        listWidget = new QListWidget(MemberManage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(170, 190, 491, 351));
        ok_vip = new QPushButton(MemberManage);
        ok_vip->setObjectName(QString::fromUtf8("ok_vip"));
        ok_vip->setGeometry(QRect(360, 110, 131, 71));
        ok_vip->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";"));
        no_vip = new QPushButton(MemberManage);
        no_vip->setObjectName(QString::fromUtf8("no_vip"));
        no_vip->setGeometry(QRect(530, 110, 131, 71));
        no_vip->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";"));

        retranslateUi(MemberManage);

        QMetaObject::connectSlotsByName(MemberManage);
    } // setupUi

    void retranslateUi(QWidget *MemberManage)
    {
        MemberManage->setWindowTitle(QCoreApplication::translate("MemberManage", "MemberManage", nullptr));
        label->setText(QCoreApplication::translate("MemberManage", "  \344\274\232\345\221\230\347\256\241\347\220\206", nullptr));
        label_4->setText(QCoreApplication::translate("MemberManage", "\344\272\272\345\221\230\345\210\227\350\241\250\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MemberManage", "\344\276\257\345\255\220\347\253\245", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MemberManage", "\344\275\225\351\233\250\346\263\212", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MemberManage", "\346\235\250\346\231\250", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MemberManage", "\346\261\252\346\201\222\350\276\211", nullptr));

        label_5->setText(QCoreApplication::translate("MemberManage", "\344\274\232\345\221\230\345\210\227\350\241\250\357\274\232", nullptr));
        ok_vip->setText(QCoreApplication::translate("MemberManage", "\350\256\276\344\270\272\344\274\232\345\221\230", nullptr));
        no_vip->setText(QCoreApplication::translate("MemberManage", "\345\210\240\351\231\244\344\274\232\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberManage: public Ui_MemberManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERMANAGE_H
