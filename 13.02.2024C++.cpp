#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "��� ������\t| ��� ��������\t\t| ������������ ��������\t| ���-�� ����\t| ��������" << endl;
	cout << "short" << "\t\t";
	cout << "| " << SHRT_MIN << "\t\t";
	cout << "| " << SHRT_MAX << "\t\t\t";
	cout << "| "  << sizeof(short) << "\t\t";
	cout << "����� �����" << endl;

	cout << "int" << "\t\t";
	cout << "| " << INT_MIN << "\t\t";
	cout << "| " << INT_MAX << "\t\t";
	cout << "| " << sizeof(int) << "\t\t";
	cout << "����� �����" << endl;

	cout << "longlong" << "\t";
	cout << "| " << LLONG_MIN << "\t";
	cout << "| " << LLONG_MAX << "\t";
	cout << "| " << sizeof(long long) << "\t\t";
	cout << "������� �����" << endl;

	cout << "char" << "\t\t";
	cout << "| " << CHAR_MIN << "\t\t\t";
	cout << "| " << CHAR_MAX << "\t\t\t";
	cout << "| " << sizeof(char) << "\t\t";
	cout << "�������" << endl;

	cout << "bool" << "\t\t";
	cout << "| " << "0" << "\t\t\t";
	cout << "| " << "1" << "\t\t\t";
	cout << "| " << sizeof(short) << "\t\t";
	cout << "������" << endl;

	cout << "float" << "\t\t";
	cout << "| " << FLT_MIN << "\t\t";
	cout << "| " << FLT_MAX << "\t\t";
	cout << "| " << sizeof(float) << "\t\t";
	cout << "������������ �����" << endl;

	cout << "double" << "\t\t";
	cout << "| " << FLT_MIN << "\t\t";
	cout << "| " << FLT_MAX << "\t\t";
	cout << "| " << sizeof(float) << "\t\t";
	cout << "������������ �����" << endl;

}