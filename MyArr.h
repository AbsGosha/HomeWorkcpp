#pragma once
#include <iostream>
using namespace std;
template <typename T>

class Array
{
private:
	T* arr;
	int size;
	int grow;
	int length = 0;
public:
	Array() {
		arr = new T[5];
	}
	Array(int size) {
		this->arr = new T[size];
		this->size = size;
	}
	Array(Array& arr) {
		this->arr = new T[array.size];
		for (int i = 0; i < size; i++) {
			this->arr[i] = arr[i];
		}
		this->size = arr.size;
		this->length = arr.length;
	}
	int getSize() {
		return this->size;
	}
	void setSize(int size, int grow = 1) {
		if (size < this->length) this->length = size;
		this->size = size;
		T* buf = new T[size];
		for (int i = 0; i < this->length; i++) {
			buf[i] = this->arr[i];
		}
		delete[] this->arr;
		this->arr = buf;
	}
	int getUpperBound() {
		return this->length - 1;
	}
	bool isEmpty() {
		return length == 0;
	}
	void freeExtra() {
		if (this->size > this->length) this->size = this->length;
	}
	void removeAll() {
		this->length = 0;
	}
	T getAt(int ind) {
		return this->arr[ind];
	}
	void setAt(int ind, T elem) {
		this->arr[ind] = elem;
	}
	T operator[](int ind) {
		return this->arr[ind];
	}
	void add(T elem) {
		this->length++;
		if (this->size > length) {
			this->arr[length] = elem;
		}
		else {
			T* buf = new T[this->size + grow];
			for (int i = 0; i < this->length - 1; i++) {
				buf[i] = this->arr[i];
			}
			buf[this->length] = elem;
			delete[] this->arr;
			this->arr = buf;
			this->size = size + grow;
		}
	}
};
