#include "InforDelivery.h"
#include "data.h"
#pragma execution_character_set("utf-8")

InforDelivery::InforDelivery(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.deli, &QPushButton::clicked, this, [=]()
	{
		if (status != 1)
		{
			QMessageBox::information(this, "����ʧ��", "�Բ��������ǹ���Ա���޷�������Ϣ��");
		}
		else
		{
			QMessageBox::information(this, "�����ɹ�", "���ѳɹ�������Ϣ��");
		}
	});
}

InforDelivery::~InforDelivery()
{

}
