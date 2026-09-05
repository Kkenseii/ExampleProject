#include <iostream>

int main() {

	float side, height, area;

	std::cout << "Welcome to calculator of the area of a triangle!" << std::endl;
	std::cout << "Enter the side: " << std::endl;
	std::cin >> side;
	std::cout << "Enter the height corresponding to the given side: " << std::endl;
	std::cin >> height;

	area = 0.5 * side * height;

	std::cout << "The area of triangle is " << area;

	return 0;
}