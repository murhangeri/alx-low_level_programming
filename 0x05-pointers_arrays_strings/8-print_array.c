#include "main.h"
/**
 * print_array- print array
 * @a: input
 * @n: input
 * Return: void
 */

void print_array(int *a, int n)
{
	int ar[n];
	int i = 0;

	while (*a != '\0' && i < n)
	{
		ar[i] = *a;
		printf("%d, ", ar[i]);
		i++;
		s++;
	}
	_putchar('\n');
}
