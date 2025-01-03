#pragma once
#include "MyList.h"
using namespace std;

template <typename T>
class Queue
{
private:
	List<T> arr;
public:
	Queue(T* arr, int size) : arr(arr, size) {}
	Queue(Queue<T>& queue) {
		this->arr = queue.arr;
	}
	void pushBack(T value) { this->arr.pushBack(value); }
	void popStart() {
		Node<T>* p = this->arr.getFirst();
		this->arr.pushBack(p->value);
		this->arr.popStart();
	}
	void print() {
		this->arr.print();
	}
	~Queue() {
	}
};
