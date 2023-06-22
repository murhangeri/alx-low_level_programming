#include <stdio.h>
/*
 * main: prit alphabet except for e and q
 *
 * retun: always zero
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' || alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
