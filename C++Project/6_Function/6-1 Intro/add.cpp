#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Main function to demonstrate the add function
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}