#pragma once

#include <QWidget>
#include "ui_AuthorEmail.h"

class AuthorEmail : public QWidget
{
	Q_OBJECT

public:
	AuthorEmail(QWidget *parent = Q_NULLPTR);
	~AuthorEmail();

public slots:
	void toudi();

private:
	Ui::AuthorEmail ui;
};
