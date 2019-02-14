#include "stdafx.h"
#include<iostream>
using namespace std;

class Complex{
	int real;
	int imaginary;
public:
	Complex()
	{
		cout << "\nDefault constructor called";
		real = imaginary = 0;
	}
	Complex(int r)
	{
		cout << "\nParameter Constructor with one argument";
		real = imaginary = r;
	}
	Complex(int r, int i)
	{
		cout << "\nParameter Constructor with two argument";
		real = r;
		imaginary = i;
	}
	friend Complex add_complex(Complex &c4, Complex &c5);
	friend Complex mul_complex(Complex &c4, Complex &c5);
};

