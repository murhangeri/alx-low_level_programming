#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: input where memory area is copied
 * @dest: input where memory area is saved
 * @n: input
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
