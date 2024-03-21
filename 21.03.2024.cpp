
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	// задание 1 
	const int SIZE1 = 3;
	const int SIZE2 = 3;
	int num1;
	int arr1[SIZE1][SIZE2];
	cout << "Введите число: ";
	cin >> num1;
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE1; j++, num1 *= 2) {
			arr1[i][j] = num1;
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	// задание 2
	const int SIZE3 = 3;
	const int SIZE4 = 3;
	int num2;
	int arr2[SIZE3][SIZE4];
	cout << "Введите число: ";
	cin >> num2;
	for (int i = 0; i < SIZE3; i++) {
		for (int j = 0; j < SIZE4; j++, num2++) {
			arr2[i][j] = num2;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}
