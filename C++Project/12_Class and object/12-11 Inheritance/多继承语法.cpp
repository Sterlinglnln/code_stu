#include <iostream>
using namespace std;

class base1 {
public:
    int m_A;
    base1() : m_A(100) {}
};

class base2 {
public:
    int m_B;
    base2() : m_B(200) {}
};

class son : public base1, public base2 {
public:
    int m_C;
    int m_D;
    son() : m_C(300), m_D(400) {}
};

void test01() {
    son s1;

    cout << "m_A = " <<  s1.m_A << endl;
    cout << "base1 - m_A = " << s1.base1::m_A << endl; 
    cout << "sizeof(son) = " << sizeof(s1) << endl;
}

int main() {
    test01();
} 