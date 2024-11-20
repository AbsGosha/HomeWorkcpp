#include <iostream>
#include <string>
using namespace std;

struct Fio {
	string surname;
	string name;
	string fathername;
};

struct GroupInfo {
	string nameUniversity;
	string faculty;
	int course;
	int groupNumber;
};

struct Date {
	int day;
	int month;
	int year;
};

struct Student {
	Fio studentName;
	GroupInfo group;
	Date studentBth;
};

void enterFio(Fio& fio) 
{
	cout << "Enter student surname: ";
	cin >> fio.surname;
	cout << "Enter student name: ";
	cin >> fio.name;
	cout << "Enter student fathername: ";
	cin >> fio.fathername;
}

void enterGroupInfo(GroupInfo& infoGroup) 
{
	cout << "Enter name university: ";
	cin >> infoGroup.nameUniversity;
	cout << "Enter faculty: ";
	cin >> infoGroup.faculty;
	cout << "Enter course: ";
	cin >> infoGroup.course;
	cout << "Enter group number: ";
	cin >> infoGroup.groupNumber;
}

void enterDateBirth(Date& birthday)
{
	cout << "Enter day birthday: ";
	cin >> birthday.day;
	cout << "Enter month birthday: ";
	cin >> birthday.month;
	cout << "Enter year birthay: ";
	cin >> birthday.year;
}

void enterStudentInfo(Student& student)
{
	enterFio(student.studentName);
	enterGroupInfo(student.group);
	enterDateBirth(student.studentBth);
}

void printStudentFio(Fio& fio)
{
	cout << "Student full name: " << fio.surname << " " << fio.name << " " << fio.fathername;
	cout << endl;
}

void printGroupInfo(GroupInfo& infoGroup)
{
	cout << "University name: " << infoGroup.nameUniversity << endl;
	cout << "Faculty name: " << infoGroup.faculty << endl;
	cout << "Course number: " << infoGroup.course << endl;
	cout << "Group number: " << infoGroup.groupNumber << endl;
}

void printDate(Date& birthday)
{
	cout << "Date: " << birthday.day << "." << birthday.month << "." << birthday.year;
}

void print_student(Student& student) {
	printStudentFio(student.studentName);
	printGroupInfo(student.group);
	printDate(student.studentBth);
}

int diffDate(Student& student1, Student& student2)
{
	int date1 = (student1.studentBth.year * 360) + (student1.studentBth.month * 30) + student1.studentBth.day;
	int date2 = (student2.studentBth.year * 360) + (student2.studentBth.month * 30) + student2.studentBth.day;
	if (date1 < date2) {
		swap(date1, date2);
	}
	return date1 - date2;
}

Date diffNumDate(Student& student1, Student& student2)
{
	int date1 = (student1.studentBth.year * 360) + (student1.studentBth.month * 30) + student1.studentBth.day;
	int date2 = (student2.studentBth.year * 360) + (student2.studentBth.month * 30) + student2.studentBth.day;
	if (date1 < date2) swap(date1, date2);
	int diff = date1 - date2;
	Date diffDate;
	diffDate.day = diff % 30;
	diffDate.month = diff % 360 / 30;
	diffDate.year = diff / 360;
	return diffDate;
}

Date plusDate(Date date, int days) {
	int date1 = (date.year * 360) + (date.month * 30) + date.day + days;
	Date finalDate;
	finalDate.day = date1 % 30;
	finalDate.month = date1 % 360 / 30;
	finalDate.year = date1 / 360;
	return finalDate;
}

void printStudent1(Student student) {
	int date1 = (student.studentBth.year * 360) + (student.studentBth.month * 30) + student.studentBth.day;
	int finalDate = (2024 * 360 + 9 * 30 + 30) - date1;
	int finalDay = finalDate % 30;
	int finalMonth = finalDate % 360 / 30;
	int finalYear = finalDate / 360;
	cout << "Student " << student.studentName.name << " " << student.studentName.surname << " " << student.studentName.fathername << " is " << finalYear << " year(s) "
		<< finalMonth << " months " << finalDay << " days old";
}

bool biggerDate(Date date1, Date date2)
{
	int date1Num = (date1.year * 360) + (date1.month * 30) + date1.day;
	int date2Num = (date2.year * 360) + (date2.month * 30) + date2.day;
	if (date1Num < date2Num) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	Student student1;
	enterStudentInfo(student1);
	cout << endl;
	print_student(student1);
	Student student2;
	enterStudentInfo(student2);
	cout << endl;
	print_student(student2);
	cout << endl;
	cout << "Difference: ";
	cout << diffDate(student1, student2);
	cout << endl;
	cout << " days" << endl;
	cout << "Difference: ";
	printDate(diffNumDate(student1, student2));
	cout << endl << "New: ";
	printDate(plusDate(student1.studentBth, 500));
	cout << endl << biggerDate(student1.studentBth, student2.studentBth) << endl;
	printStudent1(student1);
	cout << endl;
	const int SIZE = 3;
	Student students[SIZE];
	for (int i = 0; i < SIZE; i++) {
		enterStudentInfo(students[i]);
		cout << endl;
		print_student(students[i]);
		cout << endl;
	}

}
