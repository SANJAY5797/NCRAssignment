#include<stdio.h>
#include "stdafx.h"

void problem6()
{
	FILE *fp;
	fp = fopen("Problem6.cpp", "r");
	char ch;
	ch = fgetc(fp);
	while (!feof(fp))
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	getchar();
}