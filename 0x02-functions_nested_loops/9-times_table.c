#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0 (Success)
 */

void times_table(void)
{
	int num, count, product;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');

		for (count = 1; count < 10; count++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * count;

			if (product < 10)
				_putchar(' ');

			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

		}
		_putchar('\n');
	}
}
