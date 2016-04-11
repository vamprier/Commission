#include "StockObserver.h"


StockObserver::StockObserver(string n,Subject* s):name(n),sub(s)
{
}


StockObserver::~StockObserver(void)
{
}

void StockObserver::CloseStockMarket()
{
	cout<<sub->subjectState()<<", "<<name<<" close Stock, go on work "<<endl;
}
