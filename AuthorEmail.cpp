#include "AuthorEmail.h"
#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include "data.h"
#pragma execution_character_set("utf-8")

AuthorEmail::AuthorEmail(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.td, SIGNAL(clicked()),this, SLOT(toudi()));
}

AuthorEmail::~AuthorEmail()
{

}

//���Ͷ��
void AuthorEmail::toudi()
{
	//���ı�������ȡ������������
	QFile file("test.txt");//�ļ�����
	if (!file.open(QFile::WriteOnly | QFile::Text))  //����ļ��Ƿ��
	{
		QMessageBox::information(this, "Error Message", "Please Select a Text File!");
		return;
	}
	QTextStream out(&file); //����д���ļ�
	out << ui.edit_data->toPlainText();

	QString str = "";
	str += "Email_Name:"+ui.edit_name->toPlainText() +"	People_Name:"+ ui.edit_peo->toPlainText();
	list << str;
	QMessageBox::information(this, "��ϲ", "���ѳɹ�Ͷ�ݣ�");
}
