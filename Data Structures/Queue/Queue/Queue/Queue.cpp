#include "stdafx.h"
#include<iostream>
using namespace std;

struct queue_data{
	int *data;
	int front;
	int rear;
	int size;
};

class my_Queue{
	queue_data q;
public:
	my_Queue()
	{
		q.data = NULL;
		q.front = -1;
		q.rear = -1;
		q.size = 0;
	}
	void getsize(int n)
	{
		q.size = n;
		q.data = new int[n];
	}
	bool isFull()
	{
		if (q.rear == (q.size - 1))
			return true;
		else
			return false;
	}
	bool isEmpty()
	{
		if (q.front == -1 && q.rear == -1)
			return true;
		else
			return false;
	}
	void my_Enqueue(int n)
	{
		//cout << "\nrear = " << q.rear << "\nfront = " << q.front;
		if (!isFull())
		{
			if (q.front == -1 && q.rear == -1)
			{
				q.front++;
				q.rear++;
				q.data[q.rear] = n;
			}
			else
			{
				if (q.rear < q.size)
					q.data[++q.rear] = n;
			}
			
		}
		else
		{
			cout << "\nQueue is Full\n";
		}
	}
	int my_Dequeue()
	{
		if (!isEmpty())
		{
			int temp;
			temp = q.data[q.front];
			q.front++;
			return temp;
		}
		else
		{
			cout << "\nQueue is empty";
		}
	}
	void display()
	{
		if (isEmpty())
		{
			cout << "\nQueue is empty";
			return;
		}
		for (int i = q.front; i <= q.rear; i++)
			cout << q.data[i] << "   ";
		cout << endl;
	}
};