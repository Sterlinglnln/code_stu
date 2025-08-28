#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;  // x坐标
    double y;  // y坐标

public:
    // 构造函数
    Point(double x = 0, double y = 0);

    // 设置和获取坐标
    void setPosition(double x, double y);
    double getX() const;
    double getY() const;

    // 计算两点之间的距离
    double distanceTo(const Point& other) const;
};

#endif