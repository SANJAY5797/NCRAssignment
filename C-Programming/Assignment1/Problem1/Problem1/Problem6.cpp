#include<stdio.h>
#include "stdafx.h"
#include<math.h>

void decimal_to_binary()
{
	int i,dec,binary,power = 0;
	i = 1;
	printf("Enter a number between 0 to 32\n");
	scanf_s("%d", &dec);
	binary = 0;
	while (dec)
	{
		binary = binary + i*(dec % 2);
		i = i * 10;
		dec = dec / 2;
	}
	printf("%d", binary);
	getchar();
}

/*int main()
{
	decimal_to_binary();
	getchar();
	return 0;
}*/