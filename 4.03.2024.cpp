

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int figure;
    cout << "Введите номер фигуры: ";
    cin >> figure;
    switch (figure) {
    case 1:
        int size_a;
        cout << "Введите размер фигуры: ";
        cin >> size_a;
        for (int i = 0; i < size_a; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < size_a - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 2:
        int size_b;
        cout << "Введите размер фигуры: ";
        cin >> size_b;
        for (int i = 0; i < size_b; i++) {
            for (int j = size_b - i; j <= size_b; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 3:
        int size_v;
        cout << "Введите размер фигуры: ";
        cin >> size_v;
        if (size_v % 2 == 0) {
            size_v++;
        }
        for (int i = 0; i <= size_v / 2; i++) {
            for (int j = 0; j <= i; j++) {
                cout << " ";
            }
            for (int j = 0; j < size_v - (i * 2); j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 4:
        int size_g;
        cout << "Введите размер фигуры: ";
        cin >> size_g;
        for (int i = 0; i <= size_g / 2; i++) {
            for (int j = 0; j <= (size_g / 2) - i; j++) {
                cout << " ";
            }
            for (int j = 0; j < (i * 2) + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 5:
        int size_d;
        cout << "Введите размер фигуры: ";
        cin >> size_d;
        if (size_d % 2 == 0) {
            size_d++;
        }
        for (int i = 0; i <= size_d / 2; i++) {
            for (int j = 0; j <= i; j++) {
                cout << " ";
            }
            for (int j = 0; j < size_d - (i * 2); j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i <= size_d / 2; i++) {
            for (int j = 0; j <= (size_d / 2) - i; j++) {
                cout << " ";
            }
            for (int j = 0; j < (i * 2) + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    case 9:
        int size_e;
        cout << "Введите размер фигуры: ";
        cin >> size_e;
        for (int i = 0; i < size_e; i++) {
            for (int j = 0; j < size_e - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 10:
        int size_k;
        cout << "Введите размер фигуры: ";
        cin >> size_k;
        for (int i = 0; i < size_k; i++) {
            for (int j = i; j <= size_k; j++) {
                cout << " ";
            }
            for (int j = size_k - i; j <= size_k; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;



    }

}

    

