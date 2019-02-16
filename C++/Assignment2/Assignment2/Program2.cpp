#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

class Student{
	int roll_no;
	char* name;
	int m1, m2, m3;
	int total;
	char *grade;
public:
	friend ostream& operator<<(ostream &cout, Student s);
	friend istream& operator>>(istream &cin, Student &s);
	friend void generate_results(Student s[], int n);
};



