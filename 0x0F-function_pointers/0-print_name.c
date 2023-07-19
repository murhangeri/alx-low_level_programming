#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - functin print name
 * @name: inpute name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
