#include <iostream>
using namespace std;

class Person {
    friend void test01();
    friend ostream& operator<<(ostream& cout,Person& p);
private:
    int m_A;
    int m_B;
};
ostream& operator<<(ostream& cout,Person& p) {
    cout << "m_A = " << p.m_A << ", m_B = " << p.m_B;
    return cout;
}

void test01() {
    Person p1;
    p1.m_A = 10;
    p1.m_B  = 20;

    cout << p1;
}

int main() {
    test01();
}