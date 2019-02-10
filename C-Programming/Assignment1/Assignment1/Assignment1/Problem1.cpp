#include<stdio.h>
#include "stdafx.h"

int add(int, int);
int sub(int, int);
long int mul(int, int);
float div(int, int);

int res = -1;
long int res1 = -1;
float res2 = -1;

int main()
{
int a = 6, b = 5;
res = add(a, b);
printf("%d\n", res);
res = sub(a, b);
printf("%d\n", res);
res1 = mul(a, b);
printf("%ld\n", res1);
res2 = div(a, b);
printf("%f\n", res2);
getchar();
}