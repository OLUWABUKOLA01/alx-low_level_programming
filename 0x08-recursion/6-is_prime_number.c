#include "main.h"

/**
 * prime_number - To identify prime numbers
 * @y: num1
 * @z: num2
 * Return: Success
 */

int prime_number(int y, int z)
{
	if (y == z)
		return (1);
	if (y % z == 0)
		return (0);
	else
		return (prime_number(y, z + 1));
}

/**
 * is_prime_number - To identify prime numbers
 * @n: Value
 * Return: Success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
