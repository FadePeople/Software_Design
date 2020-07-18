#pragma once

#include <QWidget>
#include "ui_LookEmail.h"

class LookEmail : public QWidget
{
	Q_OBJECT

public:
	LookEmail(QWidget *parent = Q_NULLPTR);
	~LookEmail();

public slots:
	void rece_td(QStringList);

private:
	Ui::LookEmail ui;
};
