#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string name;
	string surname;
	string fathername;
public:
	Person();
	Person(string name, string surname, string fathername);
	string getName();
	string getSurName();
	string getFatherName();
	void setName();
	void setSurName();
	void setFatherName();
	void printInfoPerson();
	~Person();
};

