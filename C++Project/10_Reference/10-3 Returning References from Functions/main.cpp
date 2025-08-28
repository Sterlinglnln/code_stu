#include <iostream>

using namespace std;

// int& test01() {
//     int a = 10;
//     return a;
// }

int& test02() {
    static int a = 10;
    return a;
}

int main() {
    // int &ref = test01();
    int &ref = test02();
    cout << ref << endl;
}