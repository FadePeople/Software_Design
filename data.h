#pragma once
#include "common.h"

extern int ok_num;
extern int no_num;
extern int flag;
extern QStringList list;

struct people
{
	QString name;
	QString key;
};
extern struct people peo_admin[10000],peo_tg[10000], peo_sg[10000];

extern int admin_num;
extern int tg_num;
extern int sg_num;
extern int status;
extern int vip_num;
