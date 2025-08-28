#include <iostream>

using namespace std;

int main() {
    int a = 10;
    // int * p;
    // p = &a;
    int * p = &a;
    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
    *p = 100;
    cout << "a = " << a << endl;
    cout << "Size of (int *) = " << sizeof(int *) << endl;
    cout << "Size of (float *) = " << sizeof(float *) << endl;
    cout << "Size of (double *) = " << sizeof(double *) << endl;
    cout << "Size of (char *) = " << sizeof(char *) << endl;
}