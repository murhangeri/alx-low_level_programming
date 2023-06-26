#include "main.h"
/**
 * print_rev - print revers string
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	for (i = a; i > 0; a--)
	{
		_putchar(s[i]);
	}
}
