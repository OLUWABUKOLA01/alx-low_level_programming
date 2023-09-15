#include "main.h"

/**
 * print_diagonal -  draw a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)

{
	int j, k;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (k = 1; k <= j; k++)
			{
				if (k != j)
				_putchar(' ');
				else if (k == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}
