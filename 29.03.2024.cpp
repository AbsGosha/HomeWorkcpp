

#include <iostream>
using namespace std;
void showDegree() {
	int num;
	int degree;
	cout << "Input footing: ";
	cin >> num;
	cout << "Input degree indicator: ";
	cin >> degree;
	cout << "your answer: " << pow(num, degree);
} 
void showSum(int sum = 0) {
	int start;
	int end;
	cout << "Input start diapason: ";
	cin >> start;
	cout << "Input end diapason: ";
	cin >> end;
	if (start > end) {
		swap(start, end);
	}
	for (int i = start; i <= end; i++) {
		i++;
		sum += i;
	}
	cout << "Your answer: " << sum;
}
void showIdealnum() {
	int start1;
	int end1;
	int count = 0;
	cout << "Input start diapason: ";
	cin >> start1;
	cout << "Input end diapason: ";
	cin >> end1;
	if (start1 > end1) {
		swap(start1, end1);
	}
	for (int i = start1; i < end1; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				count += j;
			}
		}
		if (count == i) {
			cout << i << " ";
		}
		count = 0;
	}
}
void showCard() {

	char num_letter;
	char symbol;
	cout << "Input your card: 2, 3, 4, 5, 6; K, Q, D, J, A: ";
	cin >> num_letter;
	cout << "Choose the symbol: " << char(3) << " " << char(4) << " " << char(5) << " " << char(6) << ": ";
	cin >> symbol;
	cout << " _______" << endl;
	cout << "|" << num_letter << symbol << "     |" << endl;
	cout << "|       |" << endl;
	cout << "|       |" << endl;
	cout << "|     " << symbol << num_letter << "|" << endl;
	cout << "|_______|";
}
void showFortunNumber() {
	int num;
	cout << "Input number: ";
	cin >> num;
	//if(num > 999999 || num < 100000) {
		//cout << "The number is entered incorrectly: ";
	//}
	if (num / 100000 + num / 10000 % 10 + num / 1000 % 10 == num / 100 % 10 + num / 10 % 10 + num % 10) {
		cout << "Your number is lucky!";
	}
	if (num / 100000 + num / 10000 % 10 + num / 1000 % 10 != num / 100 % 10 + num / 10 % 10 + num % 10) {
		cout << "Error! ";
	}
	if (num > 999999 || num < 100000) {
		cout << "The number is entered incorrectly! ";
	}
}

int main()
{
	// задание 1 
	showDegree();
	cout << endl;
	showSum();
	cout << endl;
	showIdealnum();
	cout << endl;
	showCard();
	cout << endl;
	showFortunNumber();


}


