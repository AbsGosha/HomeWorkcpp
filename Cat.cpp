#include "Cat.h"

Cat::Cat(string name, string type, int age, float  moustacheLong) : Pet(name, type, age)
{
	this->moustacheLong = moustacheLong;
}

float Cat::getMoustacheLong()
{
	return this->moustacheLong;;
}

void Cat::setMoustacheLong(float)
{
	this->moustacheLong = moustacheLong;
}

void Cat::printInfo()
{
	cout << "Type pet: " << "cat" << endl;
	cout << "Name pet: " << this->name << endl;
	cout << "Moustacehe long: " << this->moustacheLong << endl;
}

Cat::~Cat()
{
}
