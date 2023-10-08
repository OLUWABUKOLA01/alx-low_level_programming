#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory allocated
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (malloc(b) == NULL)
		exit(98);
	return (i);
}
