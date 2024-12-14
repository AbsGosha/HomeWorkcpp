#pragma once
#include <iostream>
using namespace std;
class Overcoat
{
private:
	int type;
	int price;
public:
	Overcoat();
	Overcoat(int, int);
	Overcoat(Overcoat&);
	int getType();
	int getPrice();
	void setType(int);
	void setPrice(int);
	void printInfo();
	bool operator==(Overcoat&);
	void operator=(Overcoat&);
	bool operator>(Overcoat&);
	~Overcoat();

};

