#include "Flat1.h"

Flat1::Flat1()
{
}

Flat1::Flat1(int square, int price)
{
	this->square = square;
	this->price = price;
}

Flat1::Flat1(Flat1& flat)
{
	this->square = flat.square;
	this->price = flat.price;
}

int Flat1::getSquare()
{
	return this->square;
}

int Flat1::getPrice()
{
	return this->price;
}

void Flat1::setSquare(int square)
{
	this->square = square;
}

void Flat1::setPrice(int price)
{
	this->price = price;
}

void Flat1::printInfo()
{
	cout << "Square flat: " << this->square << endl;
	cout << "Price of flat: " << this->price << endl;
}

bool Flat1::operator==(Flat1& object)
{
	if (this->square == object.square) {
		return true;
	}
	return false;
}

void Flat1::operator=(Flat1& object)
{
	this->square = object.square;
	this->price = object.price;
}

bool Flat1::operator>(Flat1& object)
{
	if (this->price > object.price) {
		return true;
	}
	return false;
}

Flat1::~Flat1()
{

}
