#include <iostream>
#include <windows.h>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int val = 0) : value(val) {}

    // 拷贝赋值运算符
    Counter& operator=(const Counter& other) {
        if (this != &other) {  // 防止自赋值
            value = other.value;  // 复制值
        }
        return *this;  // 返回引用以支持链式赋值
    }

    int getValue() const {
        return value;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Counter a(5);
    Counter b(10);

    a = b;  // 调用拷贝赋值运算符
    cout << "a 的值: " << a.getValue() << endl;

    // 链式赋值
    Counter c;
    c = a = b;
    cout << "c 的值: " << c.getValue() << endl;
}