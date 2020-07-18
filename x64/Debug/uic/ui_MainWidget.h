/********************************************************************************
** Form generated from reading UI file 'MainWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidgetClass
{
public:
    QWidget *centralWidget;
    QPushButton *btn_1;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_2;
    QPushButton *btn_6;
    QPushButton *btn_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWidgetClass)
    {
        if (MainWidgetClass->objectName().isEmpty())
            MainWidgetClass->setObjectName(QString::fromUtf8("MainWidgetClass"));
        MainWidgetClass->resize(918, 660);
        centralWidget = new QWidget(MainWidgetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btn_1 = new QPushButton(centralWidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(20, 140, 291, 241));
        btn_1->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
""));
        btn_4 = new QPushButton(centralWidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(20, 380, 291, 251));
        btn_4->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        btn_5 = new QPushButton(centralWidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(310, 380, 291, 251));
        btn_5->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        btn_2 = new QPushButton(centralWidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(310, 140, 291, 241));
        btn_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        btn_6 = new QPushButton(centralWidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(600, 380, 291, 251));
        btn_6->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        btn_3 = new QPushButton(centralWidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(600, 140, 291, 241));
        btn_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 30, 321, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 24pt \"Arial\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 60, 241, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial\";\n"
"text-decoration: underline;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 30, 121, 81));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/MainWidget/xh.jpg);\n"
""));
        MainWidgetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWidgetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWidgetClass->setStatusBar(statusBar);

        retranslateUi(MainWidgetClass);

        QMetaObject::connectSlotsByName(MainWidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWidgetClass)
    {
        MainWidgetClass->setWindowTitle(QCoreApplication::translate("MainWidgetClass", "MainWidget", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWidgetClass", "\346\212\225\347\250\277\345\256\241\347\250\277\351\241\273\347\237\245", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWidgetClass", "\345\256\241\347\250\277\344\270\223\345\256\266\344\275\277\347\224\250", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWidgetClass", "\345\275\225\347\224\250\347\250\277\344\273\266\346\237\245\347\234\213", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWidgetClass", "\344\277\241\346\201\257\345\217\221\345\270\203", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWidgetClass", "\344\274\232\345\221\230\347\256\241\347\220\206", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWidgetClass", "\347\250\277\344\273\266\344\275\234\350\200\205\344\275\277\347\224\250", nullptr));
        label->setText(QCoreApplication::translate("MainWidgetClass", "  \346\235\202\345\277\227\347\244\276\346\212\225\347\250\277\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidgetClass", "\350\200\203\350\257\225\350\256\251\344\275\240\345\277\203\347\242\216\357\274\214\345\206\231\344\275\234\346\223\246\345\271\262\344\275\240\347\232\204\347\234\274\346\263\252", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidgetClass: public Ui_MainWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
