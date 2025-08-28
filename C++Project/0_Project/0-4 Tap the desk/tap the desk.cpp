// Tap the desk if the units or tens digit of the number is 7, or if the number is a multiple of 7, otherwise print the number itself
// using a for loop to do this task
#include <iostream>

using namespace std;

int main() {
    for (int num = 1; num <= 100; ++num) {
        if(num % 7 == 0 || num % 10 == 7 || (num / 10) % 10 == 7) {
            cout << "Tap the desk!" <<endl;
        }
        else {
            cout << num << endl;
        }
    }
}