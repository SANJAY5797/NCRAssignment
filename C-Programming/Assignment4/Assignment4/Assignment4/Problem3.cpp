#include<stdio.h>
#include "stdafx.h"

void problem3()
{
	char *s[] = { "we will teach you how to", "Move a mountain", "Level a building ",
		"Erase the past", "Make a million" };
	int i = 0, j = 0,number_of_e = 0;
	
	for (i = 0;i<5; i++)
	{
		for (j = 0;; j++)
		{
			if (s[i][j] == '\0')
				break;
			else
			{
				if (s[i][j] == 'e')
					number_of_e++;
			}
		}
	}
	printf("Number of e's = %d", number_of_e);
}