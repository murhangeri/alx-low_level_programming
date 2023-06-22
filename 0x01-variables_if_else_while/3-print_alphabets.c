#include <stdio.h>
/*
 * main: print Alphabets
 *
 * retun: always zero
 */

int main(void)
{
	char alpC = 'a';
	char alpS = 'A';

	while (alpC <= 'z')
	{
		putchar(alpC);
		alpC++;
	}
	while (alpS <= 'Z')
	{
		putchar(alpS);
	}
	putchar('\n');
	return (0);
}
