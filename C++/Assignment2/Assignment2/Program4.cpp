#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

class Complex{
	
public:
	int real;
	int img;
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(int a, int b)
	{
		real = a;
		img = b;
	}
	Complex(Complex &c)
	{
		real = c.real;
		img = c.img;
	}
	~Complex()
	{
		cout << "\nObject Destroyed\n";
	}
	Complex operator+(Complex c)
	{
		Complex res;
		res.real = real + c.real;
		res.img = img + c.img;
		return res;
	}
	Complex operator-(Complex c)
	{
		Complex res;
		res.real = real - c.real;
		res.img = img - c.img;
		return res;
	}
	Complex operator-()
	{
		Complex c;
		c.real = -(this->real);
		c.img = -(this->img);
		return c;
	}
	Complex operator++()
	{
		Complex res;
		res.real = ++real;
		res.img = ++img;
		return res;
	}
	Complex operator++(int x)
	{
		Complex res;
		res.real = real;
		res.img = img;
		real++;
		img++;
		return res;
	}
	Complex operator=(Complex b)
	{
		real = b.real;
		img = b.img;
		return *this;
	}
	Complex operator,(Complex b)
	{
		Complex temp;
		temp.img = b.img;
		temp.real = b.real;
		return temp;
	}
	Complex* operator->()
	{
		return this;
	}
	friend ostream& operator<<(ostream &cout, Complex c);
	friend istream& operator>>(istream &cin, Complex &c);
};