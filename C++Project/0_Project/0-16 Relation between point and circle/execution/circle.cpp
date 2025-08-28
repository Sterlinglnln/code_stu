#include "../include/circle.h"
#include <cmath>

Circle::Circle(const Point& center, double radius) 
    : center(center), radius(radius) {}

void Circle::setCircle(const Point& center, double radius) {
    this->center = center;
    this->radius = radius;
}

Point Circle::getCenter() const { return center; }
double Circle::getRadius() const { return radius; }

double Circle::getArea() const {
    return 3.14159 * radius * radius;
}

Circle::Position Circle::determinePosition(const Point& p) const {
    double dist = p.distanceTo(center);
    if (dist < radius) return INSIDE;
    else if (dist == radius) return ON;
    else return OUTSIDE;
}