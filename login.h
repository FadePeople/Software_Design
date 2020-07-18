#pragma once

#include <QWidget>
#include "ui_login.h"

class login : public QWidget
{
	Q_OBJECT

public:
	login(QWidget *parent = Q_NULLPTR);
	~login();

public slots:
	void logi();
	void sign();

private:
	Ui::login ui;
};
