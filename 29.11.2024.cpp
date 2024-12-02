#include <iostream>
#include <string>
#include "Person.h"
#include "FLat.h"
#include "Home.h"
using namespace std;

int main()
{
	Person person1("Ivanov", "Ivan", "Ivanovich");
	person1.printInfoPerson();
	//	Flat flat1(person1, 2, 3, 4); // подчеркивает person1
	//	flat1.printInfoFlat();
	//	Home home1(flat1, 12, 50); // подчеркивает flat1
	//	home1.printInfoHome();
	// возникли проблемы...
}
