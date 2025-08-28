#include <iostream>
#include <windows.h>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int val = 0) : value(val) {}

    // 前置递增 (++obj)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // 后置递增 (obj++)
    Counter operator++(int) {
        Counter temp = *this;
        ++(*this);
        return temp;
    }

    int getValue() const { return value; }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Counter c(5);

    cout << "前置递增: " << (++c).getValue() << endl;
    cout << "后置递增: " << (c++).getValue() << endl;
    cout << "后置递增后: " << c.getValue() << endl;
}