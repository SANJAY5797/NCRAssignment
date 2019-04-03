
#include <stdio.h>
#include <stdlib.h>
#define INITIAL_SIZE 10
char *inputString(FILE*, size_t);
bool input_validation(char*);
char* infix_to_postfix(char*);
long double postfix_evaluation(char *str);

int main()
{
	printf("Enter the expression to evaluate\n");
	char *input;
	fflush(stdin);
	input = inputString(stdin, INITIAL_SIZE);//Taking input from user
	if (input == NULL)
	{
		printf("No heap space available for string\n");//If no heap space available
	}
	if (!input_validation(input))
		return false;
	char* postfix = infix_to_postfix(input);//Conversion of infix to postfix
	printf("Value of expression = %Lf", postfix_evaluation(postfix));//Calculate value of expression 

	getchar();
	return 0;
}