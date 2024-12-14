#include "Fraction1.h"

Fraction1::Fraction1(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction1::getNumerator()
{
	return this->numerator;
}

int Fraction1::getDenominator()
{
	return this->denominator;
}

void Fraction1::setNumerator(int numerator)
{
	this->numerator = numerator;
}

void Fraction1::setDenominator(int)
{
	this->denominator = denominator;
}

void Fraction1::print()
{
	cout << this->getNumerator() << "/" << this->getDenominator();
}

void Fraction1::plusFraction(Fraction1& fraction)
{
	int sumNumerator;
	int sumDenominator;
	if (this->denominator == fraction.denominator) {
		sumNumerator = this->numerator + fraction.numerator;
		sumDenominator = fraction.denominator;
	}
	else {
		sumNumerator = (this->numerator * fraction.denominator) + (fraction.numerator * this->denominator);
		sumDenominator = this->denominator * fraction.denominator;
	}
	this->print();
	cout << "+";
	fraction.print();
	cout << "=" << sumNumerator << "/" << sumDenominator;
}

void Fraction1::minusFraction(Fraction1& fraction)
{
	int minusNumerator;
	int minusDenominator;
	if (this->denominator == fraction.denominator) {
		minusDenominator = this->numerator - fraction.numerator;
		minusDenominator = fraction.denominator;
	}
	else {
		minusNumerator = (this->numerator * fraction.denominator) - (fraction.numerator * this->denominator);
		minusDenominator = this->denominator * fraction.denominator;
	}
	this->print();
	cout << "-";
	fraction.print();
	cout << "=" << minusNumerator << "/" << minusDenominator;
}

void Fraction1::multFraction(Fraction1& fraction)
{
	int multNumerator;
	int multDenominator;
	multNumerator = this->numerator* fraction.numerator;
	multDenominator = this->denominator * fraction.denominator;
	this->print();
	cout << "*";
	fraction.print();
	cout << "=" << multNumerator << "/" << multDenominator;
}

void Fraction1::divFraction(Fraction1& fraction)
{
	int divNumerator;
	int divDenominator;
	divNumerator = this->numerator * fraction.denominator;
	divDenominator = this->denominator = fraction.numerator;
	this->print();
	cout << "/";
	fraction.print();
	cout << "=" << divNumerator << "/" << divDenominator;
}

void Fraction1::operator+(Fraction1& frac)
{
	this->plusFraction(frac);
}

void Fraction1::operator-(Fraction1& frac)
{
	this->minusFraction(frac);
}

void Fraction1::operator*(Fraction1& frac)
{
	this->multFraction(frac);
}

void Fraction1::operator/(Fraction1& frac)
{
	this->divFraction(frac);
}

Fraction1::~Fraction1()
{
}
