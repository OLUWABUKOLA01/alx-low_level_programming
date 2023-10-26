#include "main.h"

/**
 * flip_bits -  function that returns the number of bits to flip
 * @m: flip
 * @n: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned int bits = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}

	return (bits);
}
