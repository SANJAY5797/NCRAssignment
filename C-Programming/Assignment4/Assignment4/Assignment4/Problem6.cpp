#include <stdio.h>
#include "stdafx.h"
#include <string.h>

void reverse(char *x, int begin, int end)
{
	char c;
	if (begin >= end)
		return;
	c = *(x + begin);
	*(x + begin) = *(x + end);
	*(x + end) = c;
	reverse(x, ++begin, --end);
}
void problem6()
{
	char a[100];
	printf("Enter a string:\n");
	getchar();
	gets_s(a);
	reverse(a, 0, strlen(a)-1);
	printf("Reverse of the string is : %s\n", a);

}
