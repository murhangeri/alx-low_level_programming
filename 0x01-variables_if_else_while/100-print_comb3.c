#include <stdio.h>
/**
 * main - print combination of two characters
 *
 * Return: Always zero
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int b = 10;
	int c = 10;
	int d = 0;
	int e = 0;

	for (i = 0; i < b; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (d != e)
			{
				putchar(d);
				putchar(e);
				putchar(',');
				putchar(' ');
				e++;
			}
		}
		d++;
	}
	return (0);
}
