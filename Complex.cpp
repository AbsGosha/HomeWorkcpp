#include "Complex.h"

Complex::Complex()
{
}

Complex::Complex(int validNum, int imaginaryNum)
{
	this->validNum = validNum;
	this->imaginaryNum = imaginaryNum;
}

Complex::Complex(Complex& complex)
{
	this->validNum = complex.validNum;
	this->imaginaryNum = complex.imaginaryNum;
}

int Complex::getValidNum()
{
	return this->validNum;
}

int Complex::getImaginaryNum()
{
	return this->imaginaryNum;
}

void Complex::setValidNum(int validNum)
{
	this->validNum = validNum;
}

void Complex::setImaginaryNum(int imaginaryNum)
{
	this->imaginaryNum = imaginaryNum;
}

void Complex::printComplex()
{
	cout << this->validNum << "+" << this->imaginaryNum << "*i" << endl;
}

Complex Complex::operator+(Complex& complex)
{
	Complex sum(this->validNum + complex.validNum, this->imaginaryNum + complex.imaginaryNum);
	return sum;
}

Complex Complex::operator-(Complex& complex)
{
	Complex minus(this->validNum - complex.validNum, this->imaginaryNum - complex.imaginaryNum);
	return minus;
}

Complex Complex::operator*(Complex& complex)
{
	Complex mult(this->validNum * complex.validNum, this->imaginaryNum * complex.imaginaryNum);
	return mult;
}

Complex Complex::operator/(Complex& complex)
{
	Complex div(this->validNum / complex.validNum, this->imaginaryNum / complex.imaginaryNum);
	return div;
}

Complex::~Complex()
{

}
