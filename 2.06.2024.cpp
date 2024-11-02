#include <iostream>
using namespace std;
// задание 1
void delElem(char str[], int n) {
    for (int i = n; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
}
// задание 2
void delElemInd(char str[], char elem) {
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == elem) {
            k++;
        }
        if (str[i + k] == elem) {
            k++;
        }
        str[i] = str[i + k];
    }
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
}
 //задание 3
void addElem(char str[], char elem, int position, int strPast) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (strPast == str[i]) {
            for (int j = 0; j < strlen(str); j++) {
                if (position == str[j]) {
                    str[j] == elem;
                }
            }
        }
    }
}

// задание 4
void swapElem(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
}
// задание 5
void countElem(char str[], char elem) {
    int a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == elem) a++;
    }
    cout << a;
}
// задание 6
void countElemTypes(char str[]) {
    int num = 0;
    int symbol = 0;
    int letter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            num++;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            letter++;
        }
        else {
            symbol++;
        }
    }
    cout << "Numbers: " << num;
    cout << endl << "Letters: " << letter;
    cout << endl << "Symbols: " << symbol;
}
int main()
{
    char str[] = { "ajghb.?.,,..cdqwert!!ywe!fg4336h...gfhtg!" };
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
    delElem(str, 4);
    cout << endl;
    delElemInd(str, 'g');
    cout << endl;
    swapElem(str);
    cout << endl;
    countElem(str, '!');
    cout << endl;
    countElemTypes(str);
    addElem(str, '*', 6, 1);
}