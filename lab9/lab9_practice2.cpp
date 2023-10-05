#include <iostream>
using namespace std;

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main()
{
    float radius, diameter, circle, area;
    cout<<"Enter radius of circle: ";
    cin>>radius;

    diameter  = getDiameter(radius);
    circle = getCircumference(radius);
    area = getArea(radius);
    cout<<"Diameter of the circle: "<<diameter <<" units"<<endl;
    cout<<"Circumference of the circle: "<< circle<<" units"<<endl;
    cout<<"Area of the circle:"<< area<<" sq. units"<<endl;

    return 0;
}

double getDiameter(double radius)
{
    return (2 * radius);
}
double getCircumference(double radius)
{
    return (2 * 3.14 * radius);
}
double getArea(double radius)
{
    return (3.14 * radius * radius);
}
