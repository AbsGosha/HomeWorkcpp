#include "Parrot.h"

Parrot::Parrot(string name, string type, int age, float feathersLong) : Pet(name, type, age)
{
	this->feathersLong = feathersLong;
}

float Parrot::getFeathersLong()
{
	return this->feathersLong;
}

void Parrot::setFeathersLong(float)
{
	this->feathersLong = feathersLong;
}

void Parrot::printInfo()
{
	cout << "Type pet: " << "parrot" << endl;
	cout << "Name pet: " << this->name << endl;
	cout << "Feathers long: " << this->feathersLong << endl;
}

Parrot::~Parrot()
{
}
