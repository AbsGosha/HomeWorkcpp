#include <iostream>
#include <string>
#include "Parrot.h"
#include "Dog.h"
#include "Cat.h"
#include "Pet.h"
using namespace std;

int main()
{
	Parrot pet1("Kesha", "parrot", 9, 20.0);
	pet1.printInfo();
	cout << endl;

	Dog pet2("Bobik", "dog", 5, 13.5);
	pet2.printInfo();
	cout << endl;

	Cat pet3("Billy", "cat", 8, 9.5);
	pet3.printInfo();



}