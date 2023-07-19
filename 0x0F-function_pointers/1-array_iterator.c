#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function
 * @array: array input
 * @size: size of array
 * @action: function poiter
 *
 * Reurn: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a  = 0;

	if (size == 0 || !array || !action)
		return;
	while (size >= a)
	{
		action(array[a]);
		a++;
	}
}
