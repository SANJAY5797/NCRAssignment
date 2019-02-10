#include <stdio.h>
#include "stdafx.h"
#include <string.h>

void problem5()
{
	char s[100];
	int i;
	int flag = 0;
	printf("\nEnter a string : ");
	getchar();
	gets(s);
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 32;
			flag = 1;
		}
	}
	if (flag == 1)
		printf("\nString in Upper Case = %s", s);
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32;
		}
	}
	if (flag == 0)
		printf("\nString in Lower Case = %s", s);
	//getchar();
}