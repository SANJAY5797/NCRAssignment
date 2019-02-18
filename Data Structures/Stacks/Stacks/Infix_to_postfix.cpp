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

void in_to_post(char* str)
{
	my_stack mstack;
	mstack.getSize(strlen(str));
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if ((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
			cout << str[i];
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
						cout <<(char)mstack.pop();	
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
							cout << (char)mstack.pop();
						mstack.push(str[i]);
					}
				}
			}
		}
	}
	while (!(mstack.isEmpty()))
		cout <<(char)mstack.pop();
}