#include "shape.h"

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}
double Point::get_X () {
	return x;
}
double Point::get_Y () {
	return y;
}