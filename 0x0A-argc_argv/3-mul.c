#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of all the arguments
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num1 = 0;
	int num2 = 0;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
	}
	return (0);
}
