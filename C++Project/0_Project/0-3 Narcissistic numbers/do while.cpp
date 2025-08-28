// using a do...while loop to find all narcissistic numbers from 100 to 999
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num = 100; // Start from 100
    do {
        int hundreds = num / 100;   // Extract hundreds place
        int tens = (num / 10) % 10; // Extract tens place
        int units = num % 10;     // Extract units place
        if (fabs(pow(hundreds, 3) + pow(tens, 3) + pow(units, 3) - num)<0.000001) {
            cout << num << " is a narcissistic number." << endl;
        }
    }
    while (++num < 1000); // Continue until num reaches 1000
    return 0;
}