#include <iostream>
#include <memory>
#include <vector>

class Shape {
public:
    virtual double area() const = 0;
    virtual void displayName() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override {
        return length * width;
    }

    void displayName() const override {
        std::cout << "Rectangle";
    }
};
