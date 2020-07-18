#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_MainWidget.h"
#include "AuthorEmail.h"
#include "ExpertEmail.h"
#include "InforDelivery.h"
#include "login.h"
#include "LookEmail.h"
#include "MemberManage.h"
#include "README.h"

class MainWidget : public QMainWindow
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = Q_NULLPTR);
	void init();
	void InitSlot();

private:
    Ui::MainWidgetClass ui;
	login *login_;
	AuthorEmail *authoremail;
	ExpertEmail *expertemail;
	InforDelivery *infordelivery;
	LookEmail *lookemail;
	MemberManage *membermanage;
	README *readme;
};
