#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

void str_tokenizer(char *s, int ch)
{
	int i = 0, j, k;
	for (j = 0; j<strlen(s); j++)
	{
		if (s[j] == ch)
		{
			for (k = i; k<j; k++)
			{
				printf("%c", s[k]);
			}
			printf("\n");
			i = j + 1;
		}
	}
	for (k = i; k<j; k++)
	{
		printf("%c", s[k]);
	}
}

void problem11()
{
	char str[100];
	int ch;
	printf("Enter a string\n");
	getchar();
	gets(str);
	printf("Enter the delimiter\n");
	ch = getchar();
	str_tokenizer(str, ch);

}