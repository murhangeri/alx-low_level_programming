#include "main.h"
/**
 * print_array- print array
 * @a: input
 * @n: input
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (*a != '\0' && i < n)
	{
		printf("%d, ", a[i]);
		i++;
		n++;
		if (i = n - 1)
		{
			break;
		}
	}
	_putchar('\n');
}
