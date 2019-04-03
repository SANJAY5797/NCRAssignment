#include<iostream>
using namespace std;
template<class T>// template declaration
int linear_search(T arr[], T ele, int size = 0)// template function to implement search
{ 
	int counter = 0;
	for (counter = 0; counter<size; counter++)
	{
		if (arr[counter] == ele)
			return counter;
	}
	return -1;
}
class Complex
{
	int real, imag;
public:
	Complex()//default constructor
	{
		real = imag = 0;
	}
	Complex(int x, int y)// parameterized constructor
	{
		real = x;
		imag = y;
	}
	Complex(const Complex &b)//copy constructor
	{
		real = b.real;
		imag = b.imag;
	}
	~Complex()//destructor
	{}
	bool operator==(const Complex &a)// overloading ==
	{
		if (real == a.real&&imag == a.imag)
			return true;
		else
			return false;
	}
	friend istream& operator>>(istream& cin, Complex &b);//overloading cin
};
istream& operator>>(istream& cin, Complex &x)
{
	cin >> x.real >> x.imag;
	return cin;
}



int main()
{
	int intArr[] = { 1, 2, 6, 3, 8, 10 };
	cout<<"\nElement found at index : "<<linear_search<int>(intArr, 10, 6);
	float floatArr[] = { 1.4, 2.2, 8.6, 3.43, 32.8, 1.908 };
	cout << "\nElement found at index : " << linear_search<float>(floatArr, 8.6, 6);

	getchar();
	return 0;
}