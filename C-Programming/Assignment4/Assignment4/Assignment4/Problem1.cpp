#include<stdio.h>
#include "stdafx.h"

void problem1()
{
	float table[2][3] = { { 1.1, 1.2, 1.3 }, { 2.1, 2.2, 2.3 } };
	printf("\ntable = %lu\n", table);
	printf("table+1 = %lu\n", table+1);
	printf("(table+1) = %lu\n", *(table+1));
	printf("(*(table+1)+1) = %lu\n", (*(table + 1) + 1));
	printf("(*(table)+1) = %lu\n", (*(table)+1));
	printf("*(*(table+1) +1) = %f\n", *(*(table + 1) + 1));
	printf("*(*(table)+1) = %f\n", *(*(table)+1));
	printf("*(*(table + 1)) = %f\n", *(*(table + 1)));
	printf("*(*(table)+1) + 1 = %f\n", *(*(table)+1) + 1);
	getchar();
}