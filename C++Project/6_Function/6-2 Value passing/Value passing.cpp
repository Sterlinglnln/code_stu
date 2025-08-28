#include <iostream>

using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
    // Note: This swap does not affect the original variables in main
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}