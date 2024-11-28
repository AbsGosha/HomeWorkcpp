#include "Elevator.h"

Elevator::Elevator()
{

}

Elevator::Elevator(int minFloor, int maxFloor)
{
	this->maxFloor = maxFloor;
	this->minFloor = minFloor;
	this->nowFloor = minFloor;
}

int Elevator::getMaxFloor()
{
	return this->maxFloor;
}

int Elevator::getMinFloor()
{
	return this->minFloor;
}

bool Elevator::getCheckElevator()
{
	return this->checkElevator;
}

int Elevator::getNowFloor()
{
	return this->nowFloor;
}

void Elevator::setMaxFloor()
{
	this->maxFloor = maxFloor;
}

void Elevator::setMinFloor()
{
	this->minFloor = minFloor;
}

void Elevator::setElevatorSwitchOff()
{
	this->checkElevator = false;
}

void Elevator::setElevatorSwitchOn()
{
	this->checkElevator = true;
}

void Elevator::setNowFloor(int)
{
	if (this->checkElevator) {
		this->nowFloor = nowFloor;
	}
	else {
		cout << "The elevator is standing";
	}
}

Elevator::~Elevator()
{
}
