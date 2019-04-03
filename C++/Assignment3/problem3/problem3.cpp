// problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Shape{
public:
	Shape()
	{
	}
	virtual float display_area(){
		cout << "This is a virtual function in base class to display area define it separately in child class";
		return 0.0;
	};
	~Shape()
	{
	}
};

class Triangle:public Shape{
	int base, height;
public:
	Triangle()
	{
		base = 0;
		height = 0;
	}
	Triangle(int input_base, int input_height)
	{
		base = input_base;
		height = input_height;
	}
	float display_area()
	{
		return base*height / 2.0;
	}
};

class Square :public Shape{
	int side_length;
public:
	Square()
	{
		side_length = 0;
	}
	Square(int input)
	{
		side_length = input;
	}
	float display_area()
	{
		return side_length*side_length;
	}
};

class Rectangle : public Shape{
	int length, breadth;
public:
	Rectangle()
	{
		length = 0;
		breadth = 0;
	}
	
};

int main()
{
	Triangle t(3, 3);
	cout << "Area is = " << t.display_area();
	getchar();
	return 0;
}

