#include <iostream>

using namespace std;

class Point {
private:
    int x, y;
public:
    // 默认构造函数（无参数）
    Point() : x(0), y(0) {}
    
    // 带默认参数的构造函数（也可作为默认构造函数）
    // Point(int x = 0, int y = 0) : x(x), y(y) {}
};

class Rectangle {
private:
    double width, height;
public:
    // 有参构造函数
    Rectangle(double w, double h) : width(w), height(h) {}
};


class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    Circle(const Circle& other) : radius(other.radius) {}
};



int main() {
    // Point p1;  // 隐式调用
    // Rectangle r1(5.0, 3.0);
    // Rectangle r2 = Rectangle(5.0, 3.0);  // 显式调用
    // Point p2 = Point();

    // Circle c1(5.0);
    // Circle c2(c1);           // 拷贝构造
    // Circle c3 = c1;          // 拷贝构造（赋值语法）

}