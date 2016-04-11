#ifndef STOCKOB_H
#define STOCKOB_H

#include <string>
#include "Subject.h"

class Subject;

class StockObserver
{
public:
	StockObserver(string n,Subject* s);
	~StockObserver(void);
public:
	static void CloseStockMarket();
protected:
	string name;
	Subject* sub;
};

#endif