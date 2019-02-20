// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SLL.cpp"
using namespace std;

int main()
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
	getchar();
	return 0;
}

