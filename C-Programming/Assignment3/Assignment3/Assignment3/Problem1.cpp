#include<stdio.h>
#include "stdafx.h"
#include<stdlib.h>

void problem1()
{
	int *arr,n,i,j,sum,current_sum;
	printf("Enter size of array\n");
	scanf_s("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	printf("Enter elements of array : \n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("Enter sum \n");
	scanf_s("%d", &sum);
	i = 0;
	j = 0;
	current_sum = arr[0];
	while (i <= n && j <= n)
	{
		if (current_sum < sum)
		{
			j++;
			current_sum += arr[j];
		}
		else
		{
			if (current_sum > sum)
			{
				current_sum -= arr[i];
				i++;
			}
			else
			{
				if (current_sum == sum)
				{
					if (arr[i] + arr[j] == sum)
						printf("Starting index = %d \nEnding index = %d \n", i, j);
					break;
				}
			}
		}
	}
	if (arr[i] + arr[j] != sum)
	{
		printf("No such subarray exists\n");
	}
	free(arr);
	getchar();
}