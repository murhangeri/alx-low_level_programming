#include "main.h"
/**
 * puts2 - put 2
 * @str: inputs
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int a = 0;

	while (*str != '\0')
	{
		i++;
	}
	for (a = 0; a < i; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
}
