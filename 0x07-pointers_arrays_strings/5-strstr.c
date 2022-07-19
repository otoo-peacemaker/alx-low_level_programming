#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string to search in
* @needle: substring to search
* Return: pointer to the beginning of
* the located substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *string = haystack;
char *substring = needle;

/* if the first character of the substring match, check entire string*/
while (*haystack && *substring && *haystack == *substring)
{
haystack++;
substring++;
}
/* if complete sub-string match, return starting address */
if (!*substring)
return (string);

/* increment main string */
haystack = string + 1;
}

return ('\0');
}
