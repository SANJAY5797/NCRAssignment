#include "stdafx.h"
#include<iostream>
using namespace std;

struct pol_node{
	int coeff;
	int exp;
	struct pol_node* next;
};

class poly_link_list{
	struct pol_node *start;
public:
	poly_link_list()
	{
		start = NULL;
	}
	void Insert_First(int ele,int pow)
	{
		struct pol_node* temp;
		temp = new pol_node;
		temp->coeff = ele;
		temp->exp = pow;
		temp->next = start;
		start = temp;
	}
	void Insert_last(int ele,int pow)
	{
		struct pol_node* temp;
		temp = new pol_node;
		temp->coeff = ele;
		temp->exp = pow;
		temp->next = NULL;
		if (start == NULL)
			start = temp;
		else
		{
			struct pol_node *curr = start;
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = temp;
		}
	}
	void print_front()
	{
		struct pol_node *curr = start;
		while (curr != NULL)
		{
			cout << curr->coeff << "x^" << curr->exp << "+";
			curr = curr->next;
		}
		cout << endl;
	}
	friend poly_link_list add(poly_link_list l1, poly_link_list l2);
};