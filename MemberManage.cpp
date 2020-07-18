#include "MemberManage.h"
#include "data.h"

MemberManage::MemberManage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.ok_vip, &QPushButton::clicked, this, [=]()
	{
		vip_num++;
		QStringList li;
		li << ui.comboBox->currentText();
		ui.listWidget->insertItems(vip_num, li);
	});
	connect(ui.no_vip, &QPushButton::clicked, this, [=]()
	{
		vip_num--;
		ui.listWidget->takeItem(vip_num);
	});
}

MemberManage::~MemberManage()
{

}
