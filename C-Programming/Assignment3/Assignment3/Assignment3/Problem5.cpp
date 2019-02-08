#include<stdio.h>
#include "stdafx.h"
#include<stdlib.h>

void problem5()
{
	int x[8] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	printf("\nx = %lu\n",x);
	printf("x+2 = %lu\n",x+2);
	printf("*x = %d\n",*x);
	printf("(*x+2) = %d\n",(*x+2));
	printf("*(x+2) = %d\n",*(x+2));
	getchar();
}