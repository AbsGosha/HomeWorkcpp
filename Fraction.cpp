#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getNumerator()
{
	return this->numerator;
}

int Fraction::getDenominator()
{
	return this->denominator;
}

void Fraction::printFraction()
{
	cout << this->getNumerator() << "/" << this->getDenominator();
}

void Fraction::plusFraction(Fraction ex1)
{
	int sumNumerator;
	int sumDenominator;
	if (this->denominator == ex1.denominator) {
		sumNumerator = this->numerator + ex1.numerator;
		sumDenominator = ex1.denominator;
	}
	else {
		sumNumerator = (this->numerator * ex1.denominator) + (ex1.numerator * this->denominator);
		sumDenominator = this->denominator * ex1.denominator;
	}
	this->printFraction();
	cout << "+";
	ex1.printFraction();
	cout << "=" << sumNumerator << "/" << sumDenominator;
}

void Fraction::minusFraction(Fraction ex1)
{
	int minusNumerator;
	int minusDenominator;
	if (this->denominator == ex1.denominator) {
		minusNumerator = this->numerator - ex1.numerator;
		minusDenominator = ex1.denominator;
	}
	else {
		minusNumerator = (this->numerator * ex1.denominator) - (ex1.numerator * this->denominator);
		minusDenominator = this->denominator * ex1.denominator;
	}
	this->printFraction();
	cout << "-";
	ex1.printFraction();
	cout << "=" << minusNumerator << "/" << minusDenominator;
}

void Fraction::multFraction(Fraction ex1)
{
	int multNumerator = this->numerator * ex1.numerator;
	int multDenominator = this->denominator * ex1.denominator;
	this->printFraction();
	cout << "*";
	ex1.printFraction();
	cout << "=" << multNumerator << "/" << multDenominator;
}

void Fraction::divFraction(Fraction ex1)
{
	int divNumerator = this->numerator * ex1.denominator;
	int divDenominator = this->denominator * ex1.numerator;
	this->printFraction();
	cout << "/";
	ex1.printFraction();
	cout << "=" << divNumerator << "/" << divDenominator;
}

Fraction::~Fraction()
{
}
