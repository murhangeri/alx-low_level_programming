#include "main.h"
/**
 * reset_to_98 - reset any value to 98
 * @n - input pinter
 * Return - returns void
 */

void reset_to_98(int *n)
{
	int *a;

	*a = &n;
	a = 98;
}
