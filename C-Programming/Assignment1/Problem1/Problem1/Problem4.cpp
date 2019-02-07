//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "stdafx.h"


void armstrong_number(int number)
{
	int temp,rem, cube,sum = 0;

	temp = number;
	while (temp != 0)
	{
		rem = temp % 10;
		cube = rem*rem*rem;
		sum = sum + cube;
		temp = temp / 10;
	}
	if (sum == number)
		printf("The given number is armstrong number");
	else
		printf("The given number is not a armstrong number");
	getchar();

}
/*int main()
{
	int number;
	printf("enter a number");
	scanf_s("%d", &number);
	armstrong_number(number);
	getchar();
	return 0;
}*/