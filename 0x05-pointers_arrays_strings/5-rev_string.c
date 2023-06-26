#include "main.h"
/**
 * rev_string -reverse string
 * @s: input
 * Return: void
 */

void rev_string(char *s)
{
	char rs[0];
	int i;
	int b = 0;

	while (*s != '\0')
	{
		i++;
	}
	for (int a = 0; a < i; a++)
	{
		i--;
		rs = s[a];
		s[a] = s[i];
	}
}
