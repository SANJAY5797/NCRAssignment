#include<stdio.h>
#include "stdafx.h"
struct time
{
	int hrs;
	int mins;
	int sec;
};

void problem1()
{
	printf("\nEnter hours, minutes and seconds of time");
	time t;
	scanf("%d%d%d", &t.hrs,&t.mins,&t.sec);
	printf("\nTime = %d:%d:%d", t.hrs, t.mins, t.sec);
}