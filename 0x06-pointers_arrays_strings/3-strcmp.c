#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1: character pointer variable
* @s2: character pointer variable
* Return: positive, negative or zero integer
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
;

return (s1[i] - s2[i]);
}
