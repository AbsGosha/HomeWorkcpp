#include "Home.h"

Home::Home()
{
	this->flats = new Flat[this->flatNum];
	this->floorNum = 10;
	this->flatNum = 50;
}

Home::Home(Flat*, int floorNum, int flatNum)
{
	this->flats = new Flat[flatNum];
	for (int i = 0; i < flatNum; i++) {
		this->flats[i] = flats[i];
	}
	this->flatNum = flatNum;
	this->floorNum = floorNum;
}

Home::Home(Home& home)
{
	this->flats = new Flat[home.flatNum];
	for (int i = 0; i < home.flatNum; i++) {
		this->flats[i] = home.flats[i];
	}
	this->flatNum = home.flatNum;
	this->floorNum = home.floorNum;
}

Flat* Home::getFlat()
{
	return this->flats;
}

int Home::getFloorNum()
{
	return this->floorNum;
}

int Home::getFlatNum()
{
	return this->flatNum;
}

void Home::setFlat(Flat* flats, int flatNum)
{
	this->flats = new Flat[flatNum];
	for (int i = 0; i < flatNum; i++) {
		this->flats[i] = flats[i];
	}
	this->flatNum = flatNum;
	this->floorNum = floorNum;
}

void Home::setFloorNum(int)
{
	this->floorNum = floorNum;
}

void Home::setFlatNum(int)
{
	Flat* buf = new Flat[flatNum];
	for (int i = 0; i < flatNum && i < this->flatNum; i++) {
		buf[i] = this->flats[i];
	}
	delete[] this->flats;
	this->flats = buf;
	this->flatNum = flatNum;
}

void Home::printInfoHome()
{
	cout << "Flat number: " << this->flatNum << endl;
	cout << "Floor number: " << this->floorNum << endl;
}

Home::~Home()
{
	delete[] this->flats;
}







