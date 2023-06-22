#include <stdio.h>
/*
 * main: print decinal digits
 *
 * return: always zero
 */

int main(void)
{
	int a = 0;

	for (int i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
