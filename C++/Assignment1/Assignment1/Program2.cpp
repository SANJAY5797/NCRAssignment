#include "stdafx.h"
#include<iostream>
#include<string.h>
using namespace std;

class Student{
	char *name;
	char *grade;
	int m1, m2, m3;
public:
	void set_Data(char *s, int marks1, int marks2, int marks3)
	{
		int name_len = strlen(s);
		name = (char*)malloc(sizeof(char)*(name_len + 1));
		strcpy(name, s);
		m1 = marks1;
		m2 = marks2;
		m3 = marks3;
	}
	float calculateAverage()
	{
		float average = (float)(m1 + m2 + m3) / 3;
		//cout << "Average of 3 subjects = " << average;
		return average;
	}
	void ComputeGrade()
	{

		float average = calculateAverage();
		grade = (char*)malloc(sizeof(char) * 15);
		if (average < 40)
		{
			strcpy(grade, "Fail");
		}
		else
		{
			if (average < 50)
			{
				strcpy(grade, "Third Class");
			}
			else
			{
				if (average < 60)
					strcpy(grade, "Second Class");
				else
					strcpy(grade, "First Class");
			}
		}
	}
	void display()
	{
		cout << "Student name : " << name << "\nStudent grade : " << grade << "\nStudent marks1 :" << m1 <<"\nStudent marks2 : "<<m2<<"\nStudent marks3 : "<< m3;
	}
};