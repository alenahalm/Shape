#ifndef shape
#define shape

#include <iostream>
#include <vector>
using namespace std;

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
	vector <pair> points;
public:
	Polygon(vector <pair> p) {
		this->points = p;
	}
};
#endif // !shape