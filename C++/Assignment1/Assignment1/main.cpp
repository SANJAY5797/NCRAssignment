// Assignment1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "assert.h"
#include<math.h>
#include<iostream>
using namespace std;
#include "Example.cpp"
#include "Program1.cpp"
#include "Program2.cpp"
#include "Program3.cpp"
#include "Program4.cpp"
#include "Program5.cpp"
#include "Program6.cpp"
#include "Program8.cpp"
void swap_by_value(int, int);
void swap_by_reference(int&, int&);
Complex add_complex(Complex &c4, Complex &c5)
{
	Complex c6;
	c6.real = c4.real + c5.real;
	c6.imaginary = c4.imaginary + c5.imaginary;
	cout << "\nReal part after addition = " << c6.real << "\nImaginary part after addition = " << c6.imaginary;
	return c6;
}

Complex mul_complex(Complex &c4, Complex &c5)
{
		Complex c6;
		c6.real = (c4.real)*(c5.real);
		c6.imaginary = (c4.imaginary)*(c5.imaginary);
		cout << "\nReal part after multiplication = " << c6.real << "\nImaginary part after multiplication = " << c6.imaginary;
		return c6;
}

double find_distance(Point p1,Point p2)
{
	double ans = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
	return ans;
}

Distance1 add_cm(Distance1 a, Distance2 b)
{
	long int tmp = a.m * 100 + a.cm;
	long int tmp2 = b.ft * 12 + b.in;
	float ans = tmp2 / 2.54;
	Distance1 temp;
	temp.m = (int)ans / 100;
	temp.cm = ((int)ans) % 100;
	cout << "\nDistance sum in meters = " << temp.m << " and centimeter = " << temp.cm;
	return temp;
}
Distance2 add_inch(Distance1 a, Distance2 b)
{
	long int tmp = a.m * 100 + a.cm;
	long int tmp2 = b.ft * 12 + b.in;
	float ans = tmp2*2.54;
	Distance2 temp;
	temp.ft = (int)ans / 12;
	temp.in = ((int)ans) % 12;
	cout << "\nDistance sum in feet = " << temp.ft << " and inches = " << temp.in;
	return temp;
}

int main()
{
	cout << "Select option to run program:\n";
	int option;
	while (1)
	{
		cout << "\n0.Example Program\n1.Program1\n2.Program2\n3.Program3\n4.Program4\n\
5.Program5\n6.Program6\n7.Program7\n8.Program8\n9.Program9\n10.Exit\n";
		cin >> option;
		if (option == 10)
			break;
		switch (option)
		{
		case 0:
		{
			ex_class c;
			c.get_complex();
			c.get_complex(2, 5);
			break;
		}
		case 1:
		{	
			Time t1(1, 50, 5);
			Time t2(2, 15, 30);
			Time t3;
			t3.add_time(t1, t2);
			t3.display();
			break;
		}
		case 2:
		{	
			Student s;
			char name[14] = "Pratik Saxena";
			s.set_Data(name, 80, 70, 85);
			s.ComputeGrade();
			s.display();
			break;
		}
		case 3:
		{
			Complex c1;
			Complex c2(2);
			Complex c3(4, 5);
			cout << "\nSelect an option\n1.Add two complex numbers\n2.Multiply two complex numbers\n";
			int option = 0;
			cin >> option;
			if (option == 1)
			{
				int real1 = 0, real2 = 0, img1 = 0, img2 = 0;
				cout << "\nEnter real part of 1st number";
				cin >> real1;
				cout << "\nEnter imaginary part of 1st number";
				cin >> img1;
				cout << "\nEnter real part of 2nd number";
				cin >> real2;
				cout << "\nEnter imaginary part of 2nd number";
				cin >> img2;
				Complex c4(real1, img1);
				Complex c5(real2, img2);
				c1 = add_complex(c4, c5);
			}
			else if (option == 2)
			{
				int real1 = 0, real2 = 0, img1 = 0, img2 = 0;
				cout << "\nEnter real part of 1st number";
				cin >> real1;
				cout << "\nEnter imaginary part of 1st number";
				cin >> img1;
				cout << "\nEnter real part of 2nd number";
				cin >> real2;
				cout << "\nEnter imaginary part of 2nd number";
				cin >> img2;
				Complex c4(real1, img1);
				Complex c5(real2, img2);
				c1 = mul_complex(c4, c5);
			}
			else
				cout << "Wrong option";
			break;
		}
		case 4:
		{
			cout << add(2, 3)<<endl;
			cout << sub(4, 2)<<endl;
			cout << mul(4, 5)<<endl;
			cout << division(90, 10)<<endl;
			break;
		}
		case 5:
		{
			Distance1 d1;
			Distance2 d2;
			d1.get_val();
			d2.get_val();
			cout << "\nSelect required conversion :\n1.Inches to centimeters\n2.Centimeters to inches\n";
			int option;
			cin >> option;
			if (option == 1)
				add_cm(d1,d2);
			else
				add_inch(d1,d2);
			break;
				
		}
		case 6:
		{
			Point p1(4, 5), p2(7, 9);
			double c = find_distance(p1, p2);
			cout << "Distance between p1 and p2 is " << c;
			break;
		}
		case 8:
		{
			Employee e1(2, 3), e2(e1);
			cout << "\nSizeof(e1) which call by value = " << sizeof(e1)<<"\nSizeof(e2) which call by reference = "<<sizeof(e2);
			break;
		}
		case 9:
		{
			int x, y,menu;
			cout << "\nEnter values of x and y";
			cin >> x >> y;
			cout << "\nSelect option:\n1.Swap by value \n2.Swap by reference\n";
			cin >> menu;
			switch (menu)
			{
			case 1:
				swap_by_value(x, y);
				cout << "\nAfter swapping in main x = " << x << "	y = " << y;
				break;
			case 2:
				swap_by_reference(x, y);
				cout << "\nAfter swapping in main x = " << x << "	y = " << y;
				break;
			default:
				break;
			}

		}
		}
	}
	
	getchar();
	return 0;
}

