// Using nested loops to print a 9x9 multiplication table:
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " * " << i << " = " << i * j << "\t";
        }
        cout << endl; // Move to the next line after printing each row
    }
}