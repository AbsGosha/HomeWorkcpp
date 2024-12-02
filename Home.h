#pragma once
#include <iostream>
#include <string>
#include "Flat.h"
using namespace std;
class Home
{
private:
	Flat* flats;
	int floorNum;
	int flatNum;
public:
	Home();
	Home(Flat*, int floornum, int flatnum);
	Home(Home&);
	Flat* getFlat();
	int getFloorNum();
	int getFlatNum();
	void setFlat(Flat*, int);
	void setFloorNum(int);
	void setFlatNum(int);
	void printInfoHome();
	~Home();
};

