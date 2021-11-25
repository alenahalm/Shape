#include "shape.h"

Polygon::Polygon(vector <Point> p) {
	this->points = p;
}
double Polygon::area() {
	double s = 0;
	for (int i = 0; i < points.size(); i++) {
		if (i < points.size() - 1) {
			s += points[i].get_X() * points[i + 1].get_Y();
			s -= points[i].get_Y() * points[i + 1].get_X();
		}
		else {
			s += points[i].get_X() * points[0].get_Y();
			s -= points[i].get_Y() * points[0].get_X();
		}
	}
	return abs(s * 0.5);
}
double Polygon::perimeter() {
	double p = 0;
	for (int i = 0; i < points.size() - 1; i++) {
		double x, y;
		x = points[i + 1].get_X() - points[i].get_X();
		y = points[i + 1].get_Y() - points[i].get_Y();
		p += sqrt(x * x + y * y);
	}
	return p;
}
char* Polygon::my_shape() {
	char* name = new char[10];
	strncpy(name, 10, "Polygon");
	return name;
}