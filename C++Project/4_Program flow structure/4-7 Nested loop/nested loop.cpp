// Print a 10*10 "*" pattern by using nested loops
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << "* ";
        }
        cout << endl; // Move to the next line after printing 10 stars
    }
}