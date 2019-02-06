#include<stdio.h>
#include "stdafx.h"

extern long int res1;

long int mul(int x, int y)
{
	res1 = x * y;
	return res1;
}
