#include<stdio.h>
//#include <math.h>
#include "stdafx.h"

void Problem2()
{
	char arr[80];
	int noOfElements, i = 0, alphabets = 0, digit = 0, blank = 0, tab = 0, other = 0;
	scanf_s("%[^\n]c", arr);
	noOfElements = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; arr[i] != '\0'; i++)
	{
		if ((arr[i] >= 'A'&&arr[i] <= 'Z') || (arr[i] >= 'a'&&arr[i] <= 'z'))
			alphabets++;
		else if (arr[i] >= '0'&&arr[i] <= '9')
			digit++;
		else if (arr[i] == ' ')
			blank++;
		else if (arr[i] == '\t')
			tab++;
		else
			other++;

	}
	printf(" Number of alphabets are %d\n Number of digits are %d\n Number of blanks are  %d\n Number of tabs are %d\n Number of other characters are%d\n", alphabets, digit, blank, tab, other);
	getchar();
}


/*int main()
{
	Problem2();
	getchar();
	return 0;
}*/