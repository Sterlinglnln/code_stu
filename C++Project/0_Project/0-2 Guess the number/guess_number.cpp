// Using a while loop to guess the number from 1 to 100
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int target = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0, attempts = 0;
    cout << "Guess the number between 1 and 100!" << endl;
    while (guess != target) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if(attempts <= 10) {
            if (guess < target) {
                cout << "Too low! Try again." << endl;
            } else if (guess > target) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You've guessed the number " << target << " in " << attempts << " attempts!" << endl;
            }
        } else {
            cout << "Sorry, you've used all your attempts. The number was " << target << endl;
            break;
        }
    } 
}
