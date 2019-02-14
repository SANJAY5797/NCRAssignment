#include "stdafx.h"
#include<iostream>
using namespace std;

class ex_class{
	int real;
	int img;
public:
	void get_complex()
	{
		cout<<"Enter real part : ";
		cin >> real;
		cout << "\nEnter imaginary part: ";
		cin >> img;
		cout<<"\nReal part = "<<real<< "Imaginary part = "<< img;
	}
	void get_complex(int r,int i)
	{
		real = r;
		img = i;
		cout<<"\nReal part = "<<real<<"Imaginary = "<<img<<"\n";
		
	}

};