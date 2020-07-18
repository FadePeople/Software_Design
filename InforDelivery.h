#pragma once

#include <QWidget>
#include "ui_InforDelivery.h"

class InforDelivery : public QWidget
{
	Q_OBJECT

public:
	InforDelivery(QWidget *parent = Q_NULLPTR);
	~InforDelivery();

private:
	Ui::InforDelivery ui;
};
