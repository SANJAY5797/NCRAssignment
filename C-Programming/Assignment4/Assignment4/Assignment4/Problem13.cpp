#include <stdio.h>
#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

bool input_validation(char* input)
{
	int counter = 0, len_input = 0;
	len_input = strlen(input);//length of input string 
	for (counter = 0; counter < len_input; counter++) //loop for checking validation of input  
	{
		if ((input[counter] == '-') || (input[counter] >= 'a' && input[counter] <= 'z') || (input[counter] >= 'A' && input[counter] <= 'Z') ||
			(input[counter] >= '0'&&input[counter] <= '9'))//Testing valid characters
		{
			if (input[counter] == '-')
			{
				if (counter == 0)//If initial character is hyphen(-)
				{
					printf("Error : First letter cannot be a hyphen(-)");
					return false;
				}
				else
				{
					if (counter == len_input - 1)
					{
						printf("Error : Last letter cannot be a hyphen(-)");
						return false;
					}
					if (input[counter + 1] == '-')//Continuos hyphens like ---
					{
						printf("Error : Continuous hyphens not allowed");
						return false;
					}
					if (input[counter - 1] >= 'a' && input[counter - 1] <= 'z')//Type mismatch of character befor and after hyphen
					{
						if (!(input[counter + 1] >= 'a' && input[counter + 1] <= 'z'))
							printf("Error : Mismatch of characters before and after hyphen");
						return false;
					}
					if (input[counter - 1] >= 'A' && input[counter - 1] <= 'Z')//Type mismatch of character befor and after hyphen
					{
						if (!(input[counter + 1] >= 'A' && input[counter + 1] <= 'Z'))
							printf("Error : Mismatch of characters before and after hyphen");
						return false;
					}
					if (input[counter - 1] >= '0' && input[counter - 1] <= '9')//Type mismatch of character befor and after hyphen
					{
						if (!(input[counter + 1] >= '0' && input[counter + 1] <= '9'))
							printf("Error : Mismatch of characters before and after hyphen");
						return false;
					}
					if (input[counter + 1] < input[counter - 1])//If characters before and after hyphen are in wrong order like f-a
					{
						printf("Error : Letter's before and after hyphen expected to be in ascending order");
						return false;
					}
				}
			}
		}
		else
		{
			printf("Error : String entered is wrong only alphabets,numbers and hyphens(-) expected");//Unexpected character entered.
			return false;
		}
	}
	return true;//If input is valid
}

int cal_output_length(char *input)
{
	int counter = 0, len_input = 0, len_output = 0;
	len_input = strlen(input);//length of input string
	len_output = len_input;
	for (counter = 0; counter < len_input; counter++)
	{
		if (input[counter] == '-')
		{
			len_output = len_output + input[counter + 1] - input[counter - 1] - 1;//Length of string replacing the hyphen (-) with alphabets.
		}
	}
	return len_output;
}

void problem13(char *input,char *output)
{
	int counter = 0, len_output = 0, no_of_hyphens = 0, index1 = 0, index2 = 0;
	if (false == input_validation(input))//Input validation invoked
		return;
	len_output = cal_output_length(input);
	output = (char*)malloc(sizeof(char)*(len_output+1));//Dynamic memory allocation of ouput string
	while (index1<strlen(input))
	{
		if (input[index1] == '-')//Replace the hyphen with the full form of shorthand expression
		{
			char end = input[index1 + 1];
			char start = input[index1 - 1];
			while (start < end-1)
			{
				output[index2++] = ++start;
			}
		}
		else//Copy other characters as it is
		{
			output[index2++] = input[index1];
		}
		index1++;
	}
	output[index2] = '\0';
	printf("\nExpanded string is :");
	printf("%s",output);
	free(output);
}