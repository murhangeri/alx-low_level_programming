#include "main.h"

/**
 * _strcpy - function
 * @dest: input
 * @src: input
 *
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
