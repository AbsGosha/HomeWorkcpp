#include <iostream>
#include <string>
#include "Person.h"
#include "Date.h"
#include "Elevator.h"
using namespace std;

int main()
{
	Date date1(01, 02, 2000);
	Person person1(1, "Nikolai", "Nikolaev", "Nikolaevich", date1);
	person1.countPerson();
	person1.printPerson();

	cout << endl;

	Elevator elevator1(1, 10);
	elevator1.setElevatorSwitchOff();
	elevator1.setNowFloor(8);
	cout << elevator1.getNowFloor();

	cout << endl;

	Elevator elevator2(1, 10);
	elevator2.setElevatorSwitchOn();
	elevator2.setNowFloor(1);
	cout << elevator2.getNowFloor();
}
