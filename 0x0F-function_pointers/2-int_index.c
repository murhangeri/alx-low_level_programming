include "function_pointers.h"

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

	if (size <= 0)
		return (-1);
	while (size > a)
	{
		if (cmp(array[a]) == 1)
			return (a);
		a++;
	}
	return (-1);
}
