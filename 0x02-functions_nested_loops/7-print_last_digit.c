#include "main.h"

/**
 * print _last_digit - print last digit of number
 *
 * @n: Number used to find the last digit
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);

}
