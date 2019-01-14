#include "classic.h"
#include <iostream>
#include <cstring>

//metody klasy Cd


//metody klasy Classic

Classic::Classic(const char * cl, const char *s1, const char * s2, int n, double x)
	:Cd::Cd(s1,s2,n,x)
{
	main_record = new char[strlen(cl) + 1];
	strcpyk(main_record, cl);
}

Classic::Classic(const char * cl, const Cd & d)
	: Cd::Cd(d)
{
	main_record = new char[strlen(cl) + 1];
	strcpyk(main_record, cl);
}

Classic::Classic(const Classic & c)
	:Cd::Cd(c)
{
	main_record = new char[strlen(c.main_record) + 1];
	strcpyk(main_record, c.main_record);
}

Classic::Classic()
	:Cd::Cd()
{
	main_record = new char[strlen("brak") + 1];
	strcpyk(main_record,"brak");
}

void Classic::Report() const	//Wyœwietla informacje o wszystkich danych p³yty
{
	Cd::Report();
	std::cout << "Glowny utwor: " << main_record << std::endl;
}

Classic & Classic::operator=(const Classic & c)
{
	//Classic temp1;
	//std::cout << "wejscie do = w classic\n";
	if (&c == this)
		return *this;
	Cd::operator=(c);
	//Cd::Report();
	delete [] main_record;
	//std::cout << "usuniecie main_record w Classic\n";
	main_record = new char[strlen(c.main_record) + 1];
	//std::cout << "alokacja pamieci na main_record w Classic\n";
	strcpyk(main_record, c.main_record);
	//std::cout << "main_record: " << main_record << "&main_record: " << &main_record << std::endl;
	//std::cout << "skopiowanie main_record w Classic\n";
	return *this;
}

Classic::~Classic()
{
	delete[] main_record;
	//Cd::~Cd(); // destruktor klasy bazowej jest wywo³ywany automatycznie
}
