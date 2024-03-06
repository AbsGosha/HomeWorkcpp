
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // задание 1
    const int size = 10;
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    for (int i = 0; i > size; i++) {
        cout << array[i] << " " << endl;
    }
    int min = 0;
    for (int i = 1; i < size; i++) {
            if (array[min] > array[i]) {
                    min = array[i];
        }
    }
    cout << "Наименьшее число: " << min << endl;
    int max = array[0];
    for (int i = 1; i < size; i++) {
            if (max < array[i]) {
                    max = array[i];
            }
    }
    cout << "Наибольшее число: " << max << endl;
  
   









}
    
   
 
   







