// Input
#include <iostream>
using namespace std;

int main() {
    // integer input
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "You entered: " << n << endl;
    // float input
    float f;
    cout << "Enter a float: ";
    cin >> f;
    cout << "You entered: " << f << endl;
    // character input
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "You entered: " << c << endl;
    // string input
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "You entered: " << s << endl;
    // boolean input
    bool b;
    cout << "Enter a boolean (0 or 1): ";
    cin >> b;
    cout << "You entered: " << (b ? "true" : "false") << endl;
}