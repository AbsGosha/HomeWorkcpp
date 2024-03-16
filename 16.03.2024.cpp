

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1
    srand(time(NULL));
    const int SIZE = 5;
    int array1[SIZE];
    int array2[SIZE];
    int min = 10;
    int max = 99;
    for (int i = 0; i < SIZE; i++) {
        array1[i] = min + rand() % (max + 1 - min);
        array2[i] = min + rand() % (max + 1 - min);
        cout << array1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    for (int i = 0, flag; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (array1[i] == array2[j]) {
                flag = true;
                for(int k = 0; k < i; k++) {
                    if (array1[i] == array1[k]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                   cout << array1[i] << " ";
                   break;
                }
                else break;
            }
        }
    }
    cout << endl;
    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array1[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array1[k] == array1[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < SIZE; k++) {
                    if (array1[k] == array1[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << "Одинаковое значение: " << array1[i] << " " << endl;
            }
        }
    }
    cout << endl;
    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array2[i] == array1[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array2[k] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < SIZE; k++) {
                    if (array2[k] == array2[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << "Уникальное значение: " << array2[i] << " " << endl;
            }
        }
    }

  



}
