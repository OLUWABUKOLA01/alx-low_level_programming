#include "main.h"

/**
 * print_square - function to print squares
 * @size : integer value
 *
 */
void print_square(int size)
{
	int c, d;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
