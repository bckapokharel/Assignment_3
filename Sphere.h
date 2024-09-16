// Sphere.h
#ifndef SPHERE_H
#define SPHERE_H

#include "Circle.h"

class Sphere : public Circle {
public:
    Sphere(double r = 1.0); // Constructor with default value
    double getVolume() const;
    double getSurfaceArea() const; // Overriding getArea()
};

#endif
