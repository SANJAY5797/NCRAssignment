// Assignment4.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include "stdafx.h"
#define MAX_LIMIT 1000
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();
void problem12();
void problem13(char *s1, char *s2);
void problem14();
void problem15();

int main()
{
	printf("Select option to run program function\n");
	int option;
	while (1)
	{
		printf("\n1. Program1 \n 2. Program2 \n 3. Program3 \n 4. Program4 \n 5. Program5 \n 6. Program6 \n \
7. Program7 \n 8. Program8 \n 9. Program9 \n 10. Program10 \n 11. Program11 \n 12. Program12 \n \
13. Program13 \n 14. Program14 \n 15. Program15 \n 16. Exit \n");
		scanf_s("%d", &option);
		if (option == 16)
			break;
		switch (option)
		{
		case 1:
		{
			problem1();
			break;
		}
		case 2:
		{	problem2();
			break;
		}
		case 3:
		{
			problem3();
			break;
		}
		case 4:
		{
			problem4();
			break;
		}
		case 5:
		{
			problem5();
			break;
		}
		case 6:
		{	
			problem6();
			break;
		}
		case 7:
		{
			problem7();
			break;
		}
		case 8:
		{
			problem8();
			break;
		}
		case 9:
		{	
			problem9();
			break;
		}
		case 10:
		{
			problem10();
			break;
		}
		case 11:
		{	
			problem11();
			break;
		}
		case 12:
		{
			problem12();
			break;
		}
		case 13:
		{
			char *out = NULL;
			char input[MAX_LIMIT];
			printf("Input the shorthand string ");
			getchar();
			scanf("%[^\n]s", input);
			problem13(input, out);
			getchar();
			break;
		}
		case 14:
		{
			problem14();
			break;
		}
			//case 15:
			//problem15();
			//break;
		}
	}
	getchar();
}