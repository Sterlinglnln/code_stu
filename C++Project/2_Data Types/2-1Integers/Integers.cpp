// integers
#include <iostream>
using namespace std;

#define short_integer_max 32767 // Maximum value for a short integer
#define short_interger_min -32768 // Minimum value for a short integer
#define int_max 2147483647 // Maximum value for an integer
#define int_min -2147483648 // Minimum value for an integer
#define long_max 9223372036854775807 // Maximum value for a long integer
#define long_min -9223372036854775808 // Minimum value for a long integer
#define long_long_max 9223372036854775807 // Maximum value for a long long
#define long_long_min -9223372036854775808 // Minimum value for a long long integer

int main() {
    short num1 = 10; // This is a named identifier for a short integer variable
    int num2 = 20; // Another named identifier for an integer variable
    long num3 = 30; // This named identifier stores a long integer value
    long long num4 = 40; // This named identifier stores a long long integer value

    cout << "The value of num1 (short integer) is: " << num1 << endl; // Output the value of num1
    cout << "The value of num2 (integer) is: " << num2 << endl; // Output the value of num2
    cout << "The value of num3 (long integer) is: " << num3 << endl; // Output the value of num3
    cout << "The value of num4 (long long integer) is: " << num4 << endl; // Output the value of num4
}