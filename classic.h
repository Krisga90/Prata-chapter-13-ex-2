#pragma once
#include "cd.h"


class Classic : public Cd
{
private:
	char * main_record;		//g³ówny utwór
public:
	Classic(const char * cl, const char *s1, const char * s2, int n, double x);
	Classic(const char * cl, const Cd & d);
	Classic(const Classic & c);
	Classic();
	virtual void Report() const;	//Wyœwietla informacje o wszystkich danych p³yty
	Classic & operator=(const Classic & c);
	virtual ~Classic();

};


