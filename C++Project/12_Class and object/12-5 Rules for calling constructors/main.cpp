#include <iostream>

using namespace std;

class Rectangle {
public:
    double width, height;
    double areaRect = (width * height) / 2.0;
    Rectangle(double w, double h) : width(w), height(h) {}
    Rectangle(const Rectangle& other) : width(other.width), height(other.height) {} 
};

void test() {
    Rectangle r(10.0, 20.0);
    cout << r.areaRect << endl;
}

int main() {
    test();
    Rectangle r1(1.0, 2.0);
    Rectangle r2(r1);
    cout << r2.areaRect << endl;
}