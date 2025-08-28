#include <iostream>

using namespace std;

class Circle {
public:
    double radius;
    Circle(double r) : radius(r) {};
    Circle(const Circle& other) : radius(other.radius) {};
};

void test01() {
    Circle c1(10.0);
    Circle c2(c1);
    cout << "This is initialize a new object with an existing object." << endl;
    cout <<  c2.radius << endl;
}

void doWork01(Circle c2) {
    c2.radius = 20;
}

void test02() {
    Circle c1(10.0);
    Circle c2(c1);
    doWork01(c2);
    cout << c2.radius << endl;
}

Circle doWork02() {
    Circle c2(10.0);
    return c2;
}

void test03() {
    Circle c3 = doWork02();
    cout << c3.radius << endl;
}

int main() {
    // test01();
    // test02();
    test03();
}