// Assignment3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void problem1();

int main()
{
	printf("Select option to run program function\n");
	int option;
	while (1)
	{
		printf("1. Program1 \n 2. Program2 \n 3. Program3 \n 4. Program4 \n 5. Program5 \n 6. Exit \n");
		scanf_s("%d",&option);
		if (option == 6)
			break;
		switch (option)
		{
		case 1:
			problem1();
			break;
		case 6:
			break;
		}
	}
	getchar();
}