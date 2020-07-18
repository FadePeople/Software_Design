#include "MainWidget.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QObject>
#pragma execution_character_set("utf-8")


void SetCodec(QApplication &app)
{
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");//���ñ����ʽΪUTF-8
	QTextCodec::setCodecForLocale(codec);//���������Ҫ�������úͶԱ����ļ�ϵͳ��дʱ���Ĭ�ϱ����ʽ��
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	SetCodec(a);
    MainWidget w;
	w.setWindowTitle(QObject::tr("��־��Ͷ��ϵͳ"));
    w.show();
    return a.exec();
}
