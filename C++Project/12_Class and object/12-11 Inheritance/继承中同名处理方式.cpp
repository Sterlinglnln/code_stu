#include <iostream>
#include <windows.h>
using namespace std;

class base {
    friend void test01();

private:
    int m_A;

public:
    base() : m_A(100) {}
    void func() {
        cout << "base - func()调用 " << endl;
    }
};

class son : public base {
    friend void test01();
private:
    int m_A;
public:
    son() : m_A(50) {}
    void func() {
        cout << "son - func()调用 " << endl;
    }
};

void test01() {
    son s1;
    cout << "son_m_A = " << s1.m_A << endl;
    cout << "base_m_A = " << s1.base::m_A << endl;
}

void test02() {
    son s2;
    s2.func();
    s2.base::func();
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // test01();
    test02();
}