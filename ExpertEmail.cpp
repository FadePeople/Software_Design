#include "ExpertEmail.h"
#include "common.h"
#include "data.h"
#pragma execution_character_set("utf-8")

ExpertEmail::ExpertEmail(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.open_td, SIGNAL(clicked()), this, SLOT(view_data()));
	connect(ui.over_td, SIGNAL(clicked()), this, SLOT(save_data()));
	connect(ui.over_td_2, &QPushButton::clicked, this, [=](){
		flag = -1;
		no_num++;
		emit td_data(list);
	});
}

ExpertEmail::~ExpertEmail()
{

}

void ExpertEmail::view_data()
{
	QString fileName = "test.txt";
	if (!fileName.isEmpty())
	{
		QFile *file = new QFile;
		file->setFileName(fileName);
		bool ok = file->open(QIODevice::ReadOnly);
		if (ok)
		{
			QTextStream in(file);
			ui.edit_data->setText(in.readAll());
			file->close();
			delete file;
		}
		else
		{
			QMessageBox::information(this, "������Ϣ", "���ļ�:" + file->errorString());
			return;
		}
	}
}

//ȷ��¼�ø��
void ExpertEmail::save_data()
{
	QFile myfile("test.txt");//����һ������ļ����ĵ�
	if (myfile.open(QFile::WriteOnly | QFile::Text))//ע��WriteOnly�����ı���д���ʱ���ã�ReadOnly���ڶ��ı������ݵ�ʱ���ã�Truncate��ʾ��ԭ���ļ��е��������
	{
		QTextStream out(&myfile);
		out << ui.edit_data->toPlainText();
	}
	view_data();
	flag = 1;
	ok_num++;
	emit td_data(list);
}
