#include <stdio.h> 
#include <stdlib.h> 


// A structure to represent a character stack 
struct StackNode
{
	char data;
	struct StackNode* next;
};

struct StackNode* newNode(char data)
{
	struct StackNode* stackNode =
		(struct StackNode*) malloc(sizeof(struct StackNode));
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

int isEmpty(struct StackNode *root)
{
	return !root;
}

void push(struct StackNode** root, char data)
{
	struct StackNode* stackNode = newNode(data);
	stackNode->next = *root;
	*root = stackNode;
}

int pop(struct StackNode** root)
{
	if (isEmpty(*root))
		return -1;
	struct StackNode* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	free(temp);

	return popped;
}

int peek(struct StackNode* root)
{
	if (isEmpty(root))
		return -1;
	return root->data;
}

void destroy_stack(struct StackNode* root)
{
	while (!isEmpty(root))
		pop(&root);
}