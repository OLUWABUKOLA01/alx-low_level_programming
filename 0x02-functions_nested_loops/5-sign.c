#include "main.h"
/**
 * _sign - prints_sign of numbers
 *
 * @n: numbers of print_signs to be checked
 *
 * Return: 1 if positive or greater than 0, 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if  (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
