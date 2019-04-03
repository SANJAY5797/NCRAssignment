#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

class myString{
	char *s;
	int len;
public:
	myString()
	{
		s = NULL;
		len = 0;
	}
	myString(char *str)
	{
		len = strlen(str);
		str = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(s, str);
	}
	myString(const myString &temp)
	{
		s = temp.s;
		len = temp.len;
	}
	~myString()
	{
	}
	myString operator+(myString temp)
	{
		myString res;
		res.len = temp.len + len;
		res.s = (char *)malloc(sizeof(char)*(res.len + 1));
		strcpy(res.s, s);
		res.s = strcat(res.s, temp.s);
		return res;
	}
	char operator[](int i)
	{
		return this->s[i];
	}
	myString operator=(myString a)
	{
		s = (char *)malloc(sizeof(char)*(strlen(a.s) + 1));
		strcpy(s, a.s);
		return *this;
	}
	friend ostream& operator<<(ostream &cout, myString str)
	{
		cout << str.s << endl;
		return cout;
	}
	friend istream& operator>>(istream &cin, myString &str)
	{
		char temp[50];
		cout << "\nEnter the String : ";
		cin >> temp;
		str.s = (char *)malloc(sizeof(char)*(strlen(temp) + 1));
		strcpy(str.s, temp);
		return cin;
	}
};