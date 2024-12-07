#include "Pet.h"

Pet::Pet(string name, string type, int age)
{
	this->name = name;
	this->type = type;
	this->age = age;
}

string Pet::getName()
{
	return this->name;
}

string Pet::getType()
{
	return this->type;
}

int Pet::getAge()
{
	return this->age;
}

void Pet::setName(string)
{
	this->name = name;
}

void Pet::setType(string)
{
	this->type = type;
}

void Pet::setAge(int)
{
	this->age = age;
}

void Pet::printInfo()
{
	cout << "Pet name: " << this->name << endl;
	cout << "Pet type: " << this->type;
}

Pet::~Pet()
{
}
