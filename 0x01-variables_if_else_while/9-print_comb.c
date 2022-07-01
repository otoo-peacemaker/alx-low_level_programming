#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main(void){
		int digit;
		for(digit = '0'; digit <= '9'; digit++){
			putchar(digit);
			if(digit != '9'){
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		
		return (0);
	}
