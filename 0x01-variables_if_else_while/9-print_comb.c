#include <stdio.h>
/**
 * main - print combinations of single digit numbers
 *
 * Return: Always zero
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		putchar(',');
		i++;
	}
	return (0);
}
