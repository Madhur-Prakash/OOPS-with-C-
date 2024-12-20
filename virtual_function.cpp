#include <iostream>
#include <cmath>

using namespace std;

// Abstract base class
class Shape {
public:
    virtual double area() const = 0;       // Pure virtual function for area
    virtual double perimeter() const = 0;  // Pure virtual function for perimeter
    virtual ~Shape() = default;            // Virtual destructor
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
    double perimeter() const override { return 2 * (width + height); }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return M_PI * radius * radius; }
    double perimeter() const override { return 2 * M_PI * radius; }
};

// Main function to test the classes
int main() {
    Shape* shapes[2];
    shapes[0] = new Rectangle(5.0, 3.0);
    shapes[1] = new Circle(4.0);

    for (int i = 0; i < 2; ++i) {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() << endl;
        cout << "Shape " << i + 1 << " Perimeter: " << shapes[i]->perimeter() << endl;
        delete shapes[i];
    }
    return 0;
}
