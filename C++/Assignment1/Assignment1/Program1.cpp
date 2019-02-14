#include "stdafx.h"
#include<iostream>
using namespace std;

class Time{
	int hours;
	int minutes;
	int seconds;
public:
	Time()
	{
		hours = minutes = seconds = 0;
	}
	Time(int h, int m, int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display()
	{
		cout << hours << ":" << minutes << ":" << seconds;
	}
	void add_time(Time t1, Time t2)
	{
		int residue_seconds, residue_minutes;
		residue_seconds = t1.seconds + t2.seconds - 60;
		residue_minutes = t1.minutes + t2.minutes - 60;
		seconds = (t1.seconds + t2.seconds)%60;
		minutes = (t1.minutes + t2.minutes)%60;
		//cout << residue_minutes;
		getchar();
		if (residue_seconds > 0)
		{
			minutes++;
			minutes = minutes % 60;
		}
		hours = (t1.hours + t2.hours)%24;
		if (residue_minutes > 0)
		{
			hours = hours+1;
		}
	}
}; 