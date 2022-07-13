#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: character pointer variable
* @src: character pointer variable
* Return: pointer to the result sting dest
*/
char *_strcat(char *dest, char *src)
{
int i, j = 0;

for (i = 0;dest[i] != '\0'; i++)
;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}

return (dest);
}
