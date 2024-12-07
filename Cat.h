#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Cat : public Pet
{
private:
	float moustacheLong;
public:
	Cat(string, string, int, float);
	float getMoustacheLong();
	void setMoustacheLong(float);
	void printInfo();
	~Cat();
};

