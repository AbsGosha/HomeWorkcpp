#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Dog : public Pet
{
private:
	float tailLong;
public:
	Dog(string, string, int, float);
	float getTailLong();
	void setTailLong(float);
	void printInfo();
	~Dog();
};

