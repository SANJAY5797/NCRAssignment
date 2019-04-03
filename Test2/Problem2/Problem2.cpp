#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

class SinglyLinkedList{
	struct Node* start;
public:
	SinglyLinkedList()
	{
		start = NULL;
	}
	void insert_beginning(int element)
	{
		if (start == NULL)
		{
			start = new Node;
			start->data = element;
			start->next = NULL;
		}
		else
		{
			Node* temp = new Node;
			temp->data = element;
			temp->next = start;
			start = temp;
		}
	}
	void insert_at_n(int element, int position)//Position starts from 1
	{
		int counter = 0;
		Node* curr = start;
		//Traverse in the linked list.
		for (counter = 1; counter < position-1; counter++)
		{
			curr = curr->next;
		}
		if (curr == NULL && counter < position)//If the position is not present in the linked list yet
		{
			cout << "Error the position is invalid \n";
			return;
		}
		//Insert at beginning of node
		if (position == 1)
		{
			insert_beginning(element);
			return;
		}
		//Create the new node and insert at given position if position > 1
		Node* temp = new Node;
		temp->data = element;
		temp->next = curr->next;
		curr->next = temp;
		return;
	}
	void reverse_list()
	{
		Node *prev = NULL;
		if (start == NULL || start->next == NULL)
			return;
		else
		{
			Node *curr;
			while (start != NULL)
			{
				curr = start;
				start = curr->next;
				curr->next = prev;
				prev = curr;
			}
		}
		start = prev;
	}
	void print_forward()
	{
		Node* curr = start;
		//Traverse the list and print 
		while (curr->next)
		{
			cout << curr->data<<"->";
			curr = curr->next;
		}
		cout << curr->data << endl;
	}
	void print_backward_recursive(Node* curr)
	{
		if (curr == NULL)
			return;
		print_backward_recursive(curr->next);
		cout << curr->data << "->";
	}
	void print_backward()
	{
		print_backward_recursive(start);
		cout << endl;
	}
};

int main()
{
	SinglyLinkedList sll;
	sll.insert_beginning(1);
	sll.insert_beginning(2);
	sll.insert_beginning(3);
	sll.insert_at_n(4, 2);
	sll.print_forward();
	sll.print_backward();
	sll.reverse_list();
	sll.print_forward();
	getchar();
	return 0;
}