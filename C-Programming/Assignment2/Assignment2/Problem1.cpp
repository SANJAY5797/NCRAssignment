// Assignment2.cpp : Defines the entry point for the console application.

#include<stdio.h>
#include "stdafx.h"

void binary_to_decimal()
{
	int binary,decimal = 0,i=1;
	printf("Enter binary number: \n");
	scanf_s("%d", &binary);
	while (binary)
	{
		decimal = decimal + (binary % 10)*(i);
		i = i * 2;
		binary /= 10;
	}
	printf("decimal number = %d\n",decimal);
	getchar();
}

void decimal_to_binary()
{
	int binary = 0, decimal = 0, i = 1;
	printf("Enter decimal number: \n");
	scanf_s("%d", &decimal);
	while (decimal)
	{
		binary = binary + (decimal % 2)*(i);
		i = i * 10;
		decimal /= 2;
	}
	printf("binary number = %d\n", binary);
	getchar();
}

int main()
{
	binary_to_decimal();
	decimal_to_binary();
	getchar();
	return 0;
}

