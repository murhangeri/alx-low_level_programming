#include "main.h"
#include <string.h>
/**
 * _memcpy - copy memory area
 * @dest: input
 * @src: input to store memory
 * @n: number of bytes
 *
 * Return: return value is memory copied
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
