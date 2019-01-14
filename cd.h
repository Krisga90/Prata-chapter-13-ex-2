#pragma once
class Cd
{
private:
	char * performers;
	char * label;
	int selections;	//liczba utwor�w
	double playtime; //d�ugo�c p�yty w minutach

public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;	//Wy�wietla informacje o wszystkich danych p�yty
	Cd & operator=(const Cd & d);
	char * Pointer() { return performers; }
};

void strcpyk(char * a, char * b);
void strcpyk(char * a, const char * b);