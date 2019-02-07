#include<stdio.h>
#include "stdafx.h"

void factorial()
{
	int n,fact = 1;
	printf("Enter the number to find factorial : ");
	scanf_s("%d", &n);
	while (n > 1)
	{
		fact = fact*n;
		n--;
	}
	printf("Factorial of n is: %d", fact);
	getchar();
}


int main()
{
	factorial();
	getchar();
	return 0;
}