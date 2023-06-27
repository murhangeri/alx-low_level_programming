#include "main.h"
/**
 * _strcpy - returns copy
 * @dest: input
 * @src: input
 * Return: returns pointer to a char
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (*(scr + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
