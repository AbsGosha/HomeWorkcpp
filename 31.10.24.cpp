#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction ex1(2, 3);
	Fraction ex2(4, 5);
	ex1.printFraction();
	cout << " ";
	ex1.printFraction();
	cout << endl;
	ex1.plusFraction(ex2);
	cout << endl;
	ex1.minusFraction(ex2);
	cout << endl;
	ex1.multFraction(ex2);
	cout << endl;
	ex1.divFraction(ex2);
}