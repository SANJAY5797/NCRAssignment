// Assignment2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
#include "Program1.cpp"
#include "Program2.cpp"
#include "Program3.cpp"
#include "Program4.cpp"
#include "Program5.cpp"
#include "Program6.cpp"



int Polar::count;
ostream& operator<<(ostream &cout, Student s)
{
	cout << "\nName : " << s.name << "\nRoll no. : " << s.roll_no << "\nMarks1 : " << s.m1
		<< "\nMarks2 : " << s.m2 << "\nMarks3 : " << s.m3 << "\nTotal marks : " << s.total
		<< "\nGrade : " << s.grade;
	return cout;
}

istream& operator>>(istream &cin, Student &s)
{
	char temp[20];
	cout << "\nEnter name : ";
	cin >> temp;
	int len = strlen(temp);
	s.name = new char[len + 1];
	strcpy(s.name, temp);
	cout << "\nEnter Roll_no : ";
	cin >> s.roll_no;
	cout << "\nEnter marks1 : ";
	cin >> s.m1;
	cout << "\nEnter marks2 : ";
	cin >> s.m2;
	cout << "\nEnter marks3 : ";
	cin >> s.m3; 
	return cin;
}

void generate_results(Student s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		s[i].grade = new char[2];
		if (s[i].total > 250)
			strcpy(s[i].grade, "A");
		else
		{
			if (s[i].total > 200)
				strcpy(s[i].grade, "B");
			else
				strcpy(s[i].grade, "C");
		}
		cout << s[i];
	}

}

istream& operator>>(istream &cin, Employee e[])
{
	int i;
	for (i = 0; i < 5;i++)
		e[i].set_data();
	return cin;
}

ostream& operator<<(ostream &cout, Complex c)
{
	cout << "\nReal = " << c.real;
	cout << "\nImaginary value = " << c.img;
	return cout;
}

istream& operator>>(istream &cin, Complex &c)
{
	cout << "\nEnter real part of the number";
	cin >> c.real;
	cout << "\nEnter imaginary part of the number";
	cin>> c.img;
	return cin;
}

ostream& operator<<(ostream &cout, String str)
{
	cout << str.s << endl;
	return cout;
}
istream& operator>>(istream &cin, String &str)
{
	char temp[50];
	cout << "\nEnter the string : ";
	cin >> temp;
	str.s = (char *)malloc(sizeof(char)*(strlen(temp) + 1));
	strcpy(str.s, temp);
	return cin;
}

int main()
{
	cout << "Select option to run program:\n";
	int option;
	while (1)
	{
		cout << "\n1.Program1\n2.Program2\n3.Program3\n4.Program4\n\
5.Program5\n6.Program6\n7.Exit\n";
		cin >> option;
		if (option == 7)
			break;
		switch (option)
		{
		case 1:
		{
			Polar p1, p2, p3;
			break;
		}
		case 2:
		{
			Student s[2];
			cin >> s[0];
			cin >> s[1];
			generate_results(s, 2);
			break;
		}
		case 3:
		{
			Employee e[5];
			cin >> e;
			int i;
			for (i = 0; i < 5;i++)
				e[i].read_data();
			break;
		}
		case 4:
		{
			Complex c1,c2(2,3),c3(c2),c4,c5,c6,c7,c8,c9,c10;
			cout << "\nc1 = " << c1;
			cout << "\nc2(2,3) = " << c2;
			cout << "\nc3(c2) = " << c3;
			c4 = c1 + c2;
			cout << "\nc4 = c1 + c2 = " << c4;
			c5 = c2 - c1;
			cout << "\nc5 = c2 - c1 = " << c5;
			c6 = -c2;
			cout << "\nc6 = -c2 = " << c6;
			c7 = c4++;
			cout << "\nc7 = c4++ = " << c7;
			c8 = ++c5;
			cout << "\nc8 = ++c5 = " << c8;
			c9 = c8;
			cout << "\nc9 = c8 = " << c9;
			c10 = (c7, c8, c9);
			cout << "\nc10 = (c7, c8, c9)" << c10;
			cout << "\nc2->real = "<<c2->real<<"\nc2->img = "<<c2->img;
			break;
		}
		case 5:
		{
			String a1, a2, a3;
			cin >> a1;
			a2 = a1;
			String a4(a1);
			a3 = a1 + a4;
			cout <<"\na1 = "<< a1;
			cout <<"\na2 = "<< a2;
			cout <<"\na3 = " <<a3;
			cout <<"\na2[2] = "<< a2[2] ;
		}
		case 6:
		{
			String_2 s1("Pratik"), s2(s1);
			cout << s1.s<<endl;
			cout << s2.s;
		}
		}
	}
}