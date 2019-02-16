#include "stdafx.h"
#include<iostream>
using namespace std;

class Polar{
	int radius; 
	int angle;
	static int count;
public:
	Polar()
	{
		count++;
		cout << "\nThis is object number " << count;
	}
};