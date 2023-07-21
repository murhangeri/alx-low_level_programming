#include "variadic_functions.h"

/**
 * p_char - print type char
 * @list:arg
 * Return: void
 */

void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * p_string - print type string
 * @list:arg
 * Return: void
 */

void p_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * p_integer - print type integer
 * @list:arg
 * Return: void
 */

void p_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * p_float - print type float
 * @list:arg
 * Return: void
 */

void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - print anything
 * @format: input formart
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int a, b;
	t_print t[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_integer},
		{"f", p_float},
		{NULL, NULL}
	};
	va_list ap;
	char *s = "";

	va_start(ap, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (t[b].x != NULL)
		{
			if (*(t[b].x) == format[a])
			{
				printf("%s", s);
				t[b].fun_ptr(ap);
				s = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	va_end(ap);
	printf("\n");
}
