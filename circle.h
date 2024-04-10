#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    double radius = 1;
    double diameter = 1;

public:
    Circle(double r) : radius(r), diameter(2 * r) {}

    double getRadius()
    {
        return radius;
    }

    double getDiameter()
    {
        return diameter;
    }

    double getCircumference()
    {
        return 2 * 3.14159 * radius;
    }

    double getArea()
    {
        return 3.14159 * radius * radius;
    }
};

#endif