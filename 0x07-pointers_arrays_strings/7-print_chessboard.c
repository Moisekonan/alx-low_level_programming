#include "main.h"

/**
 * print_chessboard - function that prints cheessboard
 * @a: matrix
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(*(*(row + a) + column));
		}
	_putchar('\n');
	}
}
