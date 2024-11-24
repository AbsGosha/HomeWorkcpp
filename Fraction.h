#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int, int);
	int getNumerator();
	int getDenominator();
	void printFraction();
	void plusFraction(Fraction);
	void minusFraction(Fraction);
	void multFraction(Fraction);
	void divFraction(Fraction);
	~Fraction();
};

