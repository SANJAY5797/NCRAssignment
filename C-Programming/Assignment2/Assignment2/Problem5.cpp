#include<stdio.h>
#include "stdafx.h"

void reverse_number()
{
	int number, reverse = 0;
	printf("Enter number to reverse it\n");
	scanf_s("%d", &number);
	while (number > 0)
	{
		reverse = reverse*10 + number % 10;
		number = number / 10;
	}
	printf("Reverse of the given number = %d", reverse);
	getchar();
	
}

int main()
{
	reverse_number();
	getchar();
	return 0;
}