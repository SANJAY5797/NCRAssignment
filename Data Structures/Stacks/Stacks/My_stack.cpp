#include "stdafx.h"
#include<iostream>
using namespace std;

struct _Stack_{
	int top;
	int *s;
	int size;
};

class my_stack{
	struct _Stack_ sta;
public:
	my_stack();
	void push(int n);
	int pop();
	int peek();
	bool isEmpty();
	bool isFull();
	void Display();
	void getSize(int n);
	~my_stack();
};