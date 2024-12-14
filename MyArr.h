#pragma once
#include <iostream>
using namespace std;
template <typename T>
class MyArr
{
	/*friend void operator>>(istream& in, MyArr& a);
	friend void operator<<(ostream& out, MyArr& a);*/
private:
	T* arr;
	int size;
	int length;
public:
	MyArr();
	MyArr(int, int*);
	MyArr(MyArr&);
	T* getArr();
	int getSize();
	int getLength();
	void setArr(T*);
	void setSize(int);
	void printArray();
	MyArr<T> operator+(MyArr<T>&);
	MyArr<T> operator-(MyArr<T>&);
	MyArr<T> operator*(MyArr<T>&);
	MyArr<T> operator/(MyArr<T>&);
	bool operator==(MyArr<T>&);
	bool operator!=(MyArr<T>&);
	bool operator>(MyArr<T>&);
	bool operator<(MyArr<T>&);
	bool operator>=(MyArr<T>&);
	bool operator<=(MyArr<T>&);
	MyArr<T> operator=(MyArr<T>);
	MyArr<T> operator+=(MyArr<T>&);
	MyArr<T> operator-=(MyArr<T>&);
	MyArr<T> operator*=(MyArr<T>&);
	MyArr<T> operator/=(MyArr<T>&);
	void operator()();
	int operator[](int);
	~MyArr();
};

template <typename T>
inline MyArr<T>::MyArr(int size, int* arr)
{
	this->size = size;
	this->arr = new T[size];
	for (int i = 0; i < this->size; i++) {
		this->arr = arr[i];
	}
}

template <typename T>
inline void MyArr<T>::printArray()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
inline MyArr<T>::~MyArr()
{
}
