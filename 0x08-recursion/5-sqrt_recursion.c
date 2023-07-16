#include "main.h"

int square_root(int n, int b);
/**
 * _sqrt_recursion - square root
 * @n: input
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - square root
 * @n: input
 * @b: increament
 *
 * Return: square root
 */

int square_root(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	else
		return (square_root(n, b + 1));
}
