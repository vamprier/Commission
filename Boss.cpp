#include "Boss.h"


Boss::Boss(string ss):Subject(ss)
{
}


Boss::~Boss(void)
{
}


void Boss::Notify()
{
	myfun();
}