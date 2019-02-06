#include<stdio.h>
#include "stdafx.h"



float div(int x, int y)
{
	extern float res2;
	res2 = (float)x / y;
	return res2;
}
