#include <iostream>
#include "shape.h"

using namespace std;

int main()
{
	vector<Point> v;

	for (int i = 0; i < 5; i++) {
		double x, y;
		cin >> x >> y;
		Point p(x, y);
		v.push_back(p);
	}
	Polygon sh(v);
	cout << sh.area() << endl;
}