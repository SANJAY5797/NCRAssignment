#include<stdio.h>
#include "stdafx.h"

enum comp{add = 1, subtract, multiply, division};

void problem3()
{
	int r1, r2, i1, i2, r3, i3;
	printf("Enter real and imaginary parts of first number");
	scanf("%d %d", &r1, &i1);
	printf("Enter real and imaginary parts of second number");
	scanf("%d %d", &r2, &i2);
	int option;
	printf("Select operation\n1.Add\n2.Subtract\n3.Multiply\n4.Division\n");
	scanf("%d", &option);
	switch (option)
	{
	case add:
		r3 = r1+r2;
		i3 = i1+i2;
		break;
	case subtract:
		r3 = r1-r2;
		i3 = i1-i2;
		break;
	case multiply:
		r3 = r1*r2;
		i3 = i1*i2;
		break;
	case division:
		r3 = r1 / r2;
		i3 = i1 / i2;
		break;

	}
	printf("Result = %d + %di", r3, i3);
	getchar();
}