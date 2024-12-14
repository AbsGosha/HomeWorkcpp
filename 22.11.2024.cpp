#include <iostream>
#include <string>
#include "Overcoat.h"
#include "MyArr.h"
#include "Fraction1.h"
#include "Flat1.h"
#include "Date1.h"
#include "Complex.h"
using namespace std;
//template <typename T>
void operator>>(istream& in, Date1& n) {
	in >> n.day;
	if (n.day > 30) {
		n.day = 30;
	}
	in >> n.month;
	if (n.month > 12) {
		n.month = 12;
	}
	in >> n.year;
}
void operator<<(ostream& out, Date1& n) {
	cout << n.day << "." << n.month << "." << n.year << endl;
}
int main()
{
	Fraction1 objeсt1(5, 9);
	Fraction1 object2(6, 7);
	objeсt1.print();
	cout << " ";
	object2.print();
	cout << endl;
	objeсt1 + object2;
	cout << endl;
	objeсt1 - object2;
	cout << endl;
	objeсt1 * object2;
	cout << endl;
	objeсt1 / object2;
	cout << endl;
	cout << endl;

	Complex object3(1, 2);
	Complex object4(3, 4);
	object3.printComplex();
	object4.printComplex();
	(object3 + object4).printComplex();
	(object3 - object4).printComplex();
	(object3 * object4).printComplex();
	(object3 / object4).printComplex(); 
	cout << endl;

	Overcoat object5(500, 1);
	Overcoat object6(600, 1);
	Overcoat object7(700, 4);
	cout << (object7 > object5);
	cout << endl;

	Flat1 object8(5000, 15000);
	Flat1 object9(750, 5000);
	Flat1 object10(250, 1000);
	object10 = object8;
	object10.printInfo();
	cout << endl;

	Date1 object11(30, 12, 2025);
	Date1 object12(30, 12, 2026);
	object11.printDate();
	++object11;
	object11.printDate();
	--object11;
	object11.printDate();
	cout << (object11 == object12) << endl;
	cout << (object11 != object12) << endl;
	cout << (object11 > object12) << endl;
	cout << (object11 < object12) << endl;
	cin >> object12;
	cout << object12;
	object11 = object11;
	cout << object12;
	object11 += object12;
	cout << object11;
	object11 -= object12;
	object11();

	/*int* arr1 = new int[5] { 2, 4, 6, 8, 10 };
	int* arr2 = new int[5] { 1, 3, 5, 7, 9 };
	MyArr arr3(arr1, 5, 5);
	MyArr arr4(arr2, 5, 5);
	arr3.printArray();
	cout << endl;
	arr4.printArray();
	cout << endl;
	cout << (arr3 + arr4);
	cout << endl;
	cout << (arr3 - arr4);
	cout << endl;
	cout << (arr3 * arr4);
	cout << endl;
	cout << (arr3 / arr4);
	cout << endl;
	cout << (arr3 == arr4);
	cout << endl;
	cout << (arr3 != arr4);
	cout << endl;
	cout << (arr3 > arr4);
	cout << endl;
	cout << (arr3 < arr4);
	cout << endl;
	cout << (arr3 <= arr4);
	cout << endl;
	cout << (arr3 >= arr4);
	cout << endl;
	cout << (arr3 = arr4);
	cout << endl;
	cout << (arr3 += arr4);
	cout << endl;
	cout << (arr3 -= arr4);
	cout << endl;
	cout << (arr3 *= arr4);
	cout << endl;
	cout << (arr3 /= arr4);
	cout << endl;
	cout << (arr3 ()() arr4);
	cout << endl;
	cout << (arr3 [] arr4)
	cout << endl;*/
	// не получается вывести все функции этого класса подчеркивает MyArr 
	// не сделал класс String, не понял как

}


