#include "main.h"
#include <stdio.h>
/**
 * main - check the code for alx students.
 *
 * Return: Always 0.
 */


int main(void)
{

//variable declarations
  char s1[98] = "Hello ";
  char s2[] = "World!\n";
  char *p;
  int i;
  char s[] = "Holberton School!\n";



//main 0
  printf("%s\n", s1);
  printf("%s", s2);
  p = _strcat(s1, s2);
  printf("%s", s1);
  printf("%s", s2);
  printf("%s", p);

//main 1

printf("%s\n", s1);
  printf("%s", s2);
  p = _strncat(s1, s2, 1);
  printf("%s\n", s1);
  printf("%s", s2);
  printf("%s\n", p);
  p = _strncat(s1, s2, 1024);
  printf("%s", s1);
  printf("%s", s2);
  printf("%s", p);



//main 2
for (i = 0; i < 98 - 1; i++)
    {
      s1[i] = '*';
    }
  s1[i] = '\0';
  printf("%s\n", s1);
  p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
  printf("%s\n", s1);
  printf("%s\n", p);
  p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
  printf("%s", s1);
  printf("%s", p);
  for (i = 0; i < 98; i++)
    {
      if (i % 10)
        {
	  printf(" ");
        }
      if (!(i % 10) && i)
        {
	  printf("\n");
        }
      printf("0x%02x", s1[i]);
    }
  printf("\n");





//main 3



  char s3[] = "Hello";
  char s4[] = "World!";

  printf("%d\n", _strcmp(s3, s4));
  printf("%d\n", _strcmp(s4, s3));
  printf("%d\n", _strcmp(s3, s3));


//main 4

int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

  print_array(a, sizeof(a) / sizeof(int));
  reverse_array(a, sizeof(a) / sizeof(int));
  print_array(a, sizeof(a) / sizeof(int));


//main 5

  p = string_toupper(s);
  printf("%s", p);
  printf("%s", s);

//main 6

	s = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";

  p = cap_string(s);
  printf("%s", p);
  printf("%s", s);


//main 7
	s = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
        p = leet(s);
        printf("%s", p);
        printf("%s", s);


//main 8
       
	s = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";

  p = rot13(s);
  printf("%s", p);
  printf("------------------------------------\n");
  printf("%s", s);
  printf("------------------------------------\n");
  p = rot13(s);
  printf("%s", p);
  printf("------------------------------------\n");
  printf("%s", s);
  printf("------------------------------------\n");
  p = rot13(s);
  printf("%s", p);
  printf("------------------------------------\n");
  printf("%s", s);














  return (0);
}
