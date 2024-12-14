#pragma once
#include <iostream>
using namespace std;
class Complex
{
private:
	int validNum;
	int imaginaryNum;
public:
	Complex();
	Complex(int, int);
	Complex(Complex&);
	int getValidNum();
	int getImaginaryNum();
	void setValidNum(int);
	void setImaginaryNum(int);
	void printComplex();
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
	~Complex();
};

