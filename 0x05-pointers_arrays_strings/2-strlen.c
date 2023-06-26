#include "main.h"
/**
 * _strlen - returns length of string
 * @s: input string pointer
 * Return: retun the size of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
