#include "stdafx.h"
#include<iostream>
using namespace std;

struct cir_queue_data{
	int *data;
	int front;
	int rear;
	int size;
};

class cir_queue{	
	cir_queue_data q;
public:
	cir_queue()
	{
		q.rear = q.front = -1;
		q.data = NULL;
		q.size = 0;
	}
	void getsize(int n)
	{
		q.size = n;
		q.data = new int[n];
	}
	bool isFull()
	{
		if ((q.front == 0 && q.rear == q.size - 1) ||
			(q.rear == (q.front - 1) % (q.size - 1)))
		{
			return true;
		}
		else
			return false;
	}
	bool isEmpty()
	{
		if (q.front == -1)
		{
			return true;
		}
		else
			return false;
	}
	void cir_Enqueue(int ele)
	{
		if (isFull())
		{
			cout << "\nQueue is Full";
			return;
		}
		else if (q.front == -1) 
		{
			q.front = q.rear = 0;
			q.data[q.rear] = ele;
		}

		else if (q.rear == q.size - 1 && q.front != 0)
		{
			q.rear = 0;
			q.data[q.rear] = ele;
		}

		else
		{
			q.rear++;
			q.data[q.rear] = ele;
		}
	}
	int cir_Dequeue()
	{
		if (isEmpty())
		{
			printf("\nQueue is Empty");
			return INT_MIN;
		}
		int ele = q.data[q.front];
		if (q.front == q.rear)
		{
			q.front = -1;
			q.rear = -1;
		}
		else if (q.front == q.size - 1)
			q.front = 0;
		else
			q.front++;

		return ele;
	}
	void Display()
	{
		if (isEmpty())
		{
			printf("\nQueue is Empty");
			return;
		}
		printf("\nElements in Circular Queue are: ");
		if (q.rear >= q.front)
		{
			for (int i = q.front; i <= q.rear; i++)
				printf("%d ", q.data[i]);
		}
		else
		{
			for (int i = q.front; i < q.size; i++)
				printf("%d ", q.data[i]);

			for (int i = 0; i <= q.rear; i++)
				printf("%d ", q.data[i]);
		}
	}
};