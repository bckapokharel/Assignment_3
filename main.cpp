// main.cpp
#include <iostream>
#include "Circle.h"
#include "Sphere.h"

int main() {
    Circle circle(5.0);
    std::cout << "Circle Radius: " << circle.getRadius() << std::endl;
    std::cout << "Circle Area: " << circle.getArea() << std::endl;

    Sphere sphere(5.0);
    std::cout << "Sphere Radius: " << sphere.getRadius() << std::endl;
    std::cout << "Sphere Volume: " << sphere.getVolume() << std::endl;
    std::cout << "Sphere Surface Area: " << sphere.getSurfaceArea() << std::endl;

    return 0;
}
