#include "shape.h"

Circle::Circle(double radius) {
	this->r = radius;
}
double Circle::area() {
	return p * r * r;
}
double Circle::perimeter() {
	return 2 * p * r;
}
char* Circle::my_shape() {
	char* name = new char[10];
	strncpy(name, 10, "Circle");
	return name;
}