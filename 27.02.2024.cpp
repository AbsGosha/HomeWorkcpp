
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1 
    int num;
    cout << "Введите число: ";
    cin >> num;
    int count = 1;
    if (num == 0) {
        cout << "Факториал нуля равен единице!";
    }
    if (num < 0) {
        cout << "У отрицательных чисел не может быть факториала!";
    }
    while (num > 1) {
        count *= num--;
    }
    cout << count;
    // задание 2
    int start;
    int end;
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;
    while (start <= end) {
        cout << start++;
    }
    // задание 3 
    int start;
    int end;
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;
    int a = start;
    if (start > end) {
        swap(start, end);
    }
    while (start <= end) {
        cout << start++ << " " << endl;
    }
    cout << "Эти числа в диапазоне от " << a << " до " << end;
    
    // задание 4
    int num1;
    cout << "Введите число: ";
    cin >> num1;
    for (int i = 0; i < num1; i++) {
        cout << "Hello world!" << endl;
    }
    
    // задание 5
    for (int i = 0; i <=100; i += 2) {
        cout << i << " ";
    }
    // задание 5
    for (int i = 0; i <= 100; i++) {
        if (i / 10 + i % 10 == 5) {
            cout << i << " ";
        }
    }
    // задание 6 
    int num2 = 123;
    int k = 0;
    for (int a = num2; a != 0; a /= 10) {
        k *= 10;
        k += a % 10;
    }
    cout << k;
    // задание 7
    char s='*';
    int row, column;
    cout << "input row: ";
    cin >> row;
    cout << "input column: ";
    cin >> column;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << s << " ";
        }
    }   cout << endl;
    
    // задание 8 
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<=i; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }
    int n = 5;
    for (int i = 0; i < n; n++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}