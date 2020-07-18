#include "login.h"
#include "data.h"

login::login(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btn_login,SIGNAL(clicked()),this,SLOT(logi()));
	connect(ui.btn_sign, SIGNAL(clicked()), this, SLOT(sign()));
}

login::~login()
{
}

void login::logi()
{
	if (ui.rbtn_admin->isChecked())
	{
		for (int i = 0; i < admin_num; i++)
		{
			if (peo_admin[i].name == ui.edit_account->text() && peo_admin[i].key == ui.edit_key->text())
			{
				ui.btn_login->setStyleSheet("color: rgb(0,0,255);");
				ui.btn_login->setText("login successfully");
			}
		}
		status = 1;
	}
	else if (ui.rbtn_sg->isChecked())
	{
		for (int i = 0; i < sg_num; i++)
		{
			if (peo_sg[i].name == ui.edit_account->text() && peo_sg[i].key == ui.edit_key->text())
			{
				ui.btn_login->setStyleSheet("color: rgb(0,0,255);");
				ui.btn_login->setText("login successfully");
			}
		}
		status = 2;
	}
	else if (ui.rbtn_tg->isChecked())
	{
		for (int i = 0; i < tg_num; i++)
		{
			if (peo_tg[i].name == ui.edit_account->text()&&peo_tg[i].key==ui.edit_key->text())
			{
				ui.btn_login->setStyleSheet("color: rgb(0,0,255);");
				ui.btn_login->setText("successfully");
			}
		}
		status = 3;
	}
}

void login::sign()
{
	//¹ÜÀíÔ±
	if (ui.rbtn_admin->isChecked())
	{
		peo_admin[admin_num].key = ui.edit_key->text();
		peo_admin[admin_num].name = ui.edit_account->text();
		admin_num++;
	}
	else if (ui.rbtn_sg->isChecked())
	{
		peo_sg[sg_num].key = ui.edit_key->text();
		peo_sg[sg_num].name = ui.edit_account->text();
		sg_num++;
	}
	else if (ui.rbtn_tg->isChecked())
	{
		peo_tg[tg_num].key = ui.edit_key->text();
		peo_tg[tg_num].name = ui.edit_account->text();
		tg_num++;
	}
	ui.btn_sign->setStyleSheet("color: rgb(0,0,255);");
	ui.btn_sign->setText(QString::fromLocal8Bit("successfully"));
}

