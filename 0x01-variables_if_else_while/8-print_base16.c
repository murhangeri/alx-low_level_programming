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
	int s = 0;

	while (i < 16)
	{
		i++;
		if (i <= 10)
		{
			putchar('0' + s);
			s++;
		}
		else
		{
			putchar('a' + a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
