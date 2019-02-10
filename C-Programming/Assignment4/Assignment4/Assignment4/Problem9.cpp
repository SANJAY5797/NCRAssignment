#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

int any(char s1[], char s2[])
{
	int i, j;
	for (i = 0; i < strlen(s1); i++){
		for (j = 0; j < strlen(s2); j++){
			if (s1[i] == s2[j])
			{
				return i;
			}
		}
		j = 0;
	}
	return -1;
}

void problem9()
{
	int loc;
	char s1[100];
	char s2[100];
	printf("Enter String 1 :\n");
	getchar();
	scanf("%s", s1);
	getchar();
	printf("Enter String 2 : \n");
	scanf("%s", s2);
	loc = any(s1, s2);
	if (loc == -1)
		printf("No matching chars\n");
	else 
		printf("%d\n", loc);
}