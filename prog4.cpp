#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Circle : public Shape
{
public:
    double radius;
    Circle(double r)
    {
        this->radius = r;
    }

    double area()
    {
        return 3.14 * radius * radius;
    }
};

class Rectanagle : public Shape
{
public:
    double length, width;
    Rectanagle(double l,double w)
    {
        this->length = l;
        this->width = w;
    }
    double area()
    {
        return length * width;
    }
};

int main()
{
    Circle obj1(5);
    cout << "Area of Circle : "<<obj1.area()<<endl;

    Rectanagle obj2(5, 3);
    cout<< "Area of Rectanagle : "<<obj2.area()<<endl;
    return 0;
}