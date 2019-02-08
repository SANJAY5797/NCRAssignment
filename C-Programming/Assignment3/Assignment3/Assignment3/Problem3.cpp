#include<stdio.h>
#include "stdafx.h"
#include<stdlib.h>

void problem3()
{
	int number, one_bits = 0;
	printf("\nEnter the number\n");
	scanf_s("%d", &number);
	
	while (number)
	{
		if (number % 10 == 1)
			one_bits++;
		number /= 10;
	}
	printf("Number of 1 bit's = %d", one_bits);
	getchar();
}