#ifndef shape
#define shape

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Point {
private:
	double x, y;
public:
	Point(double x, double y);
	double get_X();
	double get_Y();
	
};

class Shape {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual char* my_shape() = 0;
};

class Rectangle : public Shape {
private:
	double a, b;
public:
	Rectangle(double sideA, double sideB);
	double area();
	double perimeter();
	char* my_shape();
};

class Circle : public Shape {
private:
	double r;
	const double p = 3.141592653589793;
public:
	Circle(double radius);
	double area();
	double perimeter();
	char* my_shape();
};

class Triangle : public Shape {
private:
	double a, b, c;
public:
	Triangle(double a, double b, double c);
	double area();
	double perimeter();
	char* my_shape();
};

class Polygon : public Shape {
private:
	vector <Point> points;
public:
	Polygon(vector <Point> p);
	double area();
	double perimeter();
	char* my_shape();
};

#endif // !shape
