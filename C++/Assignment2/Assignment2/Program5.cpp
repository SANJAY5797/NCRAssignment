#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

class String{
	char *s;
	int len;
public:
	String()
	{
		s = NULL;
		len = 0;
	}
	String(char *str)
	{
		len = strlen(str);
		str = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(s, str);
	}
	String(const String &temp)
	{
		s = temp.s;
		len = temp.len;
	}
	~String()
	{
	}
	String operator+(String temp)
	{
		String res;
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
	String operator=(String a)
	{
		s = (char *)malloc(sizeof(char)*(strlen(a.s) + 1));
		strcpy(s, a.s);
		return *this;
	}
	friend ostream& operator<<(ostream &cout, String s);
	friend istream& operator>>(istream &cin, String &s);
};