#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Parrot : public Pet
{
private:
	float feathersLong;
public:
	Parrot(string, string, int, float);
	float getFeathersLong();
	void setFeathersLong(float);
	void printInfo();
	~Parrot();
};

