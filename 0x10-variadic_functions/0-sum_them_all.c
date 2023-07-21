#include "variadic_functions.h"

/**
 * sum_them_all - add argumenst of variadic functions
 * @n: input of variadic function
 *
 * Return: sum of variadic function
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);
	va_end(ap);
	return (sum);
}
