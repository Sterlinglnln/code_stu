// Using continue to print odd numbers from 0 to 100
#include <iostream>

using namespace std;

int main() {
    cout << "Odd numbers from 0 to 100:\n";
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << i << " "; // Print odd numbers
    }
}