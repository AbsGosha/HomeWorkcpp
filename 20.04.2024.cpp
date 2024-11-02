#include <iostream>
using namespace std;

void showArr(int**& array) {
    int s1 = _msize(array) / sizeof(array[0]);
    int s2 = _msize(array[0]) / sizeof(array[0][0]);
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void addCol(int**& array, int*& array2) {
    int s1 = _msize(array) / sizeof(array[0]);
    int s2 = _msize(array[0]) / sizeof(array[0][0]);
    int** buf = new int* [s1];
    for (int i = 0; i < s1; i++) {
        buf[i] = new int[s2 + 1];
        for (int j = 0; j < s2; j++) {
            buf[i][j] = array[i][j];
        }
        buf[i][s2] = array2[i];
    }
    for (int i = 0; i < s1; i++) {
        delete[] array[i];
    }
    delete[]array;
    array = buf;
}
int main()
{
    srand(time(NULL));
    int** array1 = new int* [5];
    for (int i = 0; i < 5; i++) {
        array1[i] = new int[4];
        for (int j = 0; j < 4; j++) {
            array1[i][j] = 10 + rand() % 90;
        }
    }
    showArr(array1);
    cout << "+" << endl;
    int* array2 = new int[5];
    for (int i = 0; i < 5; i++) {
        array2[i] = 10 + rand() % 90;
        cout << array2[i] << " ";
    }
    cout << endl << "=" << endl;
    addCol(array1, array2);
    showArr(array1);
}