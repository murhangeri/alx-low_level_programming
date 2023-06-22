#include <stdio.h>
/**
 * main - print alphabets in reverse
 *
 * Return: Always zero
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
