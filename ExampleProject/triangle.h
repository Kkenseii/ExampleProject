#pragma once
#include <string>
#include <stdexcept>

class Triangle {
    double _side;
    double _height;

public:
    Triangle();
    Triangle(double s, double h);
    Triangle(const Triangle& other);
    ~Triangle();

    double calculateArea() const;

    double getSide() const;
    double getHeight() const;

    void setSide(double newSide);
    void setHeight(double newHeight);
    void setSideAndHeight(double newSide, double newHeight);

    Triangle& operator=(const Triangle& other);
    bool operator==(const Triangle& other) const;
    bool operator>(const Triangle& other) const;
    bool operator<(const Triangle& other) const;

    std::string toString() const;
};