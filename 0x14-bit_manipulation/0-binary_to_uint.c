#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int a;


	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

	number = (number << 1) | (b[a] - '0');
	}

	return (number);
}
