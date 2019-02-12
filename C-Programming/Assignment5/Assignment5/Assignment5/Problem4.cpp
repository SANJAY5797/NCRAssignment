#include<stdio.h>
#include "stdafx.h"

void problem4()
{
	unsigned int i = 1;
	char *c = (char*)&i;
	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	getchar();
}