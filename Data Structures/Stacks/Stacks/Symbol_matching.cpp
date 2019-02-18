#include "stdafx.h"
#include<iostream>
#include<string.h>
#include "My_stack.cpp"
using namespace std;

bool is_matched(char *str)
{
	my_stack mstack;
	mstack.getSize(10);
	char ch;
	for (int i = 0; i < strlen(str); i++)
	{
		ch = str[i];
		switch (ch)
		{
		case '(' :
		case '[':
		case '{':
			mstack.push(ch);
			break;
		case ')':
		case']':
		case'}':
			if ((ch == ')' && mstack.peek() == '(') || (ch == ']' && mstack.peek() == '[') || 
				(ch == '}' && mstack.peek() == '{'))
				mstack.pop();
			else
				return false;
		}
	}
	return mstack.isEmpty();
}