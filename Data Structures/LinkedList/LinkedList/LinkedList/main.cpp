// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SLL.cpp"
#include "polynomial_addition.cpp"
#include "Merge_list.cpp"

using namespace std;

poly_link_list add(poly_link_list l1, poly_link_list l2)
{
	struct pol_node *curr1,*curr2;
	poly_link_list l3 ;
	curr1 = l1.start;
	curr2 = l2.start;
	while (curr1 !=NULL && curr2 != NULL)
	{
		if (curr1->exp > curr2->exp)
		{
			l3.Insert_last(curr1->coeff, curr1->exp);
			curr1 = curr1->next;
		}
		else if (curr1->exp < curr2->exp)
		{
			l3.Insert_last(curr2->coeff, curr2->exp);
			curr2 = curr2->next;
		}
		else
		{
			l3.Insert_last(curr1->coeff + curr2->coeff, curr1->exp);
			curr1 = curr1->next;
			curr2 = curr2->next;
		}
	}
	return l3;

}

merge_linked_list merge(merge_linked_list list1, merge_linked_list list2)
{
	struct merge_node *index1, *index2;
	merge_linked_list list3;
	index1 = list1.start;
	index2 = list2.start;
	while (index1 != NULL && index2 != NULL)//Take two pointers and merge the lists into a 3rd list.
	{
		if (index1->data > index2->data)
		{
			list3.Insert_last(index2->data);
			index2 = index2->next;
		}
		else if (index1->data < index2->data)
		{
			list3.Insert_last(index1->data);
			index1 = index1->next;
		}
		else
		{
			list3.Insert_last(index1->data);
			list3.Insert_last(index2->data);
			index1 = index1->next;
			index2 = index2->next;
		}
	}
	if (index1 != NULL)//If there are few elements left in list1
	{
		while (index1 != NULL)//Add leftover elements in list3
		{
			list3.Insert_last(index1->data);
			index1 = index1->next;
		}
	}
	if (index2 != NULL)//If there are few elements left in list2
	{
		while (index2 != NULL)//Add leftover elements in list3
		{
			list3.Insert_last(index2->data);
			index2 = index2->next;
		}
	}
	return list3;
}

int main()
{
	cout<< "Select an option\n1.Linked list implementation\n2.Polynomial Addition\n3.Merge two sorted lists\n";
	int option;
	cin >> option;
	switch (option){
	case 1:
	{
		singly_linked_list ll;
		ll.Insert_First(1);
		ll.Insert_last(2);
		ll.Insert_last(3);
		ll.print_front();
		ll.reverse();
		ll.Delete_first();
		ll.print_front();
		ll.print_backwards();
		cout << endl;
		ll.print_backwards();
		break;
	}
	case 2:
	{
		poly_link_list l1, l2, l3;
		l1.Insert_last(2, 3);
		l1.Insert_last(3, 1);
		l1.Insert_last(4, 0);
		l2.Insert_last(3, 2);
		l2.Insert_last(4, 1);
		l2.Insert_last(5, 0);
		l3 = add(l1, l2);
		l3.print_front();
		getchar();
	}
	case 3:
	{
		merge_linked_list list1, list2,list3;
		list1.Insert_last(4);
		list1.Insert_last(6);
		list1.Insert_last(10);
		list2.Insert_last(3);
		list2.Insert_last(8);
		list3 = merge(list1, list2);
		list3.print_front();
		getchar();
	}
	}
	getchar();
	return 0;
}

