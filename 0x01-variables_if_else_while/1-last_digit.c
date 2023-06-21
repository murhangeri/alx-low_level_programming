#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -entry point
 *
 * return: always return zeron
 */

int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	if (lastdig > 5)
	{
		printf("Last digit of %d is %d and is greater then 6\n", n, lastdig);
	}
	else if (lastdig == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, lastdig);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	return (0);
}
