#pragma once
#include <iostream>
using namespace std;
class Fraction1
{
private:
	int numerator;
	int denominator;
public:
	Fraction1(int, int);
	int getNumerator();
	int getDenominator();
	void setNumerator(int);
	void setDenominator(int);
	void print();
	void plusFraction(Fraction1&);
	void minusFraction(Fraction1&);
	void multFraction(Fraction1&);
	void divFraction(Fraction1&);
	void operator+(Fraction1&);
	void operator-(Fraction1&);
	void operator*(Fraction1&);
	void operator/(Fraction1&);
	~Fraction1();
};

