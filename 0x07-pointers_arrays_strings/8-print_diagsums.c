#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diag sum
 * @a: 2-d array input
 * @size: size of a squre matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int c = 0;
	int sum = 0;
	int b = 0;
	int sum2 = 0;

	for (; c < size; c++)
	{
		for (; b < size; b++)
		{
			if (c == b)
			{
				sum = sum + a[c * size + b];
			}
			if (b == (size - c - 1))
			{
				sum2 = sum2 + a[size * (c + 1) - c - 1];
			}
		}
		b = 0;
	}
	printf("%d, %d\n", sum, sum2);
}
