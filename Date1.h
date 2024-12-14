#pragma once
#include <iostream>
using namespace std;
class Date1
{
	friend void operator>>(istream& in, Date1& a);
	friend void operator<<(ostream& out, Date1& a);
private:
	int day;
	int month;
	int year;
public:
	Date1();
	Date1(int, int, int);
	Date1(Date1&);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void printDate();
	void plusDay();
	void operator++();
	void operator--();
	bool operator!=(Date1&);
	bool operator==(Date1&);
	bool operator>(Date1&);
	bool operator<(Date1&);
	void operator=(Date1&);
	void operator+=(Date1&);
	void operator-=(Date1&);
	void operator()();
	~Date1();
};

