// Real Types
#include <iostream>
using namespace std;

int main() {
    float f1 = 3.14f; // This is a named identifier for a float variable
    double d1 = 3.14159265; // This is a named identifier for a double variable
    cout << "The value of float f1 is: " << f1 << endl; // Output the value of float f1
    cout << "The value of double d1 is: " << d1 << endl; // Output the value of double d1   

    // The size of float and double types
    cout << "Size of float: " << sizeof(f1) << " bytes" << endl; // Output the size of float
    cout << "Size of double: " << sizeof(d1) << " bytes" << endl; // Output the size of double
    
    //Scientist notation
    float f2 = 1.23e4f; // This is a named identifier for a float variable in scientific notation
    double d2 = 1.23e-4; // This is a named identifier for a double variable in scientific notation
    cout << "The value of float f2 in scientific notation is: " << f2 << endl; // Output the value of float f2
    cout << "The value of double d2 in scientific notation is: " << d2 << endl; // Output the value of double d2
    return 0;
}
// This program demonstrates the use of real types (float and double) in C++