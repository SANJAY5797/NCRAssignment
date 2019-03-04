#include "stdafx.h"
#include<iostream>
using namespace std;

struct merge_node{
	int data;
	struct merge_node* next;
};

class merge_linked_list{
	struct merge_node* start;
public:
	merge_linked_list()
	{
		start = NULL;
	}
	void Insert_First(int ele)
	{
		struct merge_node* temp;
		temp = new merge_node;
		temp->data = ele;
		temp->next = start;
		start = temp;
	}
	void Insert_last(int ele)
	{
		struct merge_node* temp;
		temp = new merge_node;
		temp->data = ele;
		temp->next = NULL;
		if (start == NULL)
			start = temp;
		else
		{
			struct merge_node *curr = start;
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = temp;
		}
	}
	void print_front()
	{
		struct merge_node *curr = start;
		while (curr != NULL)
		{
			cout << curr->data << "  ";
			curr = curr->next;
		}
		cout << endl;
	}
	friend merge_linked_list merge(merge_linked_list l1, merge_linked_list l2);
};