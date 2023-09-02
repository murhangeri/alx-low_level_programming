#include "main.h"
/**
 * _strncpy - main
 * @dest: dest
 * @src: source
 * @n: N
 *
 *Return: return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[b] = src[b];
	}
	for (; b  < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
