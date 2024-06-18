#include <iostream>
using namespace std;
void showArr(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
// удаление строки 
void deleteStr(int**& arr, int a) {
	int size = _msize(arr) / sizeof(arr[0]);
	int** buf = new int* [size - 1];
	for (int i = 0; i < a; i++) {
		buf[i] = arr[i];
	}
	for (int i = a + 1; i < size; i++) {
		buf[i-1] = arr[i];
	}
	delete[]arr[a];
	delete[]arr;
	arr = buf;
}
// удаление столбца 
void deleteColumn(int**& arr, int a) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2 - 1];
		for (int j = 0; j < a; j++) {
			buf[i][j] = arr[i][j];
		}
		for (int j = a + 1; j < size2; j++) {
			buf[i][j - 1] = arr[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		delete[]arr[i];
	}
	delete[] arr;
	arr = buf;
}
int main()
{
	srand(time(NULL));
	int** arr = new int* [3];
	for (int i = 0; i < 3; i++) {
		arr[i] = new int[2];
		for (int j = 0; j < 2; j++) {
			arr[i][j] = 1 + rand() & 5;
		}
	}
	showArr(arr);
	cout << endl;
	deleteStr(arr, 2);
	showArr(arr);
	showArr(arr);
	cout << endl;
	deleteColumn(arr, 0);
	showArr(arr);
	showArr(arr);
	 // добавление столбца
    int** array = new int* [4];
    for (int i = 0; i < 4; i++) {
        array[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            array[i][j] = 1 + rand() % 9;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int** buf = new int* [4];
    for (int i = 0; i < 4; i++) {
        buf[i] = array[i];
        buf[i][3] = 1 + rand() % 9;
    }
    delete[] array;
    array = buf;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3 + 1; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}