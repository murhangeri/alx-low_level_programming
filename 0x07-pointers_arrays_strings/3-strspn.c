#include "main.h"
#include <string.h>
/**
 * _strspn - entry point
 * @s: main string
 * @accept: search string
 *
 * Return: number of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
