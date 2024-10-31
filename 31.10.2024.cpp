#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//
	ifstream in;
	in.open("ex1.txt");
	ifstream in2;
	in2.open("ex2.txt");
	string line;
	string line2;
	int count = 0;
	while(getline(in, line) && getline(in2, line2)) {
		if (line != line2) {
			cout << line << endl << line2 << endl;
		}
		count--;
	}
	in.close();
	in2.close();
	//
	ifstream in;
	in.open("ex3.txt");
	ofstream out;
	out.open("ex4.txt");
	string line;
	int countString = 0;
	int countSymbol = 0;
	int countСonsonants = 0;
	int countVowels = 0;
	int countNum = 0;
	while (getline(in, line)) {
		countString++;
		for (int i = 0; line[i] != '\0'; i++) {
			countSymbol++;
			if (int(line[i]) >= 48 && int(line[i]) <= 57) {
				countNum++;
			}
			else if (int(line[i]) >= 65 && int(line[i]) <= 90 || int(line[i]) >= 97 && int(line[i]) <= 122) {
				if (int(line[i]) == 65 || int(line[i]) == 69 || int(line[i]) == 73 || int(line[i]) == 79 || int(line[i]) == 85 || int(line[i]) == 89 ||
					int(line[i]) == 97 || int(line[i]) == 101 || int(line[i]) == 105 || int(line[i]) == 111 || int(line[i]) == 117 || int(line[i]) == 121) {
					countVowels++;
				}
				else {
					countСonsonants++;
				}
			}
		}
	}
	out << "Symbols: " << countSymbol;
	cout << endl;
	out << "String: " << countString;
	cout << endl;
	out << "Vowels: " << countVowels;
	cout << endl;
	out << "Сonsonants: " << countСonsonants;
	cout << endl;
	out << "Numbers: " << countNum;
	//
	ifstream in;
	in.open("ex5.txt");
	ofstream out;
	out.open("ex6.txt");
	string line;
	int pos = 3;
	if (in.is_open()) {
		while (getline(in, line)) {
			for (int i = 0; line[i] != '\0'; i++) {
				if (line[i] >= 97 && line[i] <= 122) {
					if (line[i] > (122 - pos)) {
						line[i] = line[i] + pos - 26;
					}
					else {
						line[i] = line[i] + pos;
					}
				}
				if (line[i] >= 65 && line[i] <= 90) {
					if (line[i] > (90 - pos)) {
						line[i] = line[i] + pos - 26;
					}
					else {
						line[i] = line[i] + pos;
					}
				}
			}
			out << line << endl;
		}
	}
}