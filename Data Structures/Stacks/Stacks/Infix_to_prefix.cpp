#include "stdafx.h"
#include<iostream>
#include<string.h>
#include "My_stack.cpp"
using namespace std;
int precedence(char);
char* in_to_post(char*);

char* in_to_pre(char *str)
{
	char *rev = new char[strlen(str) + 1];
	
	int i, begin, end, count = strlen(str);
	end = count - 1;
	for (begin = 0; begin < count; begin++) {
		rev[begin] = str[end];
		end--;
	}
	rev[begin] = '\0';
	for (i = 0; i < count; i++)
	{
		if (rev[i] == '(')
			rev[i] = ')';
		else
		{
			if (rev[i] == ')')
				rev[i] = '(';
		}
	}
	rev = in_to_post(rev);
	char* output = new char[strlen(str) + 1];
	count = strlen(rev);
	end = count - 1;
	for (begin = 0; begin < count; begin++) {
		output[begin] = rev[end];
		end--;
	}
	output[count] = '\0';
	return output;

}