#include "MainWidget.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QObject>
#pragma execution_character_set("utf-8")


void SetCodec(QApplication &app)
{
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");//设置编码格式为UTF-8
	QTextCodec::setCodecForLocale(codec);//这个函数主要用于设置和对本地文件系统读写时候的默认编码格式。
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	SetCodec(a);
    MainWidget w;
	w.setWindowTitle(QObject::tr("杂志社投稿系统"));
    w.show();
    return a.exec();
}
