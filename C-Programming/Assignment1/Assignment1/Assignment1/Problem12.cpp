#include<stdio.h>
#include "stdafx.h"
#include<math.h>


void rotate_right(int n,int b)
{
	int temp,number_of_digits = 0,result ;
	temp = n;
	result = n;
	while (temp)
	{
		number_of_digits++;
		temp /= 10;
	}
	b = b%number_of_digits;
	while (b)
	{
		result = (result % 10)*(pow(10.0, (number_of_digits-1))) + result / 10;
		b--;
	}
	printf("Result after rotation is = %d", result);
	getchar();
}

/*int main()
{
	rotate_right(31256, 3);
	getchar();
	return 0;
}*/