#pragma once
#include <iostream>
using namespace std;
class Flat1
{
private:
	int square;
	int price;
public:
	Flat1();
	Flat1(int, int);
	Flat1(Flat1&);
	int getSquare();
	int getPrice();
	void setSquare(int);
	void setPrice(int);
	void printInfo();
	bool operator==(Flat1&);
	void operator=(Flat1&);
	bool operator>(Flat1&);
	~Flat1();

};

