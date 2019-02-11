#include<stdio.h>
#include "stdafx.h"
#include<string.h>

void program3()
{
	char word[20];
	printf("Enter a word to rotate");
	scanf("%s", word);
	int word_len = strlen(word);
	FILE *fp1, *fp2;
	fp1 = fopen("Text3.txt", "r");
	fp2 = fopen("Text3_ans.txt", "w");
	char ch,temp_char;
	int i,flag;
	ch = fgetc(fp1);
	while (!feof(fp1))
	{
		flag = 0;
		if (ch == word[0])
		{
			for (i = 1; i < word_len; i++)
			{
				ch = fgetc(fp1);
				if (ch != word[i])
				{
					flag = -1;
					fseek(fp1, -i, SEEK_CUR);
					break;
				}
			}
			if (flag == 0)
			{
				fputc(word[word_len - 1], fp2);
				for (i = 0; i < word_len-1;i++)
					fputc(word[i], fp2);
			}
		}
		else
		{
			fputc(ch, fp2);
		}
		ch = fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
}