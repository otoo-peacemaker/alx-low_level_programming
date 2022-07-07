#include "main.h"
#include <stdio.h>

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);


	//infinite loop
	printf("Infinite loop incoming :(\n");
	
	i = 0;
	
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
