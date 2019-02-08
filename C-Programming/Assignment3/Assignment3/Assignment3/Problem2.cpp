#include<stdio.h>
#include "stdafx.h"
#include<stdlib.h>

void problem2()
{
	int n, i, j, temp, neg_numbers = 0;
	printf("Enter size of array\n");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	printf("Enter elements of array : \n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			neg_numbers++;
	}
	i = 0;
	j = 0;
	while (i < neg_numbers)
	{
		if (arr[i] > 0)
		{
			j = 0;
			while (arr[j] > 0)
			{
				j++;
			}
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else
		{
			i++;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	free(arr);
	getchar();
}