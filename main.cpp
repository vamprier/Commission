// Observer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "Boss.h"
#include "StockObserver.h"
#include "NBAObserver.h"

int main(int argc, char* argv[])
{
	Boss* b = new Boss("������������");
	StockObserver* so = new StockObserver("�Ų�",b);
	NBAObserver* no = new NBAObserver("�����",b);

	//b->myfun = ;
	

	b->Notify();

	cin.ignore();

	return 0;
}

