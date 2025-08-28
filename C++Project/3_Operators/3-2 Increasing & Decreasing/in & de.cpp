// increasing and decreasing subsequences
#include <iostream>
using namespace std;

int main() {
    int  a1 = 10 , a2 = 20, a3 = 30, a4 = 40;
    int  b1 = 2, b2 = 3, b3 = 4, b4 = 5;
    int c1, c2, c3, c4;
    c1 = a1++ * b1;
    c2 = ++a2 * b2;
    cout << "c1 = " << c1 << "\ta1 = " << a1 << endl;
    cout << "c2 = " << c2 << "\ta2 = " << a2 << endl;
    c3 = a3-- * b3;
    c4 = --a4 * b4;
    cout << "c3 = " << c3 << "\ta3 = " << a3 << endl;
    cout << "c4 = " << c4 << "\ta4 = " << a4 << endl;
    return 0;
}