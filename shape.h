// shape.h
#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape
{
private:
    Point origin;
    char* shapeName;

public:
    // No default constructor
    Shape(double x, double y, const char* name);

    // Rule of Three
    Shape(const Shape& other);
    Shape& operator=(const Shape& other);

    virtual ~Shape();

    // Getters
    const Point& getOrigin() const;
    const char* getName() const;

    virtual void display() const;

    double distance(const Shape& other) const;
    static double distance(const Shape& s1, const Shape& s2);

    void move(double dx, double dy);
};

#endif