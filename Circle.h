// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;

public:
    Circle(double r = 1.0); // Constructor with default value
    void setRadius(double r);
    double getRadius() const;
    double getArea() const;
};

#endif
