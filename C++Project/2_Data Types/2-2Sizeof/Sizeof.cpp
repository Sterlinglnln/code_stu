// sizeof()
#include <iostream>
using namespace std;

int main() {
    short num1 = 10; // This is a named identifier for a short integer variable
    cout << "Size of short: " << sizeof(num1) << " bytes" << endl; // Output the size of short
    int num2 = 20; // Another named identifier for an integer variable
    cout << "Size of int: " << sizeof(num2) << " bytes" << endl; // Output the size of int
    long num3 = 30; // This named identifier stores a long integer value
    cout << "Size of long: " << sizeof(num3) << " bytes" << endl; // Output the size of long
    long long num4 = 40; // This named identifier stores a long long integer value
    cout << "Size of long long: " << sizeof(num4) << " bytes" << endl; // Output the size of long long
    return 0;
}