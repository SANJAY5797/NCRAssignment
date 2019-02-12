#include<stdio.h>
#include "stdafx.h"

struct MyStruct
{
	int a;
	char ch;
}my_struct;

union MyUnion
{
	int a;
	char ch;
}my_union;

void problem2()
{
	printf("Size of Struct = %d\nSize of Union = %d\n", sizeof(my_struct), sizeof(my_union));
	getchar();
}