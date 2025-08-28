#include <iostream>
using namespace std;

class base {
public:
    static int m_A; //类内定义

    static void funv() {
        cout << "Hello, world!!!" << endl;
    }
};

int base::m_A = 100;    // 全局声明

class son : public base {
public:
    static int m_A;

    static void funv() {
        cout << "Hello, world!" << endl;
    }
};

int son::m_A = 200;

void test01() {
    // 通过对象访问
    son s1;
    cout << "m_A = " << s1.m_A << endl;
    cout << "m_A = " << s1.base::m_A << endl;

    // 通过类名访问
    cout << "m_A = " << son::m_A << endl;
    cout << "m_A = " << son::base::m_A << endl;
}

void test02() {
    son s2;
    s2.funv();
    s2.base::funv();
    son::funv();
    son::base::funv();
}

int main() {
    // test01();
    test02();

    return 0;
}