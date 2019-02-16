#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

class String_2{
	
public:
	char *s;
	int len;
	String_2()
	{
		s = NULL;
		len = 0;
	}
	String_2(char *str)
	{
		len = strlen(str);
		s = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(s, str);
	}
	String_2(String_2 &str)
	{
		len = strlen(str.s);
		s = new char[len + 1];
		strcpy(s, str.s);
	}
};