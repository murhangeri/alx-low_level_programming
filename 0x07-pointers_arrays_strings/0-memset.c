#include "main.h"
#include <string.h>
/**
 * _memset - fillsmemory area
 * @s: input pointer
 * @b: input
 * @n: number of bytes
 *
 * Return: return value is memory copied
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
