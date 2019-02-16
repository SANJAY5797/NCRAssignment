#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	int empno;
	int salary;
	char *name;
public:
	Employee()
	{
		empno = 0;
		salary = 0;
		name = NULL;
	}
	~Employee()
	{
		cout << "\nObject Destroyed";
	}
	void set_data()
	{
		char temp[20];
		cout << "\nEnter name : ";
		cin >> temp;
		int len = strlen(temp);
		name = new char[len + 1];
		strcpy(name, temp);
		cout << "\nEnter Emp_no : ";
		cin >> empno;
		cout << "\nEnter salary : ";
		cin >> salary;
	}
	void read_data()
	{
		cout << "\nEmployee Name : " << name;
		cout << "\nEmployee ID : " << empno;
		cout << "\nEmployee Salary : " << salary;
	}
	friend istream& operator>>(istream &cin, Employee &e);

};