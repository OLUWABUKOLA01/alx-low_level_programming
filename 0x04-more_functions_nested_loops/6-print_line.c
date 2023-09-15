#include "main.h"

/**
 * print_line - print a line in the terminal
 *
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int t;

	if (n > 0)
	{
		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

