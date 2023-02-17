#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - 
 * Return: 0
 */
int main(void)
{
	int n;
	int re;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	re = n%10;
	if (re > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, re);
	else if (re == 0)
		printf("Last digit of %d is %d and is 0\n", n, re);
	else if (re < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, re);
	else
		printf("end");
		return(0);
}
