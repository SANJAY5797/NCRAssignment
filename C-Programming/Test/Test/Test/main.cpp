#include<stdio.h>
#include "stdafx.h"

void program1();
void program2();
void program3();
void program4();

int main()
{
	int option;
	while (1)
	{
		printf("\nEnter the program number to execute : \n1.Program1\n2.Program2\n3.Program3\n4.Program4\n5.Exit\n");
		scanf_s("%d", &option);
		if (option == 5)
			break;
		switch (option)
		{
			case 1:
				program1();
				break;
			case 2:
				program2();
				break;
			case 3:
				program3();
				break;
			case 4:
				program4();
				break;
			default:
				printf("Wrong option");
				break;
		}
	}
	getchar();
	return 0;
}