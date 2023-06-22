#include <stdio.h>
/**
 * main - print decimal digits
 *
 * Return: Always zero
 */

int main(void)
{
	int a = 0;
	int i = 0;
	int c = 10;

	for (i = 0; i < c; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
