#include "stdafx.h"
#include<iostream>
#include<string.h>
#include "My_stack.cpp"
using namespace std;

int postfix_evaluation(char *str)
{
	my_stack s;
	s.getSize(strlen(str));
	for (int i = 0; i<strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			int val = str[i] - '0';
			i++;
			while (str[i] != '@')
			{
				val *= 10;
				int temp = str[i] - '0';
				val += temp;
				i++;
			}
			s.push(val);
		}
		else
		{
			int b = s.pop();
			int a = s.pop();
			if (str[i] == '+')
			{
				s.push(a + b);
			}
			else if (str[i] == '-')
			{
				s.push(a - b);
			}
			else if (str[i] == '*')
			{
				s.push(a*b);
			}
			else if (str[i] == '/')
			{
				s.push(a / b);
			}
		}
	}
	return s.peek() ;

}