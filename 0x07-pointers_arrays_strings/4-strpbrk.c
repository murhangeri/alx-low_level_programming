#include "main.h"
#include <string.h>
/**
 * _strpbrk- entry point
 * @s: string to be scanned
 * @accept: matching char
 *
 * Return: return pointer
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
