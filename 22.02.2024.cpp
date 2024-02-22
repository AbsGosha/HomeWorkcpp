

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1 
    char symbol;
    int symbol1;
    cout << "Введите символ: ";
    cin >> symbol;
    symbol1 = int(symbol);
    if (symbol1 >= 48 && symbol1 <= 57) {
		cout << "Число" << endl;
		}
	else if (symbol1 >= 65 && symbol1 <= 90 || symbol1 >= 97 && symbol1 <= 122) {
		cout << "Текст" << endl;
		}
		switch (symbol1) {
		case 33:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 58:
		case 59:
		case 63:
			cout << "Знак препинания" << endl;
			break;


		}
		// задание 2
		int operator1;
		int operator2;
		float time;
		float money;
		cout << "Введите оператора с которго вы будете звонить: 1-МТС, 2-Теле2, 3-YOTA: ";
		cin >> operator1;
		cout << "Введите опреатора на который вы будете звонить: 1-МТС, 2-Теле2, 3-Мегафон: ";
		cin >> operator2;
		cout << "Введите время разговора: ";
		cin >> time;
		cout << "Стоимость разговора между одинаковыми операторами осуществляется по тарифу: 1 минута - 1 рубль" << endl;
		cout << "Стоимсоть разговора между разными операторами осуществляется по тарифу: 1 минута - 3 рубля" << endl;
		switch (operator1)
		{
		case 1:
			switch (operator2)
			{
			case 1:
				money = time * 1;
				cout << "Разговор между одинаковыми операторами составит: " << money << " рублей" << endl;
				break;
			case 2:
			case 3:
				money = time * 3;
				cout << "Разговор между разными операторами составит: " << money << " рублей" << endl;
				break;
			default:
				break;
			}
		case 2:
			switch (operator2)
			{
			case 2:
				money = time * 1;
				cout << "Разговор между одинаковыми операторами составит: " << money << " рублей" << endl;
				break;
			case 1:
			case 3:
				money = time * 3;
				cout << "Разговор между разными операторами составит: " << money << " рублей" << endl;
				break;
			default:
				break;
			}
		case 3:
			switch (operator2)
			{
			case 3:
				money = time * 1;
				cout << "Разговор между одинаковыми операторами составит: " << money << " рублей" << endl;
				break;
			case 1:
			case 2:
				money = time * 3;
				cout << "Разговор между разными операторами составит: " << money << " рублей" << endl;
				break;

			default:
				break;
			}

		default:
			break;
		}
		// задание 3 
		int profit;
		int late;
		int lines_code;
		int delays;
		cout << "Введите желаемый доход Васи: ";
		cin >> profit;
		cout << "Введите количсетво опозданий Васи: ";
		cin >> late;
		delays = late / 3;
		cout << "Введите количество строк кода Васи: ";
		cin >> lines_code;
		(float(delays * 20 + profit) / 50) * 100;
		if (((lines_code - (float(profit) / 50) * 100) / 100 >= 0)) {
			cout << "Вася может опоздать " << (lines_code - (float(profit) / 50) * 100) / 100 << "-раз(-а)" << endl;
		}
		else {
			cout << "Вася не может опаздывать";
		}
		if (((float(lines_code) / 100) * 50 - (delays * 20) > 0)) {
			cout << "Вася должен заплатить: " << (float(lines_code) / 100) * 50 - (delays * 20) << "-рублей" << endl;
		}
		else {
			cout << "Вася в долгу на " << ((float(lines_code) / 100) * 50 - (delays * 20)) * -1 << "-рублей";
		}










    
}