#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

void delete_char(char *s, int ch)
{
	char *ptr;

	while (ptr = strchr(s, ch))
		strcpy(ptr, ptr + 1);
}

void problem10()
{
	char str[100];
	char ch;
	printf("Enter a string\n");
	getchar();
	gets(str);
	printf("enter the character to delete\n");
	ch = getchar();
	delete_char(str, ch);

	printf("String after deleting cgiven character = %s", str);
}