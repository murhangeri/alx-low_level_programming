#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: variable separator
 * @n: number of variable
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char s;

	va_list(ap);

	va_start(ap, n);
	if (!separator)
		return;
	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			separator = &s;
		printf("%s%s", va_arg(ap, char*), separator);
	}
	va_end(ap);
	printf("\n");
}
