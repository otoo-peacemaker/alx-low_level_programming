#include "main.h"

/**
* *_strncat - function that concatenates two strings
* using at most n bytes from src
* @dest: character pointer variable
* @src: character pointer variable
* @n: integer variable
* Return: pointer to dest variable
*
*/
char *_strncat(char *dest, char *src, int n)
{
int x, y = 0;

for (x = 0; dest[x] != '\0'; x++)
;
while (src[y] != '\0' && y < n)
{
dest[x + y] = src[y];
y++;
}

return (dest);
}
