

#include <iostream>
using namespace std;
int main()
{
    char field1[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == j % 2) {
                field1[i][j] = 219;
            }
            else {
                field1[i][j] = ' ';
            }
        }
    }
    char field[8][8];
    int coordinate1;
    int coordinate2;
    cin >> coordinate1;
    cin >> coordinate2;
    cout << "  a b c d e f g h" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == coordinate1 - 1 && j == coordinate2 - 1) {
                field[i][j] = '@';
            }
        }
    }
    field[coordinate1 - 2][coordinate2 - 3] = '**';
    field[coordinate1 - 2][coordinate2 + 1] = '**';
    field[coordinate1 - 0][coordinate2 + 1] = '**';
    field[coordinate1 - 0][coordinate2 - 3] = '**';
    field[coordinate1 + 1][coordinate2 - 2] = '**';
    field[coordinate1 + 1][coordinate2 - 0] = '**';
    field[coordinate1 - 3][coordinate2 - 2] = '**';
    field[coordinate1 - 3][coordinate2 - 0] = '**';
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            cout << field[i][j] << field[i][j];
        }
        cout << endl;
    }

}

