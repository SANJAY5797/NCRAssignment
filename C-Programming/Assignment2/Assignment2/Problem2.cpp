#include<stdio.h>
#include"stdafx.h"
#include<string.h>

void binary_to_hexadecimal()
{
	long decimalnum = 0, binary, quotient, remainder;
	int i, j = 0;
	char hexadecimalnum[100];
	i = 1;
	printf("\nEnter binary number: ");
	scanf_s("%ld", &binary);
	while (binary)
	{
		decimalnum = decimalnum + (binary % 10)*i;
		i = i * 2;
		binary /= 10;
	}
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
	printf("Hexadecimal value = \n");
	for (i = j - 1; i >= 0; i--)
		printf("%c", hexadecimalnum[i]);

	getchar();
}

void hexadecimal_to_decimal()
{
	char hexVal[10];
	printf("\nEnter hexadecimal number:");
	gets(hexVal);
	int len = strlen(hexVal); 
	int base = 1;
	int dec_val = 0,binary = 0;
	for (int i = len - 1; i >= 0; i--)
	{ 
		if (hexVal[i] >= '0' && hexVal[i] <= '9')
		{
			dec_val += (hexVal[i] - 48)*base;
			base = base * 16;
		}
		else if (hexVal[i] >= 'A' && hexVal[i] <= 'F')
		{
			dec_val += (hexVal[i] - 55)*base;
			base = base * 16;
		}
	}
	int i = 1;
	while (dec_val)
	{
		binary = binary + (dec_val % 2)*i;
		i = i * 10;
		dec_val /= 2;
	}
	printf("Decimal value = %d", binary);
	getchar();
}

int main()
{
	binary_to_hexadecimal();
	hexadecimal_to_decimal();
	return 0;
}