#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: 2-d array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c = 0;
	int b = 8;
	int d = 0;

	for (; c < b; c++)
	{
		for (; d < 8; d++)
		{
			_putchar(a[c][d]);
		}
		_putchar('\n');
		d = 0;
	}
}
