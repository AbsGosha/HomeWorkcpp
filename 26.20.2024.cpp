

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1 
    int start = 100;
    int end = 999;
    int count = 0;
    while (start <= end) {
        if (start % 10 == start / 10 % 10)
            count++;
        if (start % 10 == start / 10 % 10 / 10)
            count++;
        if (start / 10 % 10 / 10 == start / 10 % 10) count++;
        start++;
    }
    cout << count << endl;
    // задание 2
    int start1 = 100;
    int end1 = 999;
    int count1 = 0;
    while (start1 <= end1) {
        if (start1 % 10 != start1 / 10 % 10 && start1 % 10 != start1 / 10 % 10 / 10 && start1 / 10 % 10 / 10 != start1 / 10 % 10) count1++;
        start1++;
    }
    cout << count1 << endl;
    // задание 4 
    int a;
    cout << "Введите число: ";
    cin >> a;
    for (int b = 1; b < a; b++) {
        if (a % (b * b)) {
            cout << b << " " << endl;
        }
    }
    for (int b = 1; b < a; b++) {
        if (a % (b * b * b) == 0)
            cout << b << endl;
    }
    // задание 6
    int num;
    cout << "Введите целое число: ";
    cin >> num;
    int num1 = 1;
    while (num1 <= num) {
        if (num % num1 == 0) 
            cout << num1 << " ";
            num1++;
        
            
    }
    // задание 7
    int num2;
    int num3;
    cout << "Введите первое число: ";
    cin >> num2;
    cout << "Введите второе число: ";
    cin >> num3;
    int count2 = 1;
    if (num2 > num3) {
        swap(num2, num3);
    }
    while (count2 <= num3) {
        if (num2 % count2 == 0 && num3 % count2 == 0) 
            cout << count2 << " ";
            count2++;
        
    }
}
