#include <stdarg.h>
#include <stdio.h>

#ifndef VARIADIC
#define VARIADIC
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print - types to be printed
 * @x: char type
 * @fun_ptr: funct
 */
typedef struct print
{
	char *x;
	void (*fun_ptr)(va_list);
} t_print;
void print_all(const char * const format, ...);
#endif
