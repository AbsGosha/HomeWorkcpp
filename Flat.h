#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Flat
{
private:
	Person* people;
	int roomNum;
	int personNum;
	int flatNum;
public:
	Flat();
	Flat(Person*, int roomNum, int personNum, int flatNum);
	Flat(Flat&);
	Person* getPerson();
	int getNumFlat();
	int getRoomNum();
	int getPeopleNum();
	void setPerson(Person*, int);
	void setNumFlat();
	void setRoomNum();
	void setPeopleNum();
	void printInfoFlat();
	~Flat();

};

