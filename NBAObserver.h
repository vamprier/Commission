#ifndef NBAOB_H
#define NBAOB_H

#include <string>
#include "Subject.h"

class Subject;

class NBAObserver
{
public:
	NBAObserver(string n,Subject* s);
	~NBAObserver(void);
public:
	static void CloseNBADirectSeeding();
protected:
	string name;
	Subject* sub;
};

#endif