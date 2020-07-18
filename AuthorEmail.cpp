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

//点击投稿
void AuthorEmail::toudi()
{
	//将文本框数据取出并按行排列
	QFile file("test.txt");//文件命名
	if (!file.open(QFile::WriteOnly | QFile::Text))  //检测文件是否打开
	{
		QMessageBox::information(this, "Error Message", "Please Select a Text File!");
		return;
	}
	QTextStream out(&file); //分行写入文件
	out << ui.edit_data->toPlainText();

	QString str = "";
	str += "Email_Name:"+ui.edit_name->toPlainText() +"	People_Name:"+ ui.edit_peo->toPlainText();
	list << str;
	QMessageBox::information(this, "恭喜", "您已成功投递！");
}
