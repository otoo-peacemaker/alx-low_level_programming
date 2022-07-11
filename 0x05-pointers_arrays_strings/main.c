#include "main.h"
#include <stdio.h>
#define LEN 4
/**
 * main - check the code for alx students.
 *
 * Return: Always 0.
 */
int main(void)
{
//testing for task 0
 int n;

  n = 402;
  printf("n=%d\n", n);
  reset_to_98(&n);
  printf("n=%d\n", n);


//testing for task 1
  int a;
  int b;

  a = 98;
  b = 42;
  printf("a=%d, b=%d\n", a, b);
  swap_int(&a, &b);
  printf("a=%d, b=%d\n", a, b);

//testing for task 2
        char *str1;
	int len;

	str1 = "Alx!";
	len = _strlen(str1);
	printf("%d\n", len);

//testing for task 3

	char *str;

  	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
       _puts(str);

//testing for task 4
	char *str3;

       str3 = "I do not fear computers. I fear the lack of them - Isaac Asimov";
        print_rev(str3);

//testing for task 5

char s[10] = "ALXPROGRAM";

  printf("%s\n", s);
  rev_string(s);
  printf("%s\n", s);

//testing for task 6
char *str4;

  str4 = "0123456789";
  puts2(str4);


//testing for task 7
char *str5;

  str5 = "0123456780";
  puts_half(str5);


//testing for task 8
int array[5];

  array[0] = 98;
  array[1] = 402;
  array[2] = -198;
  array[3] = 298;
  array[4] = -1024;
  print_array(array, 5);

//testing for task 9
  char s1[98];
  char *p;

  p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
  printf("%s", s1);
  printf("%s", p);

//testing for keygen: N is the Length of the password to be generated


  return (0);
}
