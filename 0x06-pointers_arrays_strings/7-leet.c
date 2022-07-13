#include "main.h"

/**
* leet - function that encodes a string into 1337.
* @s: pointer to string to be encoded
* Return: pointer to encoded string
*/
char *leet(char *s)
{
int i, j;
char sub[] = "aAeEoOtTlL";
char enc[] = "43071";

i = 0;
while (s[i] != '\0')
{
for (j = 0; sub[j] != '\0'; j++)
if (s[i] == sub[j])
s[i] = enc[j / 2];
i++;
}
return (s);
}
