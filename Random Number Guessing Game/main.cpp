/*
Code File Name: Chapter5Exercise2.cpp
Programmer: Maya Moton
Due Date: 04/26/26
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
//spans randomnumber
    srand(time(0));
//setting it to be between 1 and 100
    int randomNum = rand() % 100 + 1;
    int guess;

    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

    while (guess != randomNum) {
        if (guess > randomNum) {
            cout << "Too high, try again.\n";
        }
        else {
            cout << "Too low, try again.\n";
        }
        cout << "Enter another guess: ";
        cin >> guess;
    }
    cout << "Correct! You guessed the number.\n";
    return 0;
}

