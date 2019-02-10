#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

void sort(int n, char x[20][20])
{
	int i, j;
	char t[20];
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(x[i], x[j]) > 0)
			{
				strcpy(t, x[j]);
				strcpy(x[j], x[i]);
				strcpy(x[i], t);
			}
		}
	}
	return;
}

void problem7()
{
	int i, n;
	printf("Enter number of strings : \n");
	scanf_s("%d", &n);
	char strings[20][20];
	char *ptr = *strings;
	char temp[50];
	int length;
	printf("Enter n strings : \n");
	getchar();
	for (i = 0; i < n; i++)
	{
		gets_s(temp);
		strcpy(strings[i], temp);
	}
	sort(n, strings);
	printf("The strings after sorting are: \n");
	for (i = 0; i < n; i++)
	{
		printf("%s\n", strings[i]);
	}
}