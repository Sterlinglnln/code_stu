#include <iostream>

using namespace std;

int main() {
    int * p = NULL; // This is the null pointer
    *p = 100;
    cout << *p << endl;

    int * p = (int *)0x1100; // This is the wild pointer
    cout << *p << endl;
}