#include<stdio.h>
#include "stdafx.h"
#include<string.h>

void program1()//Prints Count of number of alphabets,digits,spaces and special characters in the text file.
{
	FILE *fp; // File pointer
	fp = fopen("Text1.txt", "r");
	int alpha = 0, digits = 0, spaces = 0, special = 0;
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			alpha++;
		else
		{
			if (ch >= '0' && ch <= '9')
				digits++;
			else
			{
				if (ch == ' ')
					spaces++;
				else
					special++;
			}
		}
	}
	printf("Number of alphabets = %d\nNuber of digits = %d\nNumber of spaces = %d\nNumber of special characters = %d\n",
		alpha,digits,spaces,special);
	fclose(fp);
	getchar();
}