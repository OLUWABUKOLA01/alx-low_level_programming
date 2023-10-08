#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: Mini values
 * @max: Max values
 * Return: Values
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *k;

	if (min > max)
		return (NULL);
	i = max - min + 1;

	k = malloc(sizeof(int) * i);
	if (k == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		k[j] = min++;

	return (k);
}
