#include<stdio.h>
#include "stdafx.h"

void prime()
{
	int a, b,i,current_number,flag = 0;
	printf("Enter a and b :\n");
	scanf_s("%d%d",&a, &b);
	printf("Prime numbers between a and b are:\n");
	current_number = a + 1;
	while (current_number < b)
	{
		i = 2;
		flag = 0;
		while (i <= current_number / 2)
		{
			if (current_number%i == 0)
			{
				flag = -1;
				break;
			}
			i++;
		}
		if (flag == 0)
		{
			printf("%d\n", current_number);
		}
		current_number++;
	}
	getchar();
}

int main()
{
	prime();
	getchar();
	return 0;
}