#pragma once
#include <iostream>
using namespace std;
template <typename T>
struct Node
{
	T value;
	Node* next;

	Node(T value) : value(value), next(nullptr) {}
};

template <typename T>
class List
{
private:
	Node<T>* first;
public:
	List() {
		this->first = nullptr;
	}
	void clearMemory() {
		Node<T>* p = this->first;
		while (p != nullptr) {
			delete p;
			p = p->next;
		}
	}
	bool empty() { return (first == nullptr) ? true : false; }
	void print() {
		Node<T>* p = this->first;
		while (p != nullptr) {
			cout << p->value << " ";
			p = p->next;
		}
		cout << endl;
	}
	void push_back(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T>* p = this->first;
		while (p->next != nullptr) {
			p = p->next;
		}
		p->next = new Node<T>(value);
	}
	void push_front(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T>* p = this->first;
		this->first = new Node<T>(value);
		this->first->next = p;
	}
	void delete_last() {
		if (this->empty()) {
			return;
		}
		Node<T>* p = first;
		while (p->next->next != nullptr) {
			p = p->next;
		}
		delete p->next;
		p->next = nullptr;

	}
	void delete_first() {
		if (this->empty()) {
			return;
		}
		Node<T>* p = first;
		first = p->next;
		delete p;
	}
	int getSize() {
		Node<T>* p = first;
		int counter = 0;
		while (p->next != nullptr) {
			p = p->next;
			counter++;
		}
		return counter;
	}
	Node<T>* lineSearch(T value)
	{
		Node<T>* p = first;
		while (p->next != nullptr) {
			if (p->value == value) {
				return p;
			}
			p = p->next;
		}
	}
	void insert(T value, int ind) {
		if (this->empty()) {
			return;
		}
		if (ind == 0) {
			push_front(value);
		}
		Node<T>* p = this->first;
		for (int i = 0; i < ind - 1; i++) {
			p = p->next;
		}
		Node<T> *newNode = new Node<T>(value);
		p->next = newNode;
	}
	T& operator[](const int ind) {
		int counter = 0;
		Node<T>* p = this->first;
		while (p != nullptr) {
			if (counter == ind) {
				return p->value;
			}
			p = p->next;
			counter++;
		}
	}


};

