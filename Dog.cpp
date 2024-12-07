#include "Dog.h"


Dog::Dog(string name, string type, int age, float tailLong) : Pet(name, type, age)
{
	this->tailLong = tailLong;
}

float Dog::getTailLong()
{
	return this->tailLong;
}

void Dog::setTailLong(float)
{
	this->tailLong = tailLong;
}

void Dog::printInfo()
{
	cout << "Type pet: " << "dog" << endl;
	cout << "Name pet: " << this->name << endl;
	cout << "Tail long: " << this->tailLong << endl;
}

Dog::~Dog()
{
}
