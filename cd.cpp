#include "cd.h"
#include <iostream>

Cd::Cd(const char *s1, const char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	strcpyk(performers, s1);
	strcpyk(label, s2);
	selections = n;
	playtime = x;

}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpyk(performers, d.performers);
	strcpyk(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[strlen("brak") + 1];
	label = new char[strlen("brak") + 1];
	strcpyk(performers, "brak");
	strcpyk(label, "brak");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report() const	//Wyœwietla informacje o wszystkich danych p³yty
{
	std::cout << "Wykonawcy: " << performers << std::endl;
	std::cout << "Nazwa p³yty: " << label << std::endl;
	std::cout << "Liczba utworow: " << selections << std::endl;
	std::cout << "Czas wszystkich utworow: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
	//std::cout << "wejscie do = w Cd\n";
	if (&d == this)
		return *this;

	delete[] performers;
	performers = new char[strlen(d.performers) + 1];
	strcpyk(performers, d.performers);

	delete[] label;
	label = new char[strlen(d.label) + 1];
	strcpyk(label, d.label);

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

void strcpyk(char * a, char * b)
{
	int i = 0;
	while (b[i])
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	std::cout << "\n\n" << &a << "\t\t" << a << "\n\n";
}

void strcpyk(char * a, const char * b)
{

	int i = 0;
	while (b[i])
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	std::cout << "\nconst\n" << (&a) << "\t\t" << a << "\n\n";
}