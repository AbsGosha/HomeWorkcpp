#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List <int> list;
	//list.push_front(1);
	//list.push_front(2);
	//list.push_front(3);
	//list.push_front(4);
	//list.push_front(5);
	list.print();
	cout << endl;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	list.print();
	cout << endl;
	cout << list[2] << endl;
	list.insert(5, 2); // метод insert работает, но после того как вставил элемент по нужному индексу, не выводит следующие элементы, которые идут за ним
	list.print();

}

