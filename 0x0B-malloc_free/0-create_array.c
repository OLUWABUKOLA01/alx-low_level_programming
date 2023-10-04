#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character
 * Return: pointer to the array or NULL if it fail
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *str;

	if (size <= 0)
		return (0);
	str = malloc(size);
	if (str == 0)
		return (0);
	n = 0;
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	return (str);
}
