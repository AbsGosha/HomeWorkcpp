#include "MyArr.h"

template <typename T>
MyArr<T>::MyArr()
{

}

template <typename T>
MyArr<T>::MyArr(MyArr& arr)
{
	this->arr = arr.arr;
	this->size = arr.size;
}

template <typename T>
T* MyArr<T>::getArr()
{
	return this->arr;
}

template <typename T>
int MyArr<T>::getSize()
{
	return this->size;
}

template <typename T>
int MyArr<T>::getLength()
{
	return this->length;
}

template <typename T>
void MyArr<T>::setArr(T* arr)
{
	this->arr = arr;
}

template <typename T>
void MyArr<T>::setSize(int size)
{
	this->size = size;
}

template <typename T>
MyArr<T> MyArr<T>::operator+(MyArr<T>& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + myArr[i];
	}
	return MyArr{ newArr, this->size, 0 };
}

template <typename T>
MyArr<T> MyArr<T>::operator-(MyArr& myArr) {
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - myArr[i];
	}
	return MyArr{ newArr, this->size, 0 };
}

template <typename T>
MyArr<T> MyArr<T>::operator*(MyArr& myArr) {
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * myArr[i];
	}
	return MyArr{ newArr, this->size, 0 };
}

template <typename T>
MyArr<T> MyArr<T>::operator/(MyArr<T>& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] / myArr.arr[i];
	}
	return MyArr<T>{ this->size, newArr };
}

template <typename T>
bool MyArr<T>::operator==(MyArr<T>& myArr)
{
	if (this->size != myArr.size) {
		return false;
	}
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != myArr.arr[i]) {
			return false;
		}
	}
	return true;
}

template <typename T>
bool MyArr<T>::operator!=(MyArr<T>& myArr)
{
	if (this->size != myArr.size) {
		return true;
	}
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != myArr.arr[i]) {
			return true;
		}
	}
	return false;
}

template <typename T>
bool MyArr<T>::operator>(MyArr<T>& myArr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < myArr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 > sum2) {
		return true;
	}
	return false;
}

template <typename T>
bool MyArr<T>::operator<(MyArr<T>& myArr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < myArr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 < sum2) {
		return true;
	}
	return false;
}

template <typename T>
bool MyArr<T>::operator>=(MyArr<T>& myArr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += myArr.arr[i];
	}
	if (sum1 >= sum2) {
		return true;
	}
	return false;
}

template <typename T>
bool MyArr<T>::operator<=(MyArr<T>& myArr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += myArr.arr[i];
	}
	if (sum1 <= sum2) {
		return true;
	}
	return false;
}

template <typename T>
MyArr<T> MyArr<T>::operator=(MyArr<T> myArr)
{
	delete[] this->arr;
	this->arr = myArr.arr;
	this->size = myArr.size;
	return *this;
}

template <typename T>
MyArr<T> MyArr<T>::operator+=(MyArr<T>& myArr)
{
	*this = (*this + myArr);
	return *this;
}

template <typename T>
MyArr<T> MyArr<T>::operator-=(MyArr<T>& myArr)
{
	*this = (*this - myArr);
	return *this;
}

template <typename T>
MyArr<T> MyArr<T>::operator*=(MyArr<T>& myArr)
{
	*this = (*this * myArr);
	return *this;
}

template <typename T>
MyArr<T> MyArr<T>::operator/=(MyArr<T>& myArr)
{
	*this = (*this / myArr);
	return *this;
}

template <typename T>
void MyArr<T>::operator()()
{
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 1; j++) {
			if (this->arr[j] > this->arr[j + 1]) {
				int b = this->arr[j];
				this->arr[j] = this->arr[j + 1];
				this->arr[j + 1] = b;
			}
		}
	}
}

template <typename T>
int MyArr<T>::operator[](int ind)
{
	return this->arr[ind];
}

//void operator>>(istream& in, MyArr& a)
//{
//	// подчеркивает MyArr, не знаю в чем проблема
//}
//
//void operator<<(ostream& out, MyArr& a)
//{
//	//подчеркивает MyArr, не знаю в чем проблема
//}

