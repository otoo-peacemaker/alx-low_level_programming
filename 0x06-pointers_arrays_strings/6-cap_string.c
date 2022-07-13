#include "main.h"

/**
* cap_string - function that capitalizes all words of a strin
* @ch: pointer to input string
* Return: pointer to Capitalized string
*/
char *cap_string(char *ch)
{
int i, j;

char sep[] = " \t\n,;.!?\"(){}";

if (ch[0] == 'a' && ch[0] == 'z')
ch[0] = 'A' + (ch[0] - 'a');

i = 1;

while (ch[i] != '\0')
{
for (j = 0; sep[j] != '\0'; j++)
if (ch[i - 1] == sep[j] && (ch[i] >= 'a' && ch[i] <= 'z'))
ch[i] = 'A' + (ch[i] - 'a');
i++;
}
return (ch);
}
