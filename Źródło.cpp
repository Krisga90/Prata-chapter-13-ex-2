#include <iostream>
using namespace std;
#include "classic.h"

void Bravo(const Cd & disk);

int main()
{
	char * lol;
	{
		Cd c1("Beatles", "Capitol", 14, 35.5);
		Classic c2 = Classic("Soneta fortepianowa B-dur, Fantazja C-moll", "Alfred Brendel",
			"Philips", 2, 57.17);
		Cd *pcd = &c1;
		cout << "Bezpoœrednie u¿ycie obiektu: \n\n\n";
		c1.Report();	//u¿ywa metody klasy Cd
		c2.Report();	//u¿ywa metody klasy Classic

		cout << "U¿ycie wska¿nika na typ Cd:\n\n\n";
		pcd->Report();	//u¿ywa metody klasy Cd dla obiektu tej klasy
		pcd = &c2;
		pcd->Report();	//u¿ywa metody klasy Classic dla obiektu tej klasy

		cout << "Wywo³anie funkcji z argumentem w postaci referencji do typu Cd:\n\n\n";
		Bravo(c1);
		Bravo(c2);



		cout << "Test przypisania:\n\n\n ";
		Classic copy;
		copy = c2;
		cout << "Skopiowanio c2\n";
		copy.Report();
		lol = c2.Pointer();
		//cout << lol;
	}
	
	cin.get();
	return 0;
}


void Bravo(const Cd & disk)
{
	disk.Report();
}