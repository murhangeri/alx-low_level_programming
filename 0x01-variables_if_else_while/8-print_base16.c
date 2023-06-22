#include <stdio.h>
/**
 * main - base 16 numbers
 *
 * Return: Always zero
 */

int main(void)
{
	int i = 0;
	int a = 0;

	while (i < 16)
	{

		if (i < 10)
		{
			putchar('0' + i);
			i++;
		}
		else
			putchar('A' + i);
		a++;
		a = a - i;
	}
	putchar('\n');
	return (0);
}
