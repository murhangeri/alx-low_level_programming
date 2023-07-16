#include "main.h"
/**
 * factorial -function
 * @n: input integer
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
