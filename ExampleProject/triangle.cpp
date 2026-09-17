#include "Triangle.h"
#include <sstream>
#include <cmath>

Triangle::Triangle(){
    _side = 1.0;
    _height = 1.0;
}

Triangle::Triangle(double s, double h) {
    setSide(s);
    setHeight(h);
}

Triangle::Triangle(const Triangle& other) {
    _side = other._side;
    _height = other._height;
}

Triangle::~Triangle() {}

double Triangle::calculateArea() const {
    return (_side * _height) / 2.0;
}

double Triangle::getSide() const{
    return _side;
}

double Triangle::getHeight() const {
    return _height;
}

void Triangle::setSide(double newSide) {
    if (newSide <= 0) {
        throw std::invalid_argument("Invalid argument: THE SIDE CANT BE LOWER THAN ZERO");
    }
    _side = newSide;
}

void Triangle::setHeight(double newHeight) {
    if (newHeight <= 0) {
        throw std::invalid_argument("Invalid argument: THE HEIGHT CANT BE LOWER THAN ZERO");
    }
    _height = newHeight;
}

void Triangle::setSideAndHeight(double newSide, double newHeight) {
    if (newSide <= 0) {
        throw std::invalid_argument("Invalid argument: THE SIDE CANT BE LOWER THAN ZERO");
    }
    if (newHeight <= 0) {
        throw std::invalid_argument("Invalid argument: THE HEIGHT CANT BE LOWER THAN ZERO");
    }
    _side = newSide;
    _height = newHeight;
}

Triangle& Triangle::operator=(const Triangle& other) {
    if (this != &other)
    {
        _side = other._side;
        _height = other._height;
    }
    return *this;
}

bool Triangle::operator==(const Triangle& other) const {
    const double EPSILON = 1e-9;
    double area1 = calculateArea();
    double area2 = other.calculateArea();
    return std::abs(area1 - area2) < EPSILON;
}

bool Triangle::operator>(const Triangle& other) const {
    return calculateArea() > other.calculateArea();
}

bool Triangle::operator<(const Triangle& other) const {
    return calculateArea() < other.calculateArea();
}

std::string Triangle::toString() const {
    std::stringstream ss;
    ss << "Triangle (side = " << _side << ", height = " << _height << ", area = " << calculateArea() << ")";
    return ss.str();
}
