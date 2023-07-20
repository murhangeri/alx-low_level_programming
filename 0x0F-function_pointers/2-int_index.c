#include "function_pointers.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * int_index - return index of array after compare
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 *
 * Return: returns index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;
	bool t;

	if (size <= 0)
		return (-1);
	while (size > a)
	{
		t = cmp(array[a]);
		if (t == true)
			break;
		a++;
	}
	if (t == true)
		return (a);
	return (-1);
}
