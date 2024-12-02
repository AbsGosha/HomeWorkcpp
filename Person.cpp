#include "Person.h"

Person::Person()
{
	this->surname = "Petrov";
	this->name = "Petya";
	this->fathername = "Petrovich";
}

Person::Person(string name, string surname, string fathername)
{
	this->name = name;
	this->surname = surname;
	this->fathername = fathername;
}

string Person::getName()
{
	return this->name;
}

string Person::getSurName()
{
	return this->surname;
}

string Person::getFatherName()
{
	return this->fathername;
}

void Person::setName()
{
	this->name = name;
}

void Person::setSurName()
{
	this->surname = surname;
}

void Person::setFatherName()
{
	this->fathername = fathername;
}

void Person::printInfoPerson()
{
	cout << "FIO: " << this->surname << " " << this->name << " " << this->fathername;
}

Person::~Person()
{
}

