#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: character pointer variable
* @src: character pointer variable
* Return: pointer to the result sting dest
*/

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
