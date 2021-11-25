#include <iostream>
#include "shape.h"
#include "rectangle.cpp"
#include "triangle.cpp"
#include "point.cpp"
#include "circle.cpp"
#include "polygon.cpp"

using namespace std;

int main()
{
	Rectangle r1(23.5, 18);

	Circle c1(12);

	Triangle t1(11, 33, 39);

	vector <Point> v1;
	Point p(0.6, 2.1); v1.push_back(p);
	Point p1(1.8, 3.6); v1.push_back(p1);
	Point p2(2.2, 2.3); v1.push_back(p2);
	Point p3(3.6, 2.4); v1.push_back(p3);
	Point p4(3.1, 0.5); v1.push_back(p4);
	Polygon pol(v1);


	vector<Shape*> v;
	v.push_back(&r1);
	v.push_back(&c1);
	v.push_back(&t1);
	v.push_back(&pol);

	double s = 0;
	for (int i = 0; i < v.size(); i++) {
		s += v[i]->area();
	}

	cout << s << endl;
}
