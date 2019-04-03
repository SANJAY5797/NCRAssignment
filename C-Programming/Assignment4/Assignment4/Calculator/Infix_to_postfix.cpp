#include <stdio.h>
#include<string.h>
#include <stdlib.h>

extern struct StackNode* newNode(char data);//To create new node in character stack
extern int isEmpty(struct StackNode *root);//To check whether stack is empty or not
extern void push(struct StackNode** root, char data);//To push into stack
extern int pop(struct StackNode** root);//To pop from stack
extern int peek(struct StackNode* root);//To peek top element of stack
extern void destroy_stack(struct StackNode* root);//To deallocate memory of stack

int precedence(char ch)//Order precedence
{
	switch (ch)
	{
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

int number_of_operators(char* infix)//To calculate number of delimiters
{
	int counter=0, operators_count=0;
	for (counter = 0; counter < strlen(infix); counter++)
	{
		if (infix[counter + 1] == '+' || infix[counter + 1] == '-' || infix[counter + 1] == '*' || infix[counter + 1] == '/')
			operators_count++;
	}
	return operators_count;
}

char* infix_to_postfix(char* infix)//To convert infix expression to postfix
{
	char *postfix = (char*)malloc(sizeof(char)*(strlen(infix)+number_of_operators(infix)+2));
	struct StackNode* root = NULL;
	int i, j = 0;
	for (i = 0; i < strlen(infix); i++)
	{
		if (infix[i] >= '0' && infix[i] <= '9')
		{
			postfix[j] = infix[i];
			j++;
			if (infix[i + 1] == '+' || infix[i + 1] == '-' || infix[i + 1] == '*' || infix[i + 1] == '/' || infix[i+1] == '\0' || infix[i+1] == ')' 
				|| infix[i+1] == '}' || infix[i+1] == ']')//Inserting delimiter when a number ends
			{
				postfix[j] = '@';
				j++;
			}
		}
		else
		{
			if (infix[i] == '(' || infix[i] == '{' || infix[i] == '[')
				push(&root,'(');
			else
			{
				if (infix[i] == ')' || infix[i] == '}' || infix[i] == ']')
				{
					while (peek(root) != '(')
					{
						postfix[j] = (char)pop(&root);
						j++;
					}
					pop(&root);
				}
				else
				{
					if (precedence(infix[i]) > precedence(peek(root)))
						push(&root,infix[i]);
					else
					{
						while (precedence(infix[i]) <= precedence(peek(root)))
						{
							postfix[j] = (char)pop(&root);
							j++;
						}
						push(&root,infix[i]);
					}
				}
			}
		}
	}
	while (!(isEmpty(root)))
	{
		postfix[j] = (char)pop(&root);
		j++;
	}
	postfix[j] = '\0';
	destroy_stack(root);
	return postfix;
}