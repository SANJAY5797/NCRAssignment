#include<stdio.h>
#include "stdafx.h"
int sum_of_digits(int a)
{
	int sum = 0;
	int b = a;
	while (b != 0)
	{
		sum = sum + b % 10;
		b = b / 10;
	}
	return sum;
}

/*int main()
{
	printf("%d",sum_of_digits(1290));
	getchar();
	return 0;
}*/
