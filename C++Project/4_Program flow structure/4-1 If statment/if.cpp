// if statment
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a score: ";
    cin >> a;
    if (a >= 90 && a <= 100) {
        cout << "Grand A" << endl;
    } else if (a >= 80 && a < 90) {
        cout << "grand B" << endl;
    } else if (a >= 70 && a < 80) {
        cout << "Grand C" << endl;
    } else if (a >= 60 && a < 70) {
        cout << "Grand D" << endl;
    } else if (a >= 50 && a < 60) {
        cout << "Grand F" << endl;
    } else if (a < 0 || a > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
    }
 }