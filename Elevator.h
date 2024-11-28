#pragma once
#include <iostream>
using namespace std;
class Elevator
{
private:
	int minFloor;
	int maxFloor;
	bool checkElevator = false;
	int nowFloor;
public:
	Elevator();
	Elevator(int, int);
	int getMaxFloor();
	int getMinFloor();
	bool getCheckElevator();
	int getNowFloor();
	void setMaxFloor();
	void setMinFloor();
	void setElevatorSwitchOff();
	void setElevatorSwitchOn();
	void setNowFloor(int);
	~Elevator();

};

