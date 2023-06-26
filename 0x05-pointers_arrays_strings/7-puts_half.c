#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int i = 0;
	int aa = 0;

	while (*str != '\0')
	{
		a++;
	}
	aa = a;
	if (a % 2 == 0)
	{
		a = a / 2;
	}
	else
		a = (a - 1) / 2;
	for (i = a; i < aa; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
