#include "shape.h"

Triangle::Triangle(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}
double Triangle::area() {
	double p = (a + b + c) / 2;
	return sqrt((p - a) * (p - b) * (p - c) * p);
}
double Triangle::perimeter() {
	return a + b + c;
}
char* Triangle::my_shape() {
	char* name = new char[10];
	strncpy(name, 10, "Triangle");
	return name;
}