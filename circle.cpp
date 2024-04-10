#include <iostream>
#include "circle.h"
using namespace std;

int main()
{

    Circle c(1.0);

    cout << "Radius: " << c.getRadius() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
    cout << "Area: " << c.getArea() << endl;

    return 0;
}
