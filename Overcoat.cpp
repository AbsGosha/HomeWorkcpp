#include "Overcoat.h"

Overcoat::Overcoat()
{
}

Overcoat::Overcoat(int type, int price)
{
	this->type = type;
	this->price = price;
}

Overcoat::Overcoat(Overcoat& object)
{
	this->price = object.price;
	this->type = object.type;
}

int Overcoat::getType()
{
	return this->type;
}

int Overcoat::getPrice()
{
	return this->price;
}

void Overcoat::setType(int type)
{
	this->type = type;
}

void Overcoat::setPrice(int price)
{
	this->price = price;
}

void Overcoat::printInfo()
{
	cout << "Type of overcoat: " << this->type << endl;
	cout << "Price of overcoat: " << this->price << endl;
}

bool Overcoat::operator==(Overcoat& object)
{
	if (this->type == object.type) {
		return true;
	}
	return false;
}

void Overcoat::operator=(Overcoat& object)
{
	this->type = object.type;
	this->price = object.price;
}

bool Overcoat::operator>(Overcoat& coat)
{
	if (this->price > coat.price) {
		return true;
	}
	return false;
}

Overcoat::~Overcoat()
{
}
