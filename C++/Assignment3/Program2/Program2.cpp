#include <iostream>
#include <cstdlib>
using namespace std;
// define default size of Stack
#define SIZE 10

class Complex{
	int real;
	int imaginary;
public:
	Complex()
	{
		//cout << "\nDefault constructor called";
		real = imaginary = 0;
	}
	Complex(int r)
	{
		//cout << "\nParameter Constructor with one argument";
		real = imaginary = r;
	}
	Complex(int r, int i)
	{
		//cout << "\nParameter Constructor with two argument";
		real = r;
		imaginary = i;
	}
	void printComplex()
	{
		cout << real << " + " << "(" << imaginary << ")" << "i";
	}
	friend ostream& operator<<(ostream &cout, Complex c)
	{
		cout << "\nReal = " << c.real;
		cout << "\nImaginary value = " << c.imaginary;
		return cout;
	}

	friend istream& operator>>(istream &cin, Complex &c)
	{
		cout << "\nEnter real part of the number";
		cin >> c.real;
		cout << "\nEnter imaginary part of the number";
		cin >> c.imaginary;
		return cin;
	}
};

template <class X>
class myStack
{
	X *arr;
	int top;
	int size;

public:
	myStack();	// constructor
	void push(X);
	X pop();
	X peek();
	bool isEmpty();
	bool isFull();
};

// Constructor to initialize Stack
template <class X>
myStack<X>::myStack()
{
	arr = new X[SIZE];
	size = SIZE;
	top = -1;
}

// function to add an element x in the Stack
template <class X>
void myStack<X>::push(X x)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
	}

	cout << "Inserted " << x << endl;
	arr[++top] = x;
}

// function to pop top element from the Stack
template <class X>
X myStack<X>::pop()
{
	// check for Stack underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
	}

	cout << "Removed " << peek() << endl;

	// decrease Stack size by 1 and (optionally) return the popped element
	return arr[top--];
}

// function to return top element in a Stack
template <class X>
X myStack<X>::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		cout << "UnderFlow\nProgram Terminated\n";
}


// Utility function to check if the Stack is empty or not
template <class X>
bool myStack<X>::isEmpty()
{
	return top == -1;	// or return size() == 0;
}

// Utility function to check if the Stack is full or not
template <class X>
bool myStack<X>::isFull()
{
	return top == size - 1;	// or return size() == size;
}

// main function
int main()
{
	myStack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.pop();
	intStack.pop();
	intStack.push(3);
	cout << "Top element is: " << intStack.peek() << endl;
	intStack.pop();
	if (intStack.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

	myStack<float> floatStack;
	floatStack.push(1.3);
	floatStack.push(5.2);
	floatStack.pop();
	floatStack.pop();
	floatStack.push(6.443);
	cout << "Top element is: " << floatStack.peek() << endl;
	floatStack.pop();
	if (floatStack.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

	myStack<char*> charStack;
	charStack.push("Pratik");
	charStack.push("Saxena");
	charStack.pop();
	charStack.pop();
	charStack.push("Hello");
	cout << "Top element is: " << charStack.peek() << endl;
	charStack.pop();
	if (charStack.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

	myStack<Complex> compStack;
	Complex comp1, comp2(2, 3), comp3(4);
	compStack.push(comp1);
	compStack.push(comp2);
	compStack.pop();
	compStack.pop();
	compStack.push(comp3);
	cout << "Top element is: ";
	compStack.peek().printComplex();
	cout << endl;
	compStack.pop();
	if (compStack.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

	getchar();
	return 0;
}