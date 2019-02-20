// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Queue.cpp"
#include "CircularQueue.cpp"
using namespace std;

int main()
{
	int option;
	cout << "Select option\n1.Linear Queue\n2.Circular Queue";
	cin >> option;
	if (option == 1)
	{
		my_Queue q;
		q.getsize(5);
		q.my_Enqueue(10);
		q.my_Enqueue(20);
		q.display();
		q.my_Enqueue(30);
		q.my_Enqueue(50);
		q.my_Enqueue(22);
		q.my_Enqueue(45);
		q.my_Dequeue();
		q.display();
	}
	else
	{
		cir_queue q;
		q.getsize(5);
		q.cir_Enqueue(14);
		q.cir_Enqueue(22);
		q.cir_Enqueue(18);
		q.cir_Enqueue(16);
		q.Display();
		printf("\nDequeued value = %d", q.cir_Dequeue());
		printf("\nDequeued value = %d", q.cir_Dequeue());
		q.Display();
		q.cir_Enqueue(9);
		q.cir_Enqueue(20);
		q.cir_Enqueue(5);
		q.Display();
		q.cir_Enqueue(25);
		getchar();
	}
	getchar();
	return 0;
}

