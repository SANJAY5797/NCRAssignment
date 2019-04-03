#include <stdio.h> 
#include <stdlib.h> 

struct long_double_StackNode
{
	long double data;
	struct long_double_StackNode* next;
};

struct long_double_StackNode* long_double_newNode(long double data)
{
	struct long_double_StackNode* stackNode = (struct long_double_StackNode*) malloc(sizeof(struct long_double_StackNode));
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

long double long_double_isEmpty(struct long_double_StackNode *root)
{
	return !root;
}

void long_double_push(struct long_double_StackNode** root, long double data)
{
	struct long_double_StackNode* stackNode = long_double_newNode(data);
	stackNode->next = *root;
	*root = stackNode;
}

long double long_double_pop(struct long_double_StackNode** root)
{
	if (long_double_isEmpty(*root))
		return -1;
	struct long_double_StackNode* temp = *root;
	*root = (*root)->next;
	long double popped = temp->data;
	free(temp);

	return popped;
}

long double long_double_peek(struct long_double_StackNode* root)
{
	if (long_double_isEmpty(root))
		return -1;
	return root->data;
}

void destroy_my_long_double_stack(struct long_double_StackNode* root)
{
	while (!long_double_isEmpty(root))
		long_double_pop(&root);
}