#include "main.h"
/**
 * swap_int - swaps two inputs
 * @a: first input
 * @b: Second input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
