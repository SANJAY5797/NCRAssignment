#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

int replace(char *s)
{
	int count = 0, i;
	for (i = 0; i<strlen(s); i++)
	{
		if (*(s + i) == ' ')
		{
			*(s + i) = '-';
			count++;
		}
	}
	printf("%s\n", s);
	return count;
}

void problem4()
{
	int i, j, count = 0;
	char *s = (char *)malloc(12 * sizeof(char));
	strcpy(s, "The cat sat");
	count = replace(s);
	printf("%d", count);
	free(s);
}