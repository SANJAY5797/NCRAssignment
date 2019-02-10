#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

void problem8()
{
	int i,j,n;
	printf("Enter number of strings : \n");
	scanf_s("%d", &n);
	char **strings = NULL;
	strings = (char**)malloc(sizeof(char*)*n);
	if (strings == NULL)
	{
		printf("No dynamic memory available\n");
		return;
	}
	char temp[50];
	int length;
	printf("Enter n strings : \n");
	getchar();
	for (i = 0; i < n;i++)
	{
		gets_s(temp);
		length = strlen(temp);
		strings[i] = (char*)malloc(sizeof(char)*(length + 1));
		if (strings[i] == NULL)
		{
			printf("No dynamic memory available\n");
			return;
		}
		strcpy(strings[i], temp);
	}
	printf("The n strings you have entered are: \n");
	for (i = 0; i < n; i++)
	{
		printf("%s\n", strings[i]);
	}
}