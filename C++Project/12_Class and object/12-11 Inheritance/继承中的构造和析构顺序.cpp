#include <iostream>
#include <windows.h>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base构造函数！" << endl;
    }
    ~Base() {
        cout << "Base析构函数！" << endl;
    }
};

class Son : public Base {
public:
    Son() {
        cout << "Son构造函数！" << endl;
    }
    ~Son() {
        cout << "Son析构函数！" << endl;
    }
};

void test01() {
    // Base b1;
    Son s1; // 先进后出
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    test01();
}