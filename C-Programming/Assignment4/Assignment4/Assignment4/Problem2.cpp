#include<stdio.h>
#include "stdafx.h"

void problem2()
{
	char *color[6] = { "red", "green", "blue", "white", "black", "yellow" };
	printf("\ncolor = %lu\n", color);
	printf("(color+2) = %lu\n", (color + 2));
	printf("*color = %s\n", *color);
	printf("*(color+2) = %s\n", *(color + 2));
	printf("color[5] = %s, *(color + 5) = %s\nNo difference just the representation is different", 
		color[5], *(color + 5));
}