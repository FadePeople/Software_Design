#pragma once

#include <QWidget>
#include "ui_README.h"

class README : public QWidget
{
	Q_OBJECT

public:
	README(QWidget *parent = Q_NULLPTR);
	~README();

private:
	Ui::README ui;
};
