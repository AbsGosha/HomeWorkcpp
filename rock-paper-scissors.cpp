#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    srand(time(NULL));
    int choice;
    int record = 0;
    int count = 0;
    int botChoise;
    string path = "game.txt";
    cout << "1-rock, 2-scissors, 3-paper, 0-stop the game: ";
    cout << endl;
    cin >> choice;
    while (true) {
        if (choice == 0) {
            break;
        }
        ifstream in(path);
        if (in.is_open()) {
            while (getline(in, path)) {
                for (int i = 0; path[i] != '\0'; i++) {
                    record *= 10;
                    record += path[i] - 48;
                }
            }
        }
        botChoise = 1 + rand() % 3;
        switch (choice) {
        case 1:
            cout << "You chose rock, bot chose ";
            switch (botChoise) {
            case 1:
                cout << "rock. Draw";
                break;
            case 2:
                cout << "scissors. You win...";
                count++;
                break;
            case 3:
                cout << "paper. You lose...";
                count = 0;
                break;
            }
            break;
        case 2:
            cout << "You chose paper, bot chose ";
            switch (botChoise) {
            case 1:
                cout << "rock. You win!";
                count++;
                break;
            case 2:
                cout << "paper. Draw";
                break;
            case 3:
                cout << "scissors. You lose...";
                count = 0;
                break;
            }
            break;
        case 3:
            cout << "You chose scissors, bot chose ";
            switch (botChoise) {
            case 1:
                cout << "rock. You lose...";
                count = 0;
                break;
            case 2:
                cout << "papper. You win!";
                count++;
                break;
            case 3:
                cout << "scissors. Draw";
                break;
            }
            break;
        default:
            cout << "ERROR!";
            break;
        }
        if (record < count) {
            record = count;
            ofstream out;
            out.open("game.txt");
            out << record;
            out.close();
        }
        cout << endl << "Winstreak: " << count;
        cout << endl << "1-rock, 2-scissors, 3-paper, 0-exit the game: ";
        cin >> choice;
    }
}
