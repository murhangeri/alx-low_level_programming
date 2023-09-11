#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function printing a pre prosessor directive _FILE_
 *
 * Return: always zero
 */

int main(void)
{
	char str[] = __FILE__;

	printf("%s\n", str);
	return (0);
}
