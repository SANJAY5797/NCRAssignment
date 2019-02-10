#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>


void problem12()
{
	char *s1, s2[100];
	int ch;
	int a[26], i, j;
	char *ptr;
	printf("enter a string s1\n");
	getchar();
	gets(s2);
	s1 = (char *)malloc(strlen(s2)*sizeof(char));
	strcpy(s1, s2);
	printf("enter the string s2\n");
	getchar();
	gets(s2);
	for (i = 0; i<26; i++)
	{
		a[i] = 0;
	}
	for (i = 0; i<strlen(s2); i++)
	{
		a[s2[i] - 'a'] = 1;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (a[s1[i] - 'a'] == 1)
		{
			for (j = i; s1[j] != '\0'; j++)
			{
				s1[j] = s1[j + 1];
			}
			i--;
		}
	}
	printf("The final string is %s", s1);
}