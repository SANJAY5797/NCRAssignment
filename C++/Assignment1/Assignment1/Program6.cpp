#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	friend double find_distance(Point p1, Point p2);
};
