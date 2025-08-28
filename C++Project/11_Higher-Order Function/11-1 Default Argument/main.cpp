#include <iostream>

using namespace std;

// 默认参数
int sum(int a = 10, int b = 20);// 声明和实现不能都有默认值

int sum(int a = 10, int b = 20) {
    return a + b;
}

// 占位参数
void func(int c, int) {
    cout << "This is a func." << endl;
}

int main() {
    func(10, 20); //第二个参数必须有
    cout << "No, It's not a func." << endl;
}