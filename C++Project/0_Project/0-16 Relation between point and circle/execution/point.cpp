#include "../include/point.h"
#include <cmath>
using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

void Point::setPosition(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

double Point::distanceTo(const Point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}