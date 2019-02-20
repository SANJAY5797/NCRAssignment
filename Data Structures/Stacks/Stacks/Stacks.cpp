
#include "stdafx.h"
#include<iostream>
#include "My_stack.cpp"
using namespace std;

my_stack::my_stack()
{
	sta.top = -1;
	sta.s = NULL;
	sta.size = 0;
}

void my_stack::push(int n)
{
	if (isFull())
		cout << "\nStack is full";
	else
		sta.s[++sta.top] = n;
}

int my_stack::pop()
{
	if (isEmpty())
	{
		cout << "\nStack is empty";
		return -999;
	}
	else
		return sta.s[sta.top--];
}

int my_stack::peek()
{
	if (isEmpty())
	{
		cout << "\nStack is empty";
		return -999;
	}
	else
		return sta.s[sta.top];
}

bool my_stack::isEmpty()
{
	if (sta.top == -1)
		return true;
	else
		return false;
}

bool my_stack::isFull()
{
	if (sta.top == sta.size - 1)
		return true;
	else
		return false;
}

void my_stack::Display()
{
	for (int i = 0; i <= sta.top; i++)
	{
		cout << sta.s[i] << endl;
	}
}

void my_stack::getSize(int n)
{
	sta.size = n;
	sta.s = new int[n];
}

my_stack :: ~my_stack()
{
	delete sta.s;
}

bool is_matched(char*);
char* in_to_post(char* str);
char* in_to_pre(char *str);
int postfix_evaluation(char *);

int main()
{
	cout << "Select option to run program:\n";
	int option;
	while (1)
	{
		cout << "\n1.Stack implementation\n2.Symbol Matching\n3.Infix to Postfix\n4.Infix to Prefix\n\
5.Postfix evaluation\n6.Exit\n";
		cin >> option;
		if (option == 6)
			break;
		switch (option)
		{
		case 1:
		{
			my_stack m;
			m.getSize(10);
			m.push(10);
			m.push(40);
			m.push(50);
			m.push(20);
			m.push(30);
			m.push(90);
			m.Display();
			m.pop();
			m.pop();
			m.Display();
			getchar();
			return 0;
		}
		case 2:
		{
			cout<< is_matched("a(b+c)*{adfj{");
			break;
		}
		case 3:
		{
			cout<< in_to_post("((a+b)*e-(f/g))");
		}
		case 4:
		{
			cout<< in_to_pre("((a+b)*e-(f/g))");
		}
		case 5:
		{
			cout << postfix_evaluation("12@31@4@*+8@-");
		}
		}
	}
}

