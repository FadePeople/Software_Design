#pragma once

#include <QWidget>
#include "ui_ExpertEmail.h"

class ExpertEmail : public QWidget
{
	Q_OBJECT

public:
	ExpertEmail(QWidget *parent = Q_NULLPTR);
	~ExpertEmail();

public slots:
	void view_data();
	void save_data();

signals:
	void td_data(QStringList list);

private:
	Ui::ExpertEmail ui;
};
