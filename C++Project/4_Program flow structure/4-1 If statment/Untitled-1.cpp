// if statment
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a score: ";
    cin >> a;
    if (a >= 90) {
        cout << "Grand A" << endl;
    } else if (a >= 80) {
        cout << "grand B" << endl;
    } else if (a >= 70) {
        cout << "Grand C" << endl;
    } else if (a >= 60) {
        cout << "Grand D" << endl;
    } else {
        cout << "Grand F" << endl;
    }
 }