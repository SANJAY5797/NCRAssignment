#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

void problem14()
{
	char a[100];
	int i, j;
	printf("Enter a word: ");
	getchar();
	gets(a);
	for (i = 0; a[i] != 0; i++)
	{
		for (j = i; a[j] != 0; j++)
			printf("%c", a[j]);

		for (j = 0; j < i; j++)
			printf("%c", a[j]);
		printf("\n");
	}

}