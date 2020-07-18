#include "LookEmail.h"
#include "data.h"

LookEmail::LookEmail(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

LookEmail::~LookEmail()
{

}

void LookEmail::rece_td(QStringList list)
{
	if (flag==1)
		ui.list_ok->insertItems(ok_num, list);
	else if(flag==-1)
		ui.list_no->insertItems(no_num, list);
}