#include<stdio.h>
#include "stdafx.h"
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void problem2()
{
	int n, a[20], i, j, given_sum, calci_sum = 0, flag = 0;
	printf("enter the number of elements");
	scanf_s("%d", &n);
	printf("enter the elements");
	for (i = 0; i<n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	i = 0; j = n - 1;
	while (i != j)
	{
		if (a[i]>0)
		{
			swap(&a[i], &a[j]);
			j--;
		}
		else
		{
			i++;
		}
	}
	for (i = 0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	getchar();
}