#include "main.h"
/**
 * square_root -  return the natural square root of a number
 * @y: num1
 * @z: num2
 * Return: square root
 */
int square_root(int y, int z)
{
	if (z * z > y)

		return (-1);
	else if (z * z == y)
		return (z);
	else
		return (square_root(y, z + 1));
}


#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
