#include "stdafx.h"
#include<iostream>
using namespace std;

void swap_by_value(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "\nAfter swapping in function x = " << a << "	y = " << b;
}

void swap_by_reference(int &a,int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "\nAfter swapping in function x = " << a << "	y = " << b;
}