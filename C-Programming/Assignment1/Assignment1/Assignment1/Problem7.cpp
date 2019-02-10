#include<stdio.h>
#include "stdafx.h"

void problem_7()
{
	
	int number,min , max , avg, sum = 0, positive_values_counter = 0;
	min = 2147483647;
	max = -2147483647;
	while (1)
	{
		printf("Enter a number\n");
		scanf_s("%d", &number);
		if (number <= 0)
			break;
		else
		{
			positive_values_counter++;
			if (number > max)
				max = number;
			if (number < min)
				min = number;
			sum = sum + number;
			avg = sum / positive_values_counter;
		}
	}
	
	if (positive_values_counter == 0)
		printf("Number of positive values entered = 0 , minimum value = %d, maximum number = %d, average = %d \n", number,number,number);
	else
	{
		printf("Number of positive values entered = %d , minimum value = %d , maximum number = %d, average = %d\n", positive_values_counter,min,max,avg);
	}
	getchar();
}

/*int main()
{
	problem_7();
	getchar();
	return 0;
}*/