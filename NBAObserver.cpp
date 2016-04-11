#include "NBAObserver.h"


NBAObserver::NBAObserver(string n,Subject* s):name(n),sub(s)
{
}


NBAObserver::~NBAObserver(void)
{
}

void NBAObserver::CloseNBADirectSeeding()
{
	cout<<sub->subjectState()<<", "<<name<<" close NBA, go on work "<<endl;
}
