#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @ch: pointer to the string to change
* Return: the converted string
*/
char *string_toupper(char *ch)
{
int i = 0;

while (ch[i] != '\0')
{
if (ch[i] >= 'a' && ch[i] <= 'z')
ch[i] = 'A' + (ch[i] - 'a');
i++;
}
return (ch);
}
