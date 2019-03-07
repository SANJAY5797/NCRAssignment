#include <stdio.h>
#include<string.h>
#include <stdlib.h>

extern struct StackNode* newNode(char data);
extern int isEmpty(struct StackNode *root);
extern void push(struct StackNode** root, char data);
extern int pop(struct StackNode** root);
extern int peek(struct StackNode* root);

int precedence(char ch)
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

char* infix_to_postfix(char* str)
{
	char *postfix = (char*)malloc(sizeof(char)*(strlen(str)+10));
	struct StackNode* root = NULL;
	int i, j = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			postfix[j] = str[i];
			j++;
			if (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*' || str[i + 1] == '/' || str[i+1] == '\0')
			{
				postfix[j] = '@';
				j++;
			}
		}
		else
		{
			if (str[i] == '(')
				push(&root,'(');
			else
			{
				if (str[i] == ')')
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
					if (precedence(str[i]) > precedence(peek(root)))
						push(&root,str[i]);
					else
					{
						while (precedence(str[i]) <= precedence(peek(root)))
						{
							postfix[j] = (char)pop(&root);
							j++;
						}
						push(&root,str[i]);
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
	return postfix;
}