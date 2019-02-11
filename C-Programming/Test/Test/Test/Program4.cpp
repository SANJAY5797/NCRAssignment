#include<stdio.h>
#include "stdafx.h"
#include<string.h>

void program4()
{
	FILE *fp1, *fp2;
	fp1 = fopen("Text4.txt", "r");
	fp2 = fopen("Text4_ans.txt", "w");
	char ch;
	ch = getc(fp1);
	while (!feof(fp1))
	{
		if (ch == '\t')
		{
			fputc('\\', fp2);
			fputc('\\t', fp2);
		}
		else
		{
			fputc(ch, fp2);
		}
		ch = getc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
}