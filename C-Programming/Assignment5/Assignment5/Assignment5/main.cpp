// Assignment5.cpp : Defines the entry point for the console application.
//
#include<stdio.h>
#include "stdafx.h"

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

int main()
{
	printf("Select option to run program function\n");
	int option;
	while (1)
	{
		printf("\n1. Program1 \n 2. Program2 \n 3. Program3 \n 4. Program4 \n 5. Program5 \n 6. Program6 \n \
7. Program7 \n 8. Program8 \n 9. Program9 \n 10. Program10 \n 11. Exit \n");
		scanf_s("%d", &option);
		if (option == 11)
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
			break;
		case 5:
			//problem5();
			break;
		case 6:
			problem6();
			break;
		case 7:
			//problem7();
			break;
		case 8:
			problem8();
			break;
		/*case 9:
			problem9();
			break;
		case 10:
			problem10();
			break;*/
		}
	}
	getchar();
	return 0;
}

