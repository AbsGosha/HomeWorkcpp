#pragma once
#include <iostream>
using namespace std;
class Pet
{
protected:
	string name;
	string type;
	int age;
public:
	Pet(string name, string type, int age);
	string getName();
	string getType();
	int getAge();
	void setName(string);
	void setType(string);
	void setAge(int);
	void printInfo();
	~Pet();
};

