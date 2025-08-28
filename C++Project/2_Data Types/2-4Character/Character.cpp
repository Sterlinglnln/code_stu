// character
#include <iostream>
using namespace std;

int main() {
    char ch1 = 'a'; // This is a named identifier for a character variable
    cout << "The value of character ch1 is: " << ch1 <<endl; // Output the value of character ch1
    cout << "The ASCII value of character ch1 is: " << (int)ch1 << endl; // Output the ASCII value of character ch1
    cout << "The size of character ch1 is: " << sizeof(ch1) << " bytes" << endl; // Output the size of character ch1

    char ch2 = 'A'; // This is another named identifier for a character variable
    cout << "The value of character ch2 is: " << ch2 << endl; // Output the value of character ch2
    cout << "The ASCII value of character ch2 is: " << (int)ch2 << endl; // Output the ASCII value of character ch2
    cout << "The size of character ch2 is: " << sizeof(ch2) << " bytes" << endl; // Output the size of character ch2
}