#include "stdafx.h"
#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
		cout << "Here";
	}
	friend int distance(Point p1, Point p2);
};

