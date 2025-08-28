// comparison
#include <iostream>
using namespace std;

int main() {
    int a1 = 10, a2 = 20, a3 = 30, a4 = 40;
    int b1 = 2, b2 = 3, b3 = 4, b4 = 5;
    cout << "a1 == b1: " << (a1 == b1) << endl; // Equal to
    cout << "a2 != b2: " << (a2 != b2) << endl; // Not equal to
    cout << "a3 > b3: " << (a3 > b3) << endl;   // Greater than
    cout << "a4 < b4: " << (a4 < b4) << endl;   // Less than
    cout << "a1 >= b1: " << (a1 >= b1) << endl; // Greater than or equal to
    cout << "a2 <= b2: " << (a2 <= b2) << endl; // Less than or equal to
    return 0;
}