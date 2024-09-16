// Sphere.cpp
#include "Sphere.h"

Sphere::Sphere(double r) : Circle(r) {}

double Sphere::getVolume() const {
    double r = getRadius();
    return (4.0 / 3.0) * 3.14159 * r * r * r;
}

double Sphere::getSurfaceArea() const {
    double r = getRadius();
    return 4 * 3.14159 * r * r;
}
