#include<stdio.h>
#include "stdafx.h"

void palindrome(int number)
{
	int remainder,reversedInteger = 0, n = number;
	while (n != 0)
	{
		remainder = n % 10;
		reversedInteger = reversedInteger * 10 + remainder;
		n /= 10;
	}

	if (number == reversedInteger)
		printf("%d is a palindrome.", number);
	else
		printf("%d is not a palindrome.", number);
	getchar();
}

/*int main()
{
	int number;
	printf("enter a number");
	scanf_s("%d", &number);
	palindrome(number);
	getchar();
	return 0;
}*/