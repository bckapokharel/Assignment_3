// Circle.cpp
#include "Circle.h"
#include <iostream>

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::setRadius(double r) {
    if (r >= 0) {
        radius = r;
    } else {
        std::cerr << "Radius cannot be negative." << std::endl;
        radius = 0;
    }
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return 3.14159 * radius * radius;
}
