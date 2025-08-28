#include <iostream>
#include <Windows.h>

using namespace std;

const double PI = 3.14;

class Circle {
public: 
    double r;

    double caclu() {
        return 2 * PI * r;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Circle c1;
    
    c1.r = 2.0;

    cout << "圆的周长为：" << c1.caclu() << endl;
}