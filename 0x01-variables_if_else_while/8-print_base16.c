#include <stdio.h>
/**
 * main - base 16 numbers
 *
 * Return: Always zero
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		i++;
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
			putchar('A' + i);
	}
	putchar('\n');
	return (0);
}
