#include <iostream>
using namespace std;
#include "BinaryTree.h"
int main()
{
	int* arr = new int[5] { 5,3,7,8,4 };
	BinaryTree tree(arr, 5);
	tree.print(tree.getRoot());
	cout << endl;
	tree.insert(4, tree.getRoot());
	cout << endl;
	tree.print(tree.getRoot());
}
