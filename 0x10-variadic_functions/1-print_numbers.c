#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: input separator
 * @n: input numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char s;

	if (!separator)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			separator = &s;
		printf("%d%s", va_arg(ap, unsigned int), separator);
	}
	printf("\n");
	va_end(ap);
}
