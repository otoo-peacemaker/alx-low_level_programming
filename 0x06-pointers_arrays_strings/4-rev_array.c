#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: integer pointer variable to an array
* @n: integer variable showing number of elements in array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
int i = 0, temp = 0;

int end = n - 1;

while (i < end)
{
/* set temp to the first number in array */
temp = a[i];
/* swap the start and end integers */
a[i] = a[end];
a[end] = temp;
/* inctement the i iterator while you decrement the end interator */
i++;
end--;
}

}
