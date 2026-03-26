#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    bool guessedCorrectly = false;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber) {
            guessedCorrectly = true;
            cout << "Congratulations! You've guessed the number (" << secretNumber << ") correctly in " << attempts << " attempts!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    } while (!guessedCorrectly);

    return 0;
}
