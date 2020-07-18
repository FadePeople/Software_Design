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
			QMessageBox::information(this, "发布失败", "对不起，您不是管理员，无法发布信息！");
		}
		else
		{
			QMessageBox::information(this, "发布成功", "您已成功发布消息！");
		}
	});
}

InforDelivery::~InforDelivery()
{

}
