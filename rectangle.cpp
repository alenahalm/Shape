#include "shape.h"

Rectangle::Rectangle(double sideA, double sideB) {
	this->a = sideA;
	this->b = sideB;
}
double Rectangle::area() {
	return a * b;
}
double Rectangle::perimeter() {
	return (a + b) * 2;
}
char* Rectangle::my_shape() {
	char* name = new char[10];
	strncpy(name, 10, "Rectangle");
	return name;
}