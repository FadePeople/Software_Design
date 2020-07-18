#pragma once

#include <QWidget>
#include "ui_MemberManage.h"

class MemberManage : public QWidget
{
	Q_OBJECT

public:
	MemberManage(QWidget *parent = Q_NULLPTR);
	~MemberManage();

private:
	Ui::MemberManage ui;
};
