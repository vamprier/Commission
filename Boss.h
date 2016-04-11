#ifndef BOSS_H
#define BOSS_H

#include "subject.h"

class Boss : public Subject
{
public:
	Boss(string ss);
	~Boss(void);
public:
	virtual void Notify();
	typedef void (*CAL_FUC)();
	CAL_FUC myfun;
};

#endif