#include "stdafx.h"
#include<iostream>
using namespace std;

class Employee{
	int e_id;
	int salary;
public:
	Employee(int id, int sal)
	{
		e_id = id;
		salary = sal;
		cout << "\nCall by value";
	}
	Employee(Employee &emp)
	{
		e_id = emp.e_id;
		salary = emp.salary;
		cout << "\nCall by reference";
	}
};