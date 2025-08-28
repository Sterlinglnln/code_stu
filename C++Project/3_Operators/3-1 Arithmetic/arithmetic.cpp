// arithmetic
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    if (b != 0) {
        cout << "Quotient: " << a / b << endl;
        cout << "Remainder: " << a % b << endl; // Note: This will only work if b is not zero
    }
    else {
        cout << "Division by zero is not allowed." << endl;
    }
}