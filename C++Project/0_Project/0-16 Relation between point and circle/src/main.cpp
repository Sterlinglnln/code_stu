#include <iostream>
#include <windows.h>
#include "../include/circle.h"
#include "../include/point.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Point p, center;
    Circle c;

    center.setPosition(0, 0);
    c.setCircle(center, 5.0);

    p.setPosition(3, 4);

    Circle::Position pos = c.determinePosition(p);

    cout << "圆的信息：" << endl;
    cout << "圆心坐标：(" << center.getX() << ", " << center.getY() << ")" << endl;
    cout << "半径：" << c.getRadius() << endl;
    cout << "圆的面积：" << c.getArea() << endl;

    cout << "\n点的信息:" << endl;
    cout << "点坐标：(" << p.getX() << ", " << p.getY() << ")" << endl;

    cout << "\n位置关系:";
    switch (pos) {
        case Circle::INSIDE:
            cout << "点在圆内" << endl;
            break;
        case Circle::ON:
            cout << "点在圆上" << endl;
            break;
        case Circle::OUTSIDE:
            cout << "点在圆外" << endl;
            break;
    }
}