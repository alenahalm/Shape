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
	Point(double x, double y) {
		this->x = x;
		this->y = y;
	}
	double get_X() {
		return x;
	}
	double get_Y() {
		return y;
	}
	
};

class Shape {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void my_shape() = 0;
};

class Rectangle : public Shape {
private:
	double a, b;
public:
	Rectangle(double sideA, double sideB) {
		this->a = sideA;
		this->b = sideB;
	}
	double area() {
		return a * b;
	}
	double perimeter() {
		return (a + b) * 2;
	}
	void my_shape() {
		cout << "Square" << endl;
	}
};

class Circle : public Shape {
private:
	double r;
	const double p = 3.141592653589793;
public:
	Circle(double radius) {
		this->r = radius;
	}
	double area() {
		return p * r * r;
	}
	double perimeter() {
		return 2 * p * r;
	}
	void my_shape() {
		cout << "Circle" << endl;
	}
};

class Triangle : public Shape {
private:
	double a, b, c;
public:
	Triangle(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	double area() {
		double p = (a + b + c) / 2;
		return (p - a) * (p - b) * (p - c);
	}
	double perimeter() {
		return a + b + c;
	}
	void my_shape() {
		cout << "Triangle" << endl;
	}
};

class Polygon : public Shape {
private:
	vector <Point> points;
public:
	Polygon(vector <Point> p) {
		this->points = p;
	}
	double area() {
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
	double perimeter() {
		double p = 0;
		for (int i = 0; i < points.size() - 1; i++) {
			double x, y;
			x = points[i + 1].get_X() - points[i].get_X();
			y = points[i + 1].get_Y() - points[i].get_Y();
			p += sqrt(x * x + y * y);
		}
		return p;
	}
	void my_shape() {
		cout << "Polygon";
	}
};
#endif // !shape