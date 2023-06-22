#include <stdio.h>
/*
 * main - prints a-z using putchar()
 * main: prints a-z
 * return: always zero
 */

int main(void)
{
	char Alphabet = 'a';

	while (Alphabet <= 'z')
	{
		putchar(Alphabet);
		Alphabet++;
	}
	putchar('\n');
	return (0);
}
