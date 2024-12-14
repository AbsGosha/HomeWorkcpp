#include "Date1.h"

Date1::Date1()
{

}

Date1::Date1(int day, int month, int year)
{
	if (day > 30) {
		day = 30;
	}
	if (month > 12) {
		month = 12;	
	}
	this->day = day;
	this->month = month;
	this->year = year;
}

Date1::Date1(Date1& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

int Date1::getDay()
{
	return this->year;
}

int Date1::getMonth()
{
	return this->month;
}

int Date1::getYear()
{
	return this->year;
}

void Date1::setDay(int day)
{
	this->day = day;
}

void Date1::setMonth(int month)
{
	this->month = month;
}

void Date1::setYear(int year)
{
	this->year = year;
}

void Date1::printDate()
{
	cout << this->day << "." << this->month << "." << this->year << endl;
}

void Date1::plusDay()
{
	this->day++;
	if (this->day == 31) {
		this->month++;
		this->day = 1;
		if (this->month == 13) {
			this->year++;
			this->month = 1;
		}
	}
}

void Date1::operator++()
{
	this->plusDay();
}

void Date1::operator--()
{
	this->day--;
	if (this->day == 0) {
		this->month--;
		this->day = 30;
		if (this->month == 0) {
			this->year--;
			this->month = 12;
		}
	}
}

bool Date1::operator!=(Date1& date)
{
	if (this->day == date.day && this->month == date.month && this->year == date.year) {
		return false;
	}
	return true;
}

bool Date1::operator==(Date1& date)
{
	if (this->day == date.day && this->month == date.month && this->year == date.year) {
		return true;
	}
	return false;
}

bool Date1::operator>(Date1& date)
{
	if (this->day > date.day) {
		return true;
	}
	if (this->month > date.month) {
		return true;
	}
	if (this->year > date.year) {
		return true;
	}
	return false;
}

bool Date1::operator<(Date1& date)
{
	if (this->day < date.day) {
		return true;
	}
	if (this->month < date.month) {
		return true;
	}
	if (this->year < date.year) {
		return true;
	}
	return false;
}

void Date1::operator=(Date1& date)
{
	this->day = date.day;
	this->month = month;
	this->year = date.year;
}

void Date1::operator+=(Date1& date)
{
	this->day += date.day;
	if (this->day > 30) {
		this->month++;
		if (this->month > 12) {
			this->year++;
			this->month -= 12;
		}
		this->day -= 30;
	}
	this->month += date.month;
	if (this->month > 12) {
		this->year++;
		this->month -= 12;
	}
	this->year += date.year;
}

void Date1::operator-=(Date1& date)
{
	this->day -= date.day;
	if (this->day < 1) {
		this->month--;
		if (this->month < 1) {
			this->year--;
			this->month += 12;
		}
		this->day += 30;
	}
	this->month -= date.month;
	if (this->month < 1) {
		this->year--;
		this->month += 12;
	}
	this->year -= date.year;
}

void Date1::operator()()
{
	this->printDate();
}

Date1::~Date1()
{

}
