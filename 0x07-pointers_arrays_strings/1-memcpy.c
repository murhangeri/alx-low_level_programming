#include "main.h"
#include <string.h>
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
	return (memcpy(dest, src, n));
}
