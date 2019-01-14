#pragma once
class Cd
{
private:
	char * performers;
	char * label;
	int selections;	//liczba utworów
	double playtime; //d³ugoœc p³yty w minutach

public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;	//Wyœwietla informacje o wszystkich danych p³yty
	Cd & operator=(const Cd & d);
	char * Pointer() { return performers; }
};

void strcpyk(char * a, char * b);
void strcpyk(char * a, const char * b);