// Assignment3.cpp : Defines the entry point for the console application.
//
#include<stdio.h>
#include "stdafx.h"

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();


int main()
{
	printf("Select option to run program function\n");
	int option;
	while (1)
	{
		printf("\n1. Program1 \n 2. Program2 \n 3. Program3 \n 4. Program4 \n 5. Program5 \n 6. Exit \n");
		scanf_s("%d",&option);
		if (option == 6)
			break;
		switch (option)
		{
		case 1:
			problem1();
			break;
		case 2:
			problem2();
			break;
		case 3:
			problem3();
			break;
		case 4:
			problem4();
		case 5:
			problem5();
		case 6:
			break;
		}
	}
	getchar();
}