#include <iostream>

using namespace std;

void showValue(const int &val) {
    // val = 1000;
    cout << val << endl;
}

int main() {
    int a = 100;
    showValue(a);
    cout << a << endl;
}