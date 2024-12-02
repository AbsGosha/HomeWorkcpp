#include "Flat.h"

Flat::Flat()
{
	this->people = new Person[personNum];
	this->personNum = 3;
	this->roomNum = 3;
	this->flatNum = 50;
}

Flat::Flat(Person*, int personNum, int roomNum, int flatNum)
{
	this->people = new Person[personNum];
	for (int i = 0; i < personNum; i++) {
		this->people[i] = people[i];
	}
	this->personNum = personNum;
	this->roomNum = roomNum;
	this->flatNum = flatNum;
}

Flat::Flat(Flat& flat)
{
	this->people= new Person[flat.personNum];
	for (int i = 0; i < flat.personNum; i++) {
		this->people[i] = flat.people[i];
	}
	this->personNum = flat.personNum;
	this->roomNum = flat.roomNum;
	this->flatNum = flat.flatNum;
}

Person* Flat::getPerson()
{
	return this->people;
}

int Flat::getNumFlat()
{
	return this->flatNum;
}

int Flat::getRoomNum()
{
	return this->roomNum;
}

int Flat::getPeopleNum()
{
	return this->personNum;
}

void Flat::setPerson(Person* people, int personNum)
{
	Person* buf = new Person[personNum];
	for (int i = 0; i < personNum; i++) {
		buf[i] = people[i];
	}
	delete[] this->people;
	this->people = buf;
	this->personNum = personNum;
}

void Flat::setNumFlat()
{
	this->flatNum = flatNum;
}

void Flat::setRoomNum()
{
	this->roomNum = roomNum;
}

void Flat::setPeopleNum()
{
	Person* buf = new Person[personNum];
	for (int i = 0; i < this->personNum && i < this->personNum; i++) {
		buf[i] = this->people[i];
	}
	delete[] this->people;
	this->people = buf;
	this->personNum = personNum;
}

void Flat::printInfoFlat()
{
	cout << "Flat " << this->flatNum << ":" << endl;
	cout << "People are leave: ";
	for (int i = 0; i < this->personNum; i++) {
		cout << "Human " << i + 1 << " ";
		this->people[i].printInfoPerson();
		cout << endl;
	}
}

Flat::~Flat()
{
	delete[] this->people;
}






