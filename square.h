// square.h
#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
protected:
    double side_a;

public:
    // No default constructor
    Square(double x, double y, double side_a, const char* name);

    // getters and setters
    double get_side_a() const;
    void set_side_a(double side);

    virtual double area() const;
    virtual double perimeter() const;

    void display() const override;
};

#endif