#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double width;
    double height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    virtual double getArea() {
        return 0;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    double getArea() override {
        return width * height;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    double getArea() override {
        return (width * height) / 2;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setDimensions(5, 3);
    cout << "Rectangle Area: " << rectangle.getArea() << endl;

    Triangle triangle;
    triangle.setDimensions(4, 6);
    cout << "Triangle Area: " << triangle.getArea() << endl;

    return 0;
}