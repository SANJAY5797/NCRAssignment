#include <stdio.h>
#include<string.h>
#include <stdlib.h>

extern struct long_double_StackNode* long_double_newNode(long double data);
extern long double long_double_isEmpty(struct long_double_StackNode *root);
extern void long_double_push(struct long_double_StackNode** root, long double data);
extern long double long_double_pop(struct long_double_StackNode** root);
extern long double long_double_peek(struct long_double_StackNode* root);

long double postfix_evaluation(char *str)
{
	struct long_double_StackNode* root = NULL;
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
			long_double_push(&root,val);
		}
		else
		{
			long double b = long_double_pop(&root);
			long double a =long_double_pop(&root);
			if (str[i] == '+')
			{
				long_double_push(&root,a + b);
			}
			else if (str[i] == '-')
			{
				long_double_push(&root,a - b);
			}
			else if (str[i] == '*')
			{
				long_double_push(&root,a*b);
			}
			else if (str[i] == '/')
			{
				long_double_push(&root,a / b);
			}
		}
	}
	return long_double_peek(root);

}