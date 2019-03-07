#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define INITIAL_SIZE 10

char *inputString(FILE*, size_t);

char* my_strrev(char *input)
{
	int start = 0, end = strlen(input) - 1;
	char temp = 'a';//Temporary variable for swapping
	while (start <= end)//Code for reversing the string
	{
		temp = input[start];
		input[start] = input[end];
		input[end] = temp;
		start++;
		end--;
	}
	return input;
}

char* my_strcpy(char* destination,char* source)
{
		int counter = 0;
		while (source[counter] != '\0')//Copying source to destination character by character
			destination[counter++] = source[counter];
		destination[counter] = '\0';
		return destination;
}

char* my_strconcat(char* destination, char* source)
{
	destination = (char*)realloc(destination, sizeof(char)*(strlen(destination) + strlen(source) + 1));//Allocating total memory after concatination
	if (destination == NULL)
	{
		printf("No heap space available for new string\n");//If no heap space available
	}
	int index_destination = strlen(destination);
	int index_source = 0;
	for (index_source = 0; index_source <= strlen(source); index_source++,index_destination++)//Appending source to destination
		destination[index_destination] = source[index_source];
	return destination;
}

int my_strcmp(char* string1, char* string2)
{
	int index1 = 0, index2 = 0;
	while (string1[index1] != '\0' && string2[index2] != '\0')//Comparing till atleast one of the string gets exhausted
	{
		if (string1[index1] > string2[index2])
			return 1;//If string1 is greater
		else if (string1[index1] < string2[index2])
			return -1;//If string2 is greater
		index1++;
		index2++;
	}
	if (index1 < strlen(string1))//If all characters are same upto length of string2
		return 1;
	else if (index2 < strlen(string2))//If all characters are same upto length of string1
		return -1;
	return 0;//If both strings are same
}

void problem15()
{
	int option = 0;
	while (1)
	{
		printf("Enter a string\n");
		char *input;
		fflush(stdin);
		input = inputString(stdin,INITIAL_SIZE);//Taking input from user
		if (input == NULL)
		{
			printf("No heap space available for new string\n");//If no heap space available
		}
		printf("Select the option\n1.Strrev\n2.Strcpy\n3.Strcat\n4.Strcmp\n5.Exit\n");
		scanf("%d", &option);
		if (option == 5)
			break;
		switch (option)
		{
		case 1://Reversing the string
		{
			printf("Strrev output = %s\n", my_strrev(input));
			break;
		}
		case 2:
		{
			char *output;
			output = (char*)malloc(sizeof(char)*(strlen(input) + 1));//Dynamic memory allocation for output string
			if (output == NULL)
			{
				printf("No heap space available for new string\n");//If no heap space available
			}
			else
			{
				my_strcpy(output, input);
				printf("Copied string is = %s\n", output);
				free(output);//Freeing dynamic memory allocation
			}
			break;
		}
		case 3:
		{
			char *concat;
			printf("Enter another string to concatinate\n");
			getchar();
			concat = inputString(stdin, INITIAL_SIZE);//Taking input from user
			if (concat == NULL)
			{
				printf("No heap space available for new string\n");//If no heap space available
			}
			else
			{
				input = my_strconcat(input, concat);
				printf("Concatenated string is = %s\n", input);
			}
			free(concat);
			break;
		}
		case 4:
		{
			char *compare;
			printf("Enter another string to compare\n");
			getchar();
			compare = inputString(stdin, INITIAL_SIZE);//Taking input from user
			if (compare == NULL)
			{
				printf("No heap space available for new string\n");//If no heap space available
			}
			if (my_strcmp(input, compare) == 1)
			{
				printf("The first string is greater\n");
			}
			else if (my_strcmp(input, compare) == 0)
			{
				printf("Both the strings are same\n");
			}
			else if (my_strcmp(input, compare) == -1)
			{
				printf("The second string is greater\n");
			}
			free(compare);
			break;
		}
		}
		free(input);
	}
}