#include <stdio.h>
/*
 * main - prints a-z using putchar()
 * main: prints a-z
 * return: always zero
 */

int main(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet = 'z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	return (0);
}
