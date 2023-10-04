#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, ti = 0, tn = 1, a = 1, b;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			tn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				a *= 10;
			size++;
		}
		count++;
	}

	for (b = count - size; b < count; b++)
	{
		ti = ti + ((*(s + b) - 48) * a);
		a /= 10;
	}
	return (ti * tn);
}
