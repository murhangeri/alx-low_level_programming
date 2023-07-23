#include "main.h"
/**
 * _memcpy - function
 * @src: input 
 * @dest: input
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
