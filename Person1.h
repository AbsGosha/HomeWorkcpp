#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Date.h"
class Person
{
private:
	int idNumber;
	string name;
	string surname;
	string fathername;
	Date date;
	int counter = 0;
public:
	Person();
	Person(int, string, string, string, Date);
	Person(Person&);
	int getId();
	string getName();
	string getSurname();
	string getFatherName();
	Date getDate();
	void setIdNumber(int);
	void setName(string);
	void setSurname(string);
	void setFatherName(string);
	void setDate(Date);
	void countPerson();
	void printPerson();
	~Person();
};

