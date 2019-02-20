#include "stdafx.h"
#include<iostream>
#include<string.h>
#include "My_stack.cpp"
using namespace std;
int precedence(char ch)
{
	switch (ch)
	{
	case '^':
		return 3;
	case '*':
	case '/':
		return 2;
	case '+':
	case '-':
		return 1;
	default:
		return -1;
	}
}

char* in_to_post(char* str)
{
	char *output = new char[strlen(str) + 1];
	my_stack mstack;
	mstack.getSize(strlen(str));
	int i, j = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			output[j] = str[i];
			j++;
		}
		else
		{
			if (str[i] == '(' )
				mstack.push('(');
			else
			{
				if (str[i] == ')')
				{
					while (mstack.peek() != '(')
					{
						output[j] = (char)mstack.pop();
						j++;
					}
					mstack.pop();
				}
				else
				{
					if (precedence(str[i]) > precedence(mstack.peek()))
						mstack.push(str[i]);
					else
					{
						while (precedence(str[i]) <= precedence(mstack.peek()))
						{
							output[j] = (char)mstack.pop();
							j++;
						}
						mstack.push(str[i]);
					}
				}
			}
		}
	}
	while (!(mstack.isEmpty()))
	{
		output[j] = (char)mstack.pop();
		j++;
	}
	output[j] = '\0';
	return output;
}