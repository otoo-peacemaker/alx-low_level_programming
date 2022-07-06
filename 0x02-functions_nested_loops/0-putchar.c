#include <unistd.h>
#include "main.h"
/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *
 *  Return: On success -1
 *  on error, -1 is returned, and errno is set appropriately.
 *  main - Check description
 *  Description: It prints the word Holberton, followed by a new line.
 *  Return: 0.
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;
	
	for(i = 0; i<9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
