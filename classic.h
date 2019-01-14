#pragma once
#include "cd.h"


class Classic : public Cd
{
private:
	char * main_record;		//g��wny utw�r
public:
	Classic(const char * cl, const char *s1, const char * s2, int n, double x);
	Classic(const char * cl, const Cd & d);
	Classic(const Classic & c);
	Classic();
	virtual void Report() const;	//Wy�wietla informacje o wszystkich danych p�yty
	Classic & operator=(const Classic & c);
	virtual ~Classic();

};


