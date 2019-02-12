#include<stdio.h>
#include "stdafx.h"
#define macro(s) #s 
#define copypasting(a, b) a##b
#define YEARS_OLD 21

void problem8()
{
	int xy = 3000;
	printf(macro(printing the strings\n));
	printf("%d\n", copypasting(x, y));
	#ifdef YEARS_OLD
		printf("I am %d years old.\n", YEARS_OLD);
	#endif
		printf("I am in a CDAC\n");

}