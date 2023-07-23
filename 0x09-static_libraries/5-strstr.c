#include "main.h"
#include <stdio.h>

/**
 * _strstr - function
 * @haystack: string to search
 * @needle: string to search for
 *
 * Return: returns pointer to location of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		int j, start;

		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
		       needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + start);
		i = start + 1;
	}
	return (NULL);
}
