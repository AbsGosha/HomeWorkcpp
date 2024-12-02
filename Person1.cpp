#include "Person.h"

Person::Person()
{
	this->counter++;
}

Person::Person(int idNumber, string name, string surname, string fathername, Date date)
{
	this->idNumber = idNumber;
	this->name = name;
	this->surname = surname;
	this->fathername = fathername;
	this->date = date;
	++this->counter;
}
Person::Person(Person& person)
{
	this->idNumber = person.idNumber;
	this->name = person.name;
	this->surname = person.surname;
	this->fathername = person.fathername;
	this->date = person.date;
	this->counter++;
}

int Person::getId()
{
	return this->idNumber;
}

string Person::getName()
{
	return this->name;
}

string Person::getSurname()
{
	return this->surname;
}

string Person::getFatherName()
{
	return this->fathername;
}

Date Person::getDate()
{
	return this->date;
}

void Person::setIdNumber(int)
{
	this->idNumber = idNumber;
}

void Person::setName(string)
{
	this->name = name;
}

void Person::setSurname(string)
{
	this->surname = surname;
}

void Person::setFatherName(string)
{
	this->fathername = fathername;
}

void Person::setDate(Date)
{
	this->date = date;
}

void Person::countPerson()
{
	cout << "People: " << this->counter << endl;
}

void Person::printPerson()
{
	cout << "Identification number: " << idNumber << endl;
	cout << "FIO: " << this->surname << " " << this->name << " " << fathername << endl;
	cout << "Date of bithday: " << this->date.getDay() << "." << this->date.getMonth() << "." << this->date.getYear();
}

Person::~Person()
{
	this->counter--;
}

