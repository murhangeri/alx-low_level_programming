#include "main.h"

/**
 * _isupper - If is uppercase return 1 else return 0
 *
 * @c: input
 *
 * Return: 0
 *
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
