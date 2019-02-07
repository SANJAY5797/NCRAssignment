#include<stdio.h>
#include "stdafx.h"

void gross_salary()
{
	int basic,gross = 0;
	printf("Enter your basic salary");
	scanf_s("%d", &basic);
	if (basic <= 4000)
	{
		gross = basic*(1.6);
	}
	else
	{
		if (basic <= 8000)
			gross = basic*(1.8);
		else
		{
			if (basic <= 12000)
				gross = basic*(1.95);
			else
				gross = basic*(2.10);
		}
	}
	printf("Gross salary = %d", gross);
	getchar();

}

/*int main()
{
	gross_salary();
	getchar();
	return 0;
}*/