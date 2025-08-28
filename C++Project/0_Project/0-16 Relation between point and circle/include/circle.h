#ifndef CIRCLE_H
#define CIRCLE_H

#include "../include/point.h"

class Circle {
private:
    Point center;  // 圆心
    double radius; // 半径

public:
    // 构造函数
    Circle(const Point& center = Point(), double radius = 0);

    // 设置和获取属性
    void setCircle(const Point& center, double radius);
    Point getCenter() const;
    double getRadius() const;

    // 计算圆的面积
    double getArea() const;

    // 判断点与圆的位置关系
    enum Position { INSIDE, ON, OUTSIDE };
    Position determinePosition(const Point& p) const;
};

#endif