#include <iostream>
#include "Triangle.h"

int main()
{
    double side, height;

    std::cout << "Enter the side of triangle: ";
    std::cin >> side;

    std::cout << "Enter the height of triangle: ";
    std::cin >> height;

    try
    {
        Triangle triangle(side, height);
        std::cout << "\nTriangle is made: " << triangle.toString() << std::endl;
        std::cout << "The area: " << triangle.calculateArea() << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "Error to make triangle: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}