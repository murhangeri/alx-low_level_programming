#include "main.h"

/**
 * _memset - function
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: return value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
