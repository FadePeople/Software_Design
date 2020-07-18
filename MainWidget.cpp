#include "MainWidget.h"
#include "data.h"

MainWidget::MainWidget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	init();
	InitSlot();
	login_->show();
	connect(expertemail,SIGNAL(td_data(QStringList)),lookemail,SLOT(rece_td(QStringList)));
}

void MainWidget::init()
{
	authoremail = new AuthorEmail(NULL);
	expertemail = new ExpertEmail(NULL);
	infordelivery = new InforDelivery(NULL);
	lookemail = new LookEmail(NULL);
	membermanage = new MemberManage(NULL);
	readme = new README(NULL);
	login_ = new login(NULL);
}

void MainWidget::InitSlot()
{
	connect(ui.btn_1, &QPushButton::clicked, [=]()
	{
		readme->show();
	}
	);
	connect(ui.btn_2, &QPushButton::clicked, [=]()
	{
		infordelivery->show();
	}
	);
	connect(ui.btn_3, &QPushButton::clicked, [=]()
	{
		authoremail->show();
	}
	);
	connect(ui.btn_4, &QPushButton::clicked, [=]()
	{
		expertemail->show();
	}
	);
	connect(ui.btn_5, &QPushButton::clicked, [=]()
	{
		lookemail->show();
	}
	);
	connect(ui.btn_6, &QPushButton::clicked, [=]()
	{
		membermanage->show();
	}
	);
}
