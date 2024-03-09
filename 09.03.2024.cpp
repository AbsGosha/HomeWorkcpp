

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
    //задание 1 
    int num1;
    int num2;
    int num3;
    int num4;
    int max;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Введите третье число: ";
    cin >> num3;
    cout << "Введите четвертое число: ";
    cin >> num4;
    max = num1;
    if (num2 > num1) {
        max = num2;
    }
    if (num3 > num2) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    cout << max << endl;
    // задание 2
    int start;
    int end;
    int num;
    int counter;
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;
    cout << "Введите количество чисел: ";
    cin >> num;
    if (start > end) {
        swap(start, end);
    }
    for (float i = start, counter = start; i < num; i++) {
        cout << counter++ << " ";
        if (counter > end) {
            counter = start;
        }
    }
    // задание 3
    int max;
    cout << "Введите предел: ";
    cin >> max;
    for (float i = 0; i < max; i += 0.25) {
        cout << i << " ";
    }
    //задание 4
    float num = 1;
    float count = 0;
    float sum = 0;
    while (num != 0) {
        cout << "Введите число: ";
        cin >> num;
        sum += num;
        count++;
    }
    cout << "Среднее арифмитическое: " << sum / (count-1);
    
    //задание 5
    char symbol;
    cout << "Введите символ: ";
    cin >> symbol;
    if (symbol >= 65 && symbol <= 90) {
    }
    cout << "Это английская буква" << endl;
    //задание 6
    int min1;
    int max1;
    int min2;
    int max2;
    cout << "Введите начало диапазона для первого диапазона: ";
    cin >> min1;
    cout << "Введите конец первого диапазона для первого диапазона: ";
    cin >> max1;
    cout << "Введите начало второго диапазона для второго диапазона: ";
    cin >> min2;
    cout << "Введите конец второго диапазона для второго диапазона: ";
    cin >> max2;
    if (min1 > max1) {
        swap(min1, max2);
    }
    if (min2 > max2) {
        swap(min2, max2);
    }
    if (min1 > min2) {
        swap(min1, min2);
    }
    if (max1 > max2) {
        swap(max1, max2);
    }
    for (int i = min1; i < min2 && i <= max1; i++) {
        cout << i << " ";
    }
    for (int i = min2; i <= max2; i++) {
        if (i > max1) {
            cout << i << " ";
        }
    }

    // задание 7
    int a;
    int b;
    int n;
    int counter = 0;
    cout << "Введите начало диапазона: ";
    cin >> a;
    cout << "Введите конец диапазона: ";
    cin >> b;
    cout << "Введите число на которое будете делить: ";
    cin >> n;
    for (int i = a; i <= b; i++) {
        if (i % n == 0) {
            counter++;
        }
    }
    cout << counter;
    








}


