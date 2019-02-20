#include "stdafx.h"
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

class singly_linked_list{
	struct node *start;
public:
	singly_linked_list()
	{
		start = NULL;
	}
	void Insert_First(int ele)
	{
		struct node* temp;
		temp = new node;
		temp->data = ele;
		temp->next = start;
		start = temp;
	}
	void Insert_last(int ele)
	{
		struct node* temp;
		temp = new node;
		temp->data = ele;
		temp->next = NULL;
		if (start == NULL)
			start = temp;
		else
		{
			struct node *curr = start;
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = temp;
		}
	}
	void Insert_After(int search, int ele)
	{
		struct node* curr = start;
		if (start != NULL)
		{
			while (curr != NULL && curr->data != search)
				curr = curr->next;
			if (curr != NULL)
			{
				struct node* temp;
				temp->data = ele;
				temp->next = curr->next;
				curr->next = temp;
			}
			else
			{
				cout << "\nElement not found";
			}
		}
		else
		{
			cout << "\nList is empty";
		}
	}
	void Insert_Before(int search, int ele)
	{
		if (start != NULL)
		{
			if (start->data == search)
			{
				struct node *temp;
				temp = new node;
				temp->data = ele;
				temp->next = start;
				start = temp;
			}
			else
			{
				struct node* curr;
				curr = start;
				while (curr->next != NULL && curr->next->data != search)
					curr = curr->next;
				if (curr != NULL)
				{
					struct node *temp;
					temp = new node;
					temp->data = ele;
					temp->next = curr->next;
					curr->next = temp;
				}
				else
				{
					cout << "\nElement not found!";
				}
			}
		}
		else
		{
			cout << "\nList is empty";
		}
	}
	int Delete_first()
	{
		int x = -99;
		if (start != NULL)
		{
			struct node *temp;
			temp = start;
			start = start->next;
			x = temp->data;
			delete temp;
		}
		else
			cout << "List is empty";
		return x;
	}
	int Delete_last()
	{
		int x = -99;
		if (start != NULL)
		{
			if (start->next == NULL)
			{
				x = start->data;
				delete start;
				start = NULL;
			}
			else
			{
				struct node* curr;
				curr = start;
				while (curr->next->next != NULL)
					curr = curr->next;
				x = curr->next->data;
				delete curr->next;
				curr->next = NULL;
			}
		}
		else
			cout << "List is empty";
		return x;
	}
	void delete_spec(int ele)
	{
		if (start != NULL)
		{
			if (start->data == ele)
			{
				struct node *temp = start;
				start = temp->next;
				delete temp;
			}

			else
			{
				struct node *curr = start;
				while (curr->next != NULL && curr->next->data != ele)
					curr = curr->next;
				if (curr->next != NULL)
				{
					struct node *temp = curr->next;
					curr->next = temp->next;
					delete temp;
				}
				else
					cout << "Element not found";
			}
		}
		else
			cout << "List is empty";
	}
	void print_front()
	{
		struct node *curr = start;
		while (curr != NULL)
		{
			cout << curr->data << "  " ;
			curr = curr->next;
		}
		cout << endl;
	}
	void travel_back(struct node *curr)
	{
		if (curr != NULL)
		{
			travel_back(curr->next);
			cout << curr->data << "  ";
		}
		else
			return;
	}
	void print_backwards()
	{
		travel_back(start);
	}
	void reverse()
	{
		struct node *rev = NULL;
		if (start == NULL || start->next == NULL)
			return;
		else
		{
			struct node *temp;
			while (start != NULL)
			{
				temp = start;
				start = temp->next;
				temp->next = rev;
				rev = temp;
			}
		}
		start = rev;
	}
	~singly_linked_list()
	{
		struct node *temp;
		while (start != NULL)
		{
			temp = start;
			start = temp->next;
			delete temp;
		}
	}
};