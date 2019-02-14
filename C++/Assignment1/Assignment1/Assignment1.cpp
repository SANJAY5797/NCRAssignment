// Assignment1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "assert.h"
#include<cmath>
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


Complex add_complex(Complex &c4, Complex &c5)
{
	Complex c6;
	c6.real = c4.real + c5.real;
	c6.imaginary = c4.real + c5.imaginary;
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
			c1 = add_complex(c2, c3);
			c1 = mul_complex(c2, c3);
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
		/*case 5:
		{
			Distance1 d1;
			Distance2 d2;
			d1.get_val();
			d2.get_val();
			cout << "Select required conversion :\n1.Inches to centimeters\n2.Centimeters to inches\n";
			int option;
			cin >> option;
			if (option == 1)
				convert_to_centimeters();
			else
				convert_to_inches();
				
		}*/
		case 6:
		{
			Point p1(4, 5), p2(7, 9);
			//int c = distance(p1, p2);
			//cout << "Distance between p1 and p2 is " << c;
			break;
		}
		case 8:
		{
			Employee e1(2, 3), e2(e1);
			cout << "\nSizeof(e1) which call by value = " << sizeof(e1)<<"\nSizeof(e2) which call by reference = "<<sizeof(e2);
		}
		}
	}
	
	getchar();
	return 0;
}

