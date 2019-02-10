#include<stdio.h>
#include "stdafx.h"

void problem13(int n, int p, int b)
{
	printf("%d", n ^ (~(~0 << b) << (p + 1 - b)));
	getchar();
}

/*int main()
{
	problem13(4, 2, 1);
	getchar();
	return 0;
}*/