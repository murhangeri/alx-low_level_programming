#include <stdio.h>
/*
 * main - print decinal digits
 *
 * Return: always zero
 */

int main(void)
{
	char a = '0';

	while (a < '10')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
