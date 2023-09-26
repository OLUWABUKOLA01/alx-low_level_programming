#include "main.h"
/**
 * print _chessboard - print a chesseboard
 * @a: function declared
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int y;
	unsigned int z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[y][z]);
		}
		_putchar('\n');
	}
}
