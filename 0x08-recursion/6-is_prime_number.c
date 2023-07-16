#include "main.h"
int prime_number(int n, int b);

/**
 * is_prime_number - prime number
 * @n: input
 *
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(n, n - 1));
}

/**
 * prime_number - prime number
 * @n: number
 * @b: increament
 *
 * Return: Prime number
 */
int prime_number(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
	{
		return (0);
	}
	else
		return (prime_number(n, b - 1));
}
