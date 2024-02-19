
#include <iostream>
using namespace std;

int main()
{   //задание 1 
    setlocale(LC_ALL, "rus");
    int num1;
    cout << "Введите шестизначное число: \n";
    cin >> num1;
    int num2 = num1 % 10;
    int num3 = num1 % 100 / 10;
    int num4 = num1 % 1000 / 100;
    int num5 = num1 % 10000 / 1000;
    int num6 = num1 % 100000 / 10000;
    int num7 = num1 % 1000000 / 100000;
    if (num1 <= 999999 and num1 > 99999) {
        if (num2 + num3 + num4 == num5 + num6 + num7)
            cout << "Число счастливое";
        else
            cout << "Число несчастливое" << endl;


    }
    else
        cout << "Ошибка" << endl;
    // задание 2
    int num8;
    cout << "Введите четырехзанчное число: \n";
    cin >> num8;
    int num9 = (num8 % 10) * 10;
    int num10 = (num8 % 100) / 10;
    int num11 = (num8 % 1000 / 100) * 1000;
    int num12 = (num8 % 10000 / 1000) * 100;
    if (num8 <= 9999 and num8 > 999)
        cout << num9 + num10 + num11 + num12 << endl;
    else
        cout << "Число не четырехзначное" << endl;
    
    // задание 3 
    int num13;
    int num14;
    int num15;
    int num16;
    int num17;
    int num18;
    int num19;
    cout << "Введите семь чисел: " << endl;
    cin >> num13;
    cin >> num14;
    cin >> num15;
    cin >> num16;
    cin >> num17;
    cin >> num18;
    cin >> num19;
    int max_count = num13;
    if (num14 > max_count) {
        max_count = num14;
    }
    if (num15 > max_count) {
        max_count = num15;
    }
    if (num16 > max_count) {
        max_count = num16;
    }
    if (num17 > max_count) {
        max_count = num17;
    }
    if (num18 > max_count) {
        max_count = num18;
    }
    if (num19 > max_count) {
        max_count = num19;
    }
    cout << "Наибольшее число: " << max_count << endl;
    // задание 4
    int s;
    int s1;
    int weight;
    cout << "Введите расстояние между пунктами A и B:\n";
    cin >> s;
    cout << "Введите расстояние между пунктами B и C:\n";
    cin >> s1;
    cout << "Введите все груза:\n";
    cin >> weight;
    if (weight <= 500) {
        cout << s + s1 << "- столько литров понадобится самолету для дозаправки";
    }
    else if (weight > 500 and weight <= 1000) {
        cout << float(s + s1) / 4 << "- столько литров понадобится самолету для дозаправки";
    }
    else if (weight > 1000 and weight <= 1500) {
        cout << float(s + s1) / 7 << "- столько литров понадобится самолету для дозаправки";
    }
    else if (weight > 1500 and weight <= 2000) {
        cout << float(s + s1) / 9 << "- столько литров понадобится самолету для дозаправки";

    }
    else
        cout << "Самолет не взлетит";

}

