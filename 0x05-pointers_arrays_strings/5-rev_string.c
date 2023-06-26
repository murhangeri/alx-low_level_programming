#include "main.h"
/**
 * rev_string -reverse string
 * @s: input
 * Return: void
 */

void rev_string(char *s)
{
	char rs = s[0];
	int i;
	int a;

	while (*s != '\0')
	{
		i++;
	}
	for (a = 0; a < i; a++)
	{
		i--;
		rs = s[a];
		s[a] = s[i];
		s[i] = rs;
	}
}
