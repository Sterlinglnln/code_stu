// Trinocular operator
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a and b: ";
    cin >> a >> b;
    c = (a > b) ? a : b; // c is assigned the greater of a and b
    cout << "The greater value is: " << c << endl;
    return 0;
}