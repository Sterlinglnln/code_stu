#include <iostream>

using namespace std;

// 函数重载
// int sum(int a, int b) {
//     return a + b;
// }

// double sum(double c, int d) {
//     return c + d;
// }

// int sum(int a, int b, int c) {
//     return a + b + c;
// }

// 注意事项
void func(int &a) {
    cout << "func(int &a)" << endl;
}

void func(const int &a) {
    cout << "func(const int &a)" << endl;
}

int sum(int a, int b = 10) {
    return a + b;
}

int sum(int a, int b = 10, int c = 30) {
    return a + b + c;
}

int main() {
    // int num1 = sum(1, 1);
    // double num2 = sum(3.14, 1);
    // float num3 = sum(1, 3, 4);
    // cout << "num1 = " << num1 << "   "
    //      << "num2 = " << num2 << "   "
    //      << "num3 = " << num3 << "   ";

    // int a = 10;
    // func(a);
    // func(10);

    int num1 = sum(10);
    cout << num1 << endl;
}