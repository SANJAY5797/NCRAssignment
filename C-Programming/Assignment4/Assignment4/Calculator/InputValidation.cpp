#include <stdio.h>
#include<string.h>
#include <stdlib.h>

extern struct StackNode* newNode(char data);
extern int isEmpty(struct StackNode *root);
extern void push(struct StackNode** root, char data);
extern int pop(struct StackNode** root);
extern int peek(struct StackNode* root);


bool brackets_matching(char *input)
{
	struct StackNode* root = NULL;
	char ch;
	for (int i = 0; i < strlen(input); i++)
	{
		ch = input[i];
		switch (ch)
		{
		case '(':
		case '[':
		case '{':
			push(&root,ch);
			break;
		case ')':
		case']':
		case'}':
			if ((ch == ')' && peek(root) == '(') || (ch == ']' && peek(root) == '[') ||
				(ch == '}' && peek(root) == '{'))
				pop(&root);
			else
				return false;
		}
	}
	return isEmpty(root);
}

bool infix_check(char* input)
{
	int counter = 0;
	for (counter = 0; counter < strlen(input); counter++)
	{
		if ((input[counter] == '+') || (input[counter] == '-') || (input[counter] == '*') || (input[counter] == '/'))
		{
			if (!(input[counter - 1] >= '0' && input[counter - 1] <= '9' && input[counter + 1] >= '0' && input[counter + 1] <= '9'))
			{
				printf("Error : Expression not an infix expression\n");
				getchar();
				return false;
			}
		}
	}
	return true;
}

bool valid_characters(char *input)
{
	int counter = 0;
	for (counter = 0; counter < strlen(input); counter++)
	{
		if (!((input[counter] == '+') || (input[counter] == '-') || (input[counter] == '*') || (input[counter] == '/') || (input[counter] >= '0' && input[counter] <= '9')))
		{
			printf("Error : Unexpected character entered\n");
			getchar();
			return false;
		}
	}
	return true;
}

bool input_validation(char* input)
{
	if (!brackets_matching(input))
	{
		printf("Brackets mismatch\n");
		getchar();
		return false;
	}
	if (!(input[0] >= '0' && input[0] <= '9'))
	{
		printf("Starting letter expected to be a number\n");
		getchar();
		return false;
	}
	if (!infix_check(input))
		return false;
	if (!valid_characters(input))
		return false;
	return true;
}