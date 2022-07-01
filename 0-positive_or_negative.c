#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void){
    int n;
    srand(time(0));
    n = rand() -RAND_MAX / 2;
    /*your code goes here*/
    if (n > 0) printf("%d is a positive", n);
    if (n == 0) printf("%d is a zero", n);
    if (n < 0) printf("%d is a negative", n);
    return (0);
