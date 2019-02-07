
#include<stdio.h>
#include "stdafx.h"
#include<string.h>

void itob()
{
	int remainder, decimal, i,j = 0;
	char bin[100];
	printf("Enter decimal number: \n");
	scanf_s("%d", &decimal);
	while (decimal)
	{
		remainder = decimal % 2;
		bin[j++] = 48 + remainder;
		decimal /= 2;
	}
	for (i = j - 1; i >= 0; i--)
		printf("%c", bin[i]);
	
	getchar();
}

void itoh()
{
	long decimalnum,quotient, remainder;
	int i, j = 0;
	char hexadecimalnum[100];

	printf("Enter decimal number: ");
	scanf_s("%ld", &decimalnum);

	quotient = decimalnum;

	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	for (i = j-1; i >= 0; i--)
		printf("%c", hexadecimalnum[i]);

	getchar();
	

}

int main()
{
	char hex[20];
	itob();
	//itoh();
	getchar();
	return 0;
}