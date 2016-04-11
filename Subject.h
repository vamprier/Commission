#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>


using namespace std;

class Observer;

class Subject
{
public:
	Subject(string ss);
	virtual ~Subject(void);
public:
	virtual void Notify() = 0;
public:
	string subjectState();
private:
	string action;
};

#endif
